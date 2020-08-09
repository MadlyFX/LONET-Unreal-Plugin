
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
		TransformFrameData.PropertyValues[0] = focus;
		TransformFrameData.PropertyValues[1] = iris;
		TransformFrameData.PropertyValues[2] = zoom;
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
		CameraFrameData.Aperture = iris;
		CameraFrameData.FocalLength = zoom;
		CameraFrameData.FocusDistance = focus;
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

}

#undef LOCTEXT_NAMESPACE
