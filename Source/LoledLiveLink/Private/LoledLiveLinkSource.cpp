
#include "LoledLiveLinkSource.h"

#include "ILiveLinkClient.h"
#include "LiveLinkTypes.h"
#include "Roles/LiveLinkTransformRole.h"
#include "Roles/LiveLinkTransformTypes.h"
#include "Roles/LiveLinkCameraRole.h"
#include "Roles/LiveLinkCameraTypes.h"

#include "Async/Async.h"
#include "Common/UdpSocketBuilder.h"
#include "HAL/RunnableThread.h"
#include "Sockets.h"
#include "SocketSubsystem.h"

#include "Loled.h"

#define LOCTEXT_NAMESPACE "FLoledLiveLinkSource"

#define RECV_BUFFER_SIZE 1024 * 1024


FLoledLiveLinkSource::FLoledLiveLinkSource(FIPv4Endpoint InEndpoint)
	: Socket(nullptr)
	, Stopping(false)
	, Thread(nullptr)
	, WaitTime(FTimespan::FromMilliseconds(10))
{
	// defaults
	DeviceEndpoint = InEndpoint;

	SourceStatus = LOCTEXT("SourceStatus_DeviceNotFound", "Device Not Found");
	SourceType = LOCTEXT("LoledLiveLinkSource", "Loled LiveLink");
	SourceMachineName = LOCTEXT("LoledLiveLinkSourceMachineName", "localhost");

	//setup socket
	if (DeviceEndpoint.Address.IsMulticastAddress())
	{
		Socket = FUdpSocketBuilder(TEXT("LOLEDSOCKET"))
			.AsNonBlocking()
			.AsReusable()
			.BoundToPort(DeviceEndpoint.Port)
			.WithReceiveBufferSize(RECV_BUFFER_SIZE)

			.BoundToAddress(FIPv4Address::Any)
			.JoinedToGroup(DeviceEndpoint.Address)
			.WithMulticastLoopback()
			.WithMulticastTtl(2);

	}
	else
	{
		Socket = FUdpSocketBuilder(TEXT("LOLEDSOCKET"))
			.AsNonBlocking()
			.AsReusable()
			.BoundToAddress(DeviceEndpoint.Address)
			.BoundToPort(DeviceEndpoint.Port)
			.WithReceiveBufferSize(RECV_BUFFER_SIZE);
	}

	RecvBuffer.SetNumUninitialized(RECV_BUFFER_SIZE);

	if ((Socket != nullptr) && (Socket->GetSocketType() == SOCKTYPE_Datagram))
	{
		SocketSubsystem = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM);

		Start();

		SourceStatus = LOCTEXT("SourceStatus_Receiving", "Receiving");
	}
}

FLoledLiveLinkSource::~FLoledLiveLinkSource()
{
	Stop();
	if (Thread != nullptr)
	{
		Thread->WaitForCompletion();
		delete Thread;
		Thread = nullptr;
	}
	if (Socket != nullptr)
	{
		Socket->Close();
		ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->DestroySocket(Socket);
	}
}

void FLoledLiveLinkSource::ReceiveClient(ILiveLinkClient* InClient, FGuid InSourceGuid)
{
	Client = InClient;
	SourceGuid = InSourceGuid;
}


bool FLoledLiveLinkSource::IsSourceStillValid() const
{
	// Source is valid if we have a valid thread and socket
	bool bIsSourceValid = !Stopping && Thread != nullptr && Socket != nullptr;
	return bIsSourceValid;
}


bool FLoledLiveLinkSource::RequestSourceShutdown()
{
	Stop();

	return true;
}
// FRunnable interface

void FLoledLiveLinkSource::Start()
{
	ThreadName = "LOLED UDP Receiver ";
	ThreadName.AppendInt(FAsyncThreadIndex::GetNext());
	Thread = FRunnableThread::Create(this, *ThreadName, 128 * 1024, TPri_AboveNormal, FPlatformAffinity::GetPoolThreadMask());
}

void FLoledLiveLinkSource::Stop()
{
	Stopping = true;

		//for (auto& Elem : TimecodeMap)
		//{
		//	FString strung = Elem.Key.ToString();
		//	UE_LOG(LogTemp, Warning, TEXT("TC: %s"), *strung);
		//	Elem.Value->ConditionalBeginDestroy();
		//}
}

