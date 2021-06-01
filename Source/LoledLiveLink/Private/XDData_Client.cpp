// Fill out your copyright notice in the Description page of Project Settings.


#include "XDData_Client.h"

// Sets default values
AXDData_Client::AXDData_Client()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AXDData_Client::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AXDData_Client::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


FXDLensData AXDData_Client::ParseXDLensData(FLiveLinkBaseFrameData data) {

	FXDLensData XDLensData;

	XDLensData.Focus = data.PropertyValues[0];
	XDLensData.Iris = data.PropertyValues[1];
	XDLensData.FocalLength = data.PropertyValues[2];
	XDLensData.EntrancePupil = data.PropertyValues[3];
	XDLensData.HyperFocalDistance = data.PropertyValues[4];
	XDLensData.CloseFocus = data.PropertyValues[5];
	XDLensData.FarFocus = data.PropertyValues[6];
	XDLensData.HorizontalFOV = data.PropertyValues[7];

	XDLensData.Manufacturer = data.MetaData.StringMetaData["manufacturer"];
	XDLensData.SerialNumber = data.MetaData.StringMetaData["serial_number"];
	XDLensData.LensOwner = data.MetaData.StringMetaData["lens_owner"];
	XDLensData.LensFirmware = data.MetaData.StringMetaData["lens_firmware"];


	return XDLensData;
}


FXDHeightData AXDData_Client::ParseXDHeightData(FLiveLinkBaseFrameData data) {

	FXDHeightData XDHeightData;

	XDHeightData.ImageHeight1 = data.PropertyValues[0];
	XDHeightData.ImageHeight2 = data.PropertyValues[1];
	XDHeightData.ImageHeight3 = data.PropertyValues[2];
	XDHeightData.ImageHeight4 = data.PropertyValues[3];
	XDHeightData.ImageHeight5 = data.PropertyValues[4];
	XDHeightData.ImageHeight6 = data.PropertyValues[5];

	return XDHeightData;
}


FXDDistortionData AXDData_Client::ParseXDDistortionData(FLiveLinkBaseFrameData data) {

	FXDDistortionData XDDistortionData;

	XDDistortionData.K1 = data.PropertyValues[0];
	XDDistortionData.K2 = data.PropertyValues[1];
	XDDistortionData.P1 = data.PropertyValues[2];
	XDDistortionData.P2 = data.PropertyValues[3];
	XDDistortionData.K3 = data.PropertyValues[4];
	XDDistortionData.K4 = data.PropertyValues[5];
	XDDistortionData.K5 = data.PropertyValues[6];
	XDDistortionData.K6 = data.PropertyValues[7];
	XDDistortionData.Cx = data.PropertyValues[8];
	XDDistortionData.Cy = data.PropertyValues[9];

	return XDDistortionData;
}


FXDShadingData AXDData_Client::ParseXDShadingData(FLiveLinkBaseFrameData data) {

	FXDShadingData XDShadingData;

	XDShadingData.ShadingData1 = data.PropertyValues[0];
	XDShadingData.ShadingData2 = data.PropertyValues[1];
	XDShadingData.ShadingData3 = data.PropertyValues[2];
	XDShadingData.ShadingData4 = data.PropertyValues[3];
	XDShadingData.ShadingData5 = data.PropertyValues[4];
	XDShadingData.ShadingData6 = data.PropertyValues[5];

	return XDShadingData;
}

FVector2D AXDData_Client::MakeFxFy(float focalLength, float SensorResX, float SensorResY, float SensorSizeX, float SensorSizeY) {
	float pitchX = SensorResX / SensorSizeX;
	float pitchY = SensorResY / SensorSizeY;
	
	float x = focalLength * pitchX;
	float y = focalLength * pitchY;
	return FVector2D(x,y);
}