uint32 FLoledLiveLinkSource::Run()
{
	TSharedRef<FInternetAddr> Sender = SocketSubsystem->CreateInternetAddr();

	while (!Stopping)
	{
		if (Socket->Wait(ESocketWaitConditions::WaitForRead, WaitTime))
		{
			uint32 Size;

			while (Socket->HasPendingData(Size))
			{
				int32 Read = 0;

				if (Socket->RecvFrom(RecvBuffer.GetData(), RecvBuffer.Num(), Read, *Sender))
				{
					if (Read > 0)
					{
						TSharedPtr<TArray<uint8>, ESPMode::ThreadSafe> ReceivedData = MakeShareable(new TArray<uint8>());
						ReceivedData->SetNumUninitialized(Read);
						memcpy(ReceivedData->GetData(), RecvBuffer.GetData(), Read);
						AsyncTask(ENamedThreads::GameThread, [this, ReceivedData]() { HandleReceivedData(ReceivedData); });
					}
				}
			}
		}
	}
	return 0;
}


FQualifiedFrameTime FLoledLiveLinkSource::GetQualifiedFrameTime(FTimecode tc, FFrameRate fr)
{
	return FQualifiedFrameTime(tc, fr);
}

void FLoledLiveLinkSource::HandleReceivedData(TSharedPtr<TArray<uint8>, ESPMode::ThreadSafe> ReceivedData)
{
	int i = 0;
	uint8 buf[1024];
	uint8 bufMinused[1024];
	Loled_F1_t data;

	TArray< FStringFormatArg > args;
	FString strungPacket;

	for (uint8& Byte : *ReceivedData.Get())
	{
		buf[i++] = Byte;
		bufMinused[i] = Byte - 1;
		//strungPacket+=FString::FromInt(UTF8_TO_TCHAR(Byte));
		args.Add(FStringFormatArg(Byte));
	}

	strungPacket = BytesToString(bufMinused, i + 1);

	//UE_LOG( LogTemp, Warning, TEXT( "Got: %s" ), *strungPacket );

	if (buf[0] == 0xF1) { //LOLED data, unpack 
		if (Loled_F1_unpack(buf, i, &data))
			return;

		float zoom = data.Zoom;
		float focus = data.Focus;
		float iris = data.Iris;
		float zoomRaw = data.ZoomRaw;
		float focusRaw = data.FocusRaw;
		float irisRaw = data.IrisRaw;

		FString s = FString(data.ID);
		s += "@";
		s += DeviceEndpoint.ToString();
		FName SubjectName(s);

		FString sCam = FString(data.ID);
		sCam += "cam@";
		sCam += DeviceEndpoint.ToString();
		FName SubjectNameCam(sCam);

		bool bCreateSubject = EncounteredSubjects.Contains(SubjectNameCam);

		if (!bCreateSubject) {

			FLiveLinkStaticDataStruct TransformStaticDataStruct = FLiveLinkStaticDataStruct(FLiveLinkBaseStaticData::StaticStruct());
			FLiveLinkBaseStaticData& TransformStaticData = *TransformStaticDataStruct.Cast<FLiveLinkBaseStaticData>();
			TransformStaticData.PropertyNames.SetNumUninitialized(6);
			TransformStaticData.PropertyNames[0] =  FName("Focus");
			TransformStaticData.PropertyNames[1] = FName("Iris");
			TransformStaticData.PropertyNames[2] = FName("Zoom");
			TransformStaticData.PropertyNames[3] =  FName("Focus Raw");
			TransformStaticData.PropertyNames[4] = FName("Iris Raw");
			TransformStaticData.PropertyNames[5] = FName("Zoom Raw");

			Client->PushSubjectStaticData_AnyThread({ SourceGuid, SubjectName }, ULiveLinkBasicRole::StaticClass(), MoveTemp(TransformStaticDataStruct));

			EncounteredSubjects.Add(SubjectNameCam);
			bCreateSubject = false;

		}		
		FLiveLinkFrameDataStruct TransformFrameDataStruct = FLiveLinkFrameDataStruct(FLiveLinkBaseFrameData::StaticStruct());
		FLiveLinkBaseFrameData& TransformFrameData = *TransformFrameDataStruct.Cast<FLiveLinkBaseFrameData>();
		TransformFrameData.PropertyValues.SetNumUninitialized(6);
		TransformFrameData.PropertyValues[0] = focus / 100;
		TransformFrameData.PropertyValues[1] = iris / 100;
		TransformFrameData.PropertyValues[2] = zoom / 100;
		TransformFrameData.PropertyValues[3] = focusRaw;
		TransformFrameData.PropertyValues[4] = irisRaw;
		TransformFrameData.PropertyValues[5] = zoomRaw;
		Client->PushSubjectFrameData_AnyThread({ SourceGuid, SubjectName }, MoveTemp(TransformFrameDataStruct));

		/*
			FLiveLinkCameraFrameData
			https://docs.unrealengine.com/en-US/API/Runtime/LiveLinkInterface/Roles/FLiveLinkCameraFrameData/index.html
		*/

		FLiveLinkStaticDataStruct StaticDataStruct = FLiveLinkStaticDataStruct(FLiveLinkCameraStaticData::StaticStruct());
		FLiveLinkCameraStaticData& StaticData = *StaticDataStruct.Cast<FLiveLinkCameraStaticData>();
		StaticData.bIsFocalLengthSupported = true;
		StaticData.bIsFocusDistanceSupported = true;
		StaticData.bIsApertureSupported = true;
		Client->PushSubjectStaticData_AnyThread({ SourceGuid, SubjectNameCam }, ULiveLinkCameraRole::StaticClass(), MoveTemp(StaticDataStruct));

		FLiveLinkFrameDataStruct CameraFrameDataStruct = FLiveLinkFrameDataStruct(FLiveLinkCameraFrameData::StaticStruct());
		FLiveLinkCameraFrameData& CameraFrameData = *CameraFrameDataStruct.Cast<FLiveLinkCameraFrameData>();
		CameraFrameData.Aperture = iris / 100;
		CameraFrameData.FocalLength = zoom / 100;
		CameraFrameData.FocusDistance = focus / 100;
		Client->PushSubjectFrameData_AnyThread({ SourceGuid, SubjectNameCam }, MoveTemp(CameraFrameDataStruct));
	}
	else if (buf[0] == 0xF2) { //User data packet

		TArray<FString> splitData;
		strungPacket.ParseIntoArray(splitData, TEXT(","), true);
		

		if (splitData.Num() != 8) { //Too many arguments will crash Unreal, ask me how I know
			UE_LOG(LogTemp, Warning, TEXT("LOLED User Data Packet Wrong Size"));
			UE_LOG(LogTemp, Warning, TEXT("Num of bytes: %i"), splitData.Num());

			for (int numBytes = 0; numBytes < splitData.Num(); numBytes++) {
				UE_LOG(LogTemp, Warning, TEXT("Byte: %s"), *splitData[numBytes]);
			}

		}
		else {

			FString userIDString = splitData[1];
			userIDString += "_data@";
			userIDString += DeviceEndpoint.ToString();
			FName userDataID(userIDString);


			bool bCreateSubject = EncounteredSubjects.Contains(userDataID);

			if (!bCreateSubject) {

				

				FLiveLinkStaticDataStruct UserStaticDataStruct = FLiveLinkStaticDataStruct(FLiveLinkBaseStaticData::StaticStruct());
				FLiveLinkBaseStaticData& UserStaticData = *UserStaticDataStruct.Cast<FLiveLinkBaseStaticData>();
				UserStaticData.PropertyNames.SetNumUninitialized(6);
				UserStaticData.PropertyNames[0] =  FName("arbitrary1");
				UserStaticData.PropertyNames[1] = FName("arbitrary2");
				UserStaticData.PropertyNames[2] = FName("arbitrary3");
				UserStaticData.PropertyNames[3] =  FName("arbitrary4");
				UserStaticData.PropertyNames[4] = FName("arbitrary5");
				UserStaticData.PropertyNames[5] = FName("arbitrary6");

				Client->PushSubjectStaticData_AnyThread({ SourceGuid, userDataID }, ULiveLinkBasicRole::StaticClass(), MoveTemp(UserStaticDataStruct));
				EncounteredSubjects.Add(userDataID);
				bCreateSubject = false;
			}

			FLiveLinkFrameDataStruct UserFrameDataStruct = FLiveLinkFrameDataStruct(FLiveLinkBaseFrameData::StaticStruct());
			FLiveLinkBaseFrameData& UserFrameData = *UserFrameDataStruct.Cast<FLiveLinkBaseFrameData>();
			UserFrameData.PropertyValues.SetNumUninitialized(6);

			UserFrameData.PropertyValues[0] = FCString::Atof(*splitData[2]);
			UserFrameData.PropertyValues[1] = FCString::Atof(*splitData[3]);
			UserFrameData.PropertyValues[2] = FCString::Atof(*splitData[4]);
			UserFrameData.PropertyValues[3] = FCString::Atof(*splitData[5]);
			UserFrameData.PropertyValues[4] = FCString::Atof(*splitData[6]);
			UserFrameData.PropertyValues[5] = FCString::Atof(*splitData[7]);
			Client->PushSubjectFrameData_AnyThread({ SourceGuid, userDataID }, MoveTemp(UserFrameDataStruct));

		}
	}
	else if (buf[0] == 0xF3) { //XD Data packet

	/*
Field 01: 0xF3 Packet identifier

      Field 02: Lens Name
      Field 03: Focus Distance in mm
      Field 04: Aperture Value
      Field 05: Focal Length in mm
      Field 06: Entrance Pupil in mm (signed value)
      Field 07: Hyperfocal Distance in mm
	Field 08: Near Focus Distance in mm
      Field 09: Far Focus Distance in mm
      Field 10: HFOV in degrees

      Field 11: Image Height 0 in mm      
      Field 12: Image Height 1 in mm
      Field 13: Image Height 2 in mm
      Field 14: Image Height 3 in mm
      Field 15: Image Height 4 in mm
      Field 16: Image Height 5 in mm
      Field 17: Image Height 6 in mm

	Field 18: Shading/Vignetting 0 in %
	Field 19: Shading/Vignetting 1 in %
	Field 20: Shading/Vignetting 2 in %
	Field 21: Shading/Vignetting 3 in %
	Field 22: Shading/Vignetting 4 in %
	Field 23: Shading/Vignetting 5 in %
	Field 24: Shading/Vignetting 6 in %

	Field 25: OpenCV Radial Distortion Coefficient k1 as float, scientific notation
	Field 26: OpenCV Radial Distortion Coefficient k2 as float, scientific notation
	Field 27: OpenCV Tangential Distortion Coefficient p1 as float, scientific notation
	Field 28: OpenCV Tangential Distortion Coefficient p2 as float, scientific notation
	Field 29: OpenCV Radial Distortion Coefficient k3 as float, scientific notation
	Field 30: OpenCV Radial Distortion Coefficient k4 as float, scientific notation
	Field 31: OpenCV Radial Distortion Coefficient k5 as float, scientific notation
	Field 32: OpenCV Radial Distortion Coefficient k6 as float, scientific notation
	Field 33: OpenCV Cx as float
	Field 34: OpenCV Cy as float

	Field 35: Timecode: HH:MM:SS:FF
	Field 36: Dropframe (0=non-dropframe, 1=dropframe)
	Field 37: Video Framerate (23.98,24,25,29.97,30,47.95,48,50,59.94,60)
	Field 38: Lens Manufacturer
	Field 39: Lens Serial Number
	Field 40: Lens Owner
	Field 41: Lens Firmware Version
			  */

		TArray<FString> splitData;
		strungPacket.ParseIntoArray(splitData, TEXT(","), true);

		if (splitData.Num() != 41) { //Too many arguments will crash Unreal, ask me how I know
			UE_LOG(LogTemp, Warning, TEXT("LOLED User Data Packet Wrong Size"));
			UE_LOG(LogTemp, Warning, TEXT("Num of bytes: %i"), splitData.Num());

			for (int numBytes = 0; numBytes < splitData.Num(); numBytes++) {
				UE_LOG(LogTemp, Warning, TEXT("Byte: %s"), *splitData[numBytes]);
			}

		}
		else {
			
			//	double StartTime = FPlatformTime::Seconds();


			FString lensIDString = splitData[1]; //First value is a pretty-fied lens name
			lensIDString += "_Lens@";
			lensIDString += DeviceEndpoint.ToString();
			FName lensDataID(lensIDString);

			FString lensImageString = splitData[1];
			lensImageString += "_ImageHeight@";
			lensImageString += DeviceEndpoint.ToString();
			FName lensImageID(lensImageString);

			FString lensDistortionString = splitData[1]; 
			lensDistortionString += "_Distortion@";
			lensDistortionString += DeviceEndpoint.ToString();
			FName lensDistortionID(lensDistortionString);

			FString lensShadingString = splitData[1]; 
			lensShadingString += "_Shading@";
			lensShadingString += DeviceEndpoint.ToString();
			FName lenShadingID(lensShadingString);




			bool bCreateSubject = EncounteredSubjects.Contains(lensDataID); 

			if (!bCreateSubject) {

				FLiveLinkStaticDataStruct XDStaticDataStruct = FLiveLinkStaticDataStruct(FLiveLinkBaseStaticData::StaticStruct());
				FLiveLinkBaseStaticData& XDStaticData = *XDStaticDataStruct.Cast<FLiveLinkBaseStaticData>();
				XDStaticData.PropertyNames.SetNumUninitialized(9);
				XDStaticData.PropertyNames[0] =  FName("focus");
				XDStaticData.PropertyNames[1] = FName("aperture");
				XDStaticData.PropertyNames[2] = FName("focal_length");
				XDStaticData.PropertyNames[3] =  FName("entrance_pupil");
				XDStaticData.PropertyNames[4] = FName("hyperfocal");
				XDStaticData.PropertyNames[5] = FName("close_focus");
				XDStaticData.PropertyNames[6] = FName("far_focus");
				XDStaticData.PropertyNames[7] = FName("horizontal_fov");
				XDStaticData.PropertyNames[8] = FName("bDropframe");
				

				FLiveLinkStaticDataStruct XDHeightStaticDataStruct = FLiveLinkStaticDataStruct(FLiveLinkBaseStaticData::StaticStruct());
				FLiveLinkBaseStaticData& XDHeightStaticData = *XDHeightStaticDataStruct.Cast<FLiveLinkBaseStaticData>();
				XDHeightStaticData.PropertyNames.SetNumUninitialized(7);
				XDHeightStaticData.PropertyNames[0] =  FName("image_height_0");
				XDHeightStaticData.PropertyNames[1] = FName("image_height_1");
				XDHeightStaticData.PropertyNames[2] = FName("image_height_2");
				XDHeightStaticData.PropertyNames[3] =  FName("image_height_3");
				XDHeightStaticData.PropertyNames[4] = FName("image_height_4");
				XDHeightStaticData.PropertyNames[5] = FName("image_height_5");
				XDHeightStaticData.PropertyNames[6] = FName("image_height_6");

				FLiveLinkStaticDataStruct XDDistortionStaticDataStruct = FLiveLinkStaticDataStruct(FLiveLinkBaseStaticData::StaticStruct());
				FLiveLinkBaseStaticData& XDDistortionStaticData = *XDDistortionStaticDataStruct.Cast<FLiveLinkBaseStaticData>();
				XDDistortionStaticData.PropertyNames.SetNumUninitialized(10);
				XDDistortionStaticData.PropertyNames[0] = FName("K1");
				XDDistortionStaticData.PropertyNames[1] = FName("K2");
				XDDistortionStaticData.PropertyNames[2] = FName("P1");
				XDDistortionStaticData.PropertyNames[3] = FName("P2");
				XDDistortionStaticData.PropertyNames[4] = FName("K3");
				XDDistortionStaticData.PropertyNames[5] = FName("K4");
				XDDistortionStaticData.PropertyNames[6] = FName("K5");
				XDDistortionStaticData.PropertyNames[7] = FName("K6");
				XDDistortionStaticData.PropertyNames[8] = FName("Cx");
				XDDistortionStaticData.PropertyNames[9] = FName("Cy");

				FLiveLinkStaticDataStruct XDShadingStaticDataStruct = FLiveLinkStaticDataStruct(FLiveLinkBaseStaticData::StaticStruct());
				FLiveLinkBaseStaticData& XDShadingStaticData = *XDShadingStaticDataStruct.Cast<FLiveLinkBaseStaticData>();
				XDShadingStaticData.PropertyNames.SetNumUninitialized(7);
				XDShadingStaticData.PropertyNames[0] = FName("shading_0");
				XDShadingStaticData.PropertyNames[1] = FName("shading_1");
				XDShadingStaticData.PropertyNames[2] = FName("shading_2");
				XDShadingStaticData.PropertyNames[3] = FName("shading_3");
				XDShadingStaticData.PropertyNames[4] = FName("shading_4");
				XDShadingStaticData.PropertyNames[5] = FName("shading_5");
				XDShadingStaticData.PropertyNames[6] = FName("shading_6");


				//TimecodeMap.Add(lensDataID,  NewObject< UXDTimecodeProvider >(  UTimecodeProvider::StaticClass(), lensDataID));


				Client->PushSubjectStaticData_AnyThread({ SourceGuid, lensDataID }, ULiveLinkBasicRole::StaticClass(), MoveTemp(XDStaticDataStruct));
				EncounteredSubjects.Add(lensDataID);

				Client->PushSubjectStaticData_AnyThread({ SourceGuid, lensImageID }, ULiveLinkBasicRole::StaticClass(), MoveTemp(XDHeightStaticDataStruct));
				EncounteredSubjects.Add(lensImageID);

				Client->PushSubjectStaticData_AnyThread({ SourceGuid, lensDistortionID }, ULiveLinkBasicRole::StaticClass(), MoveTemp(XDDistortionStaticDataStruct));
				EncounteredSubjects.Add(lensDistortionID);

				Client->PushSubjectStaticData_AnyThread({ SourceGuid, lenShadingID }, ULiveLinkBasicRole::StaticClass(), MoveTemp(XDShadingStaticDataStruct));
				EncounteredSubjects.Add(lenShadingID);


				bCreateSubject = false;
			}



			FString TCtoSplit = splitData[34];
			TArray<FString> splitDataTC;
			TCtoSplit.ParseIntoArray(splitDataTC, TEXT(":"), true);

			if (splitDataTC.Num() != 4) {
				UE_LOG(LogTemp, Warning, TEXT("TC Packet %s \n"), *TCtoSplit);
				UE_LOG(LogTemp, Warning, TEXT("LOLED|XDTimecode Malformed"));
				UE_LOG(LogTemp, Warning, TEXT("LOLED|Got %i"), splitDataTC.Num());
			}
			else {
				TimeCode.Hours = FCString::Atof(*splitDataTC[0]);
				TimeCode.Minutes = FCString::Atof(*splitDataTC[1]);
				TimeCode.Seconds = FCString::Atof(*splitDataTC[2]);
				TimeCode.Frames = FCString::Atof(*splitDataTC[3]);
				TimeCode.bDropFrameFormat = (bool)FCString::Atoi(*splitData[36]);

			}

			FLiveLinkFrameDataStruct XDFrameDataStruct = FLiveLinkFrameDataStruct(FLiveLinkBaseFrameData::StaticStruct());
			FLiveLinkBaseFrameData& XDFrameData = *XDFrameDataStruct.Cast<FLiveLinkBaseFrameData>();
			XDFrameData.PropertyValues.SetNumUninitialized(9);
			XDFrameData.PropertyValues[0] = FCString::Atof(*splitData[2]);
			XDFrameData.PropertyValues[1] = FCString::Atof(*splitData[3]);
			XDFrameData.PropertyValues[2] = FCString::Atof(*splitData[4]);
			XDFrameData.PropertyValues[3] = FCString::Atof(*splitData[5]);
			XDFrameData.PropertyValues[4] = FCString::Atof(*splitData[6]);
			XDFrameData.PropertyValues[5] = FCString::Atof(*splitData[7]);
			XDFrameData.PropertyValues[6] = FCString::Atof(*splitData[8]);
			XDFrameData.PropertyValues[7] = FCString::Atof(*splitData[9]);
			XDFrameData.PropertyValues[8] = FCString::Atof(*splitData[31]);

			XDFrameData.MetaData.StringMetaData.Add(TEXT("manufacturer"), splitData[37]); //Accessible through the metadata tmap, has lens information
			XDFrameData.MetaData.StringMetaData.Add(TEXT("serial_number"), splitData[38]);
			XDFrameData.MetaData.StringMetaData.Add(TEXT("lens_owner"), splitData[39]);
			XDFrameData.MetaData.StringMetaData.Add(TEXT("lens_firmware"), splitData[40]);
			XDFrameData.MetaData.StringMetaData.Add(TEXT("timecode"), splitData[34]);
			XDFrameData.MetaData.StringMetaData.Add(TEXT("framerate"), splitData[36]);
			float fr = FCString::Atof(*splitData[36]);
			int num = 0;
			int dem = 0;


			
			//It's a decimal framerate, realistically this will only be an NTSC framerate
			if (FGenericPlatformMath::Fmod(fr, 1)) {//TODO: Either fractional qualifiedframetimes are bugged at an engine level, or I misunderstand the purpose of them
				dem = 1001;
				num = (int)FMath::RoundHalfFromZero(fr);
			}
			else {
				dem = 1;
				num = (int)fr;
			}

			XDFrameData.MetaData.SceneTime = GetQualifiedFrameTime(TimeCode, FFrameRate(num, dem));
			Client->PushSubjectFrameData_AnyThread({ SourceGuid, lensDataID }, MoveTemp(XDFrameDataStruct));

			
			
			FLiveLinkFrameDataStruct XDHeightDataStruct = FLiveLinkFrameDataStruct(FLiveLinkBaseFrameData::StaticStruct());
			FLiveLinkBaseFrameData& XDHeightFrameData = *XDHeightDataStruct.Cast<FLiveLinkBaseFrameData>();
			XDHeightFrameData.PropertyValues.SetNumUninitialized(7);
			XDHeightFrameData.PropertyValues[0] = FCString::Atof(*splitData[10]);
			XDHeightFrameData.PropertyValues[1] = FCString::Atof(*splitData[11]);
			XDHeightFrameData.PropertyValues[2] = FCString::Atof(*splitData[12]);
			XDHeightFrameData.PropertyValues[3] = FCString::Atof(*splitData[13]);
			XDHeightFrameData.PropertyValues[4] = FCString::Atof(*splitData[14]);
			XDHeightFrameData.PropertyValues[5] = FCString::Atof(*splitData[15]);
			XDHeightFrameData.PropertyValues[6] = FCString::Atof(*splitData[16]);
			Client->PushSubjectFrameData_AnyThread({ SourceGuid, lensImageID }, MoveTemp(XDHeightDataStruct));

			FLiveLinkFrameDataStruct XDDistortionDataStruct = FLiveLinkFrameDataStruct(FLiveLinkBaseFrameData::StaticStruct());
			FLiveLinkBaseFrameData& XDDistortionFrameData = *XDDistortionDataStruct.Cast<FLiveLinkBaseFrameData>();
			XDDistortionFrameData.PropertyValues.SetNumUninitialized(10);
			XDDistortionFrameData.PropertyValues[0] = FCString::Atof(*splitData[24]);
			XDDistortionFrameData.PropertyValues[1] = FCString::Atof(*splitData[25]);
			XDDistortionFrameData.PropertyValues[2] = FCString::Atof(*splitData[26]);
			XDDistortionFrameData.PropertyValues[3] = FCString::Atof(*splitData[27]);
			XDDistortionFrameData.PropertyValues[4] = FCString::Atof(*splitData[28]);
			XDDistortionFrameData.PropertyValues[5] = FCString::Atof(*splitData[29]);
			XDDistortionFrameData.PropertyValues[6] = FCString::Atof(*splitData[30]);
			XDDistortionFrameData.PropertyValues[7] = FCString::Atof(*splitData[31]);
			XDDistortionFrameData.PropertyValues[8] = FCString::Atof(*splitData[32]);
			XDDistortionFrameData.PropertyValues[9] = FCString::Atof(*splitData[33]);
			Client->PushSubjectFrameData_AnyThread({ SourceGuid, lensDistortionID }, MoveTemp(XDDistortionDataStruct));

			FLiveLinkFrameDataStruct XDShadingDataStruct = FLiveLinkFrameDataStruct(FLiveLinkBaseFrameData::StaticStruct());
			FLiveLinkBaseFrameData& XDShadingFrameData = *XDShadingDataStruct.Cast<FLiveLinkBaseFrameData>();
			XDShadingFrameData.PropertyValues.SetNumUninitialized(7);
			XDShadingFrameData.PropertyValues[0] = FCString::Atof(*splitData[17]);
			XDShadingFrameData.PropertyValues[1] = FCString::Atof(*splitData[18]);
			XDShadingFrameData.PropertyValues[2] = FCString::Atof(*splitData[19]);
			XDShadingFrameData.PropertyValues[3] = FCString::Atof(*splitData[20]);
			XDShadingFrameData.PropertyValues[4] = FCString::Atof(*splitData[21]);
			XDShadingFrameData.PropertyValues[5] = FCString::Atof(*splitData[22]);
			XDShadingFrameData.PropertyValues[6] = FCString::Atof(*splitData[23]);
			Client->PushSubjectFrameData_AnyThread({ SourceGuid, lenShadingID }, MoveTemp(XDShadingDataStruct));

			//double EndTime = FPlatformTime::Seconds(); //TIming check
			//UE_LOG(LogTemp, Warning, TEXT("Total Time To Parse: %f"), EndTime - StartTime);

		}
	}


}

#undef LOCTEXT_NAMESPACE
