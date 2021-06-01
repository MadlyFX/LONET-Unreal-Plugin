// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ILiveLinkClient.h"
#include "LiveLinkTypes.h"
#include "Roles/LiveLinkTransformRole.h"
#include "Roles/LiveLinkTransformTypes.h"
#include "Roles/LiveLinkCameraRole.h"
#include "Roles/LiveLinkCameraTypes.h"
#include "XDData_Client.generated.h"

USTRUCT(Blueprintable)
struct FXDLensData
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(BlueprintReadWrite)
        float Focus; 
    UPROPERTY(BlueprintReadWrite)
        float Iris;
    UPROPERTY(BlueprintReadWrite)
        float FocalLength; 
    UPROPERTY(BlueprintReadWrite)
        float EntrancePupil;
    UPROPERTY(BlueprintReadWrite)
        float HyperFocalDistance;
    UPROPERTY(BlueprintReadWrite)
        float CloseFocus; 
    UPROPERTY(BlueprintReadWrite)
        float FarFocus;
    UPROPERTY(BlueprintReadWrite)
        float HorizontalFOV;

    UPROPERTY(BlueprintReadWrite)
        FString Manufacturer;
    UPROPERTY(BlueprintReadWrite)
        FString SerialNumber;
    UPROPERTY(BlueprintReadWrite)
        FString LensOwner;
    UPROPERTY(BlueprintReadWrite)
        FString LensFirmware;
};

USTRUCT(Blueprintable)
struct FXDHeightData
{
    GENERATED_USTRUCT_BODY()

        UPROPERTY(BlueprintReadWrite)
        float ImageHeight1;
    UPROPERTY(BlueprintReadWrite)
        float ImageHeight2;
    UPROPERTY(BlueprintReadWrite)
        float ImageHeight3;
    UPROPERTY(BlueprintReadWrite)
        float ImageHeight4;
    UPROPERTY(BlueprintReadWrite)
        float ImageHeight5;
    UPROPERTY(BlueprintReadWrite)
        float ImageHeight6;
};

USTRUCT(Blueprintable)
struct FXDDistortionData
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(BlueprintReadWrite)
        float K1;
    UPROPERTY(BlueprintReadWrite)
        float K2;
    UPROPERTY(BlueprintReadWrite)
        float P1;
    UPROPERTY(BlueprintReadWrite)
        float P2;
    UPROPERTY(BlueprintReadWrite)
        float K3;
    UPROPERTY(BlueprintReadWrite)
        float K4;
    UPROPERTY(BlueprintReadWrite)
        float K5;
    UPROPERTY(BlueprintReadWrite)
        float K6;
    UPROPERTY(BlueprintReadWrite)
        float Cx;
    UPROPERTY(BlueprintReadWrite)
        float Cy;
};

USTRUCT(Blueprintable)
struct FXDShadingData
{
    GENERATED_USTRUCT_BODY()

    UPROPERTY(BlueprintReadWrite)
        float ShadingData1;
    UPROPERTY(BlueprintReadWrite)
        float ShadingData2;
    UPROPERTY(BlueprintReadWrite)
        float ShadingData3;
    UPROPERTY(BlueprintReadWrite)
        float ShadingData4;
    UPROPERTY(BlueprintReadWrite)
        float ShadingData5;
    UPROPERTY(BlueprintReadWrite)
        float ShadingData6;
};

UCLASS(BlueprintType, Blueprintable)
class LOLEDLIVELINK_API AXDData_Client : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AXDData_Client();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

    UFUNCTION(BlueprintCallable, Category = "LOLED|Zeiss XD")
        FXDLensData ParseXDLensData(FLiveLinkBaseFrameData data);

    UFUNCTION(BlueprintCallable, Category = "LOLED|Zeiss XD")
        FXDHeightData ParseXDHeightData(FLiveLinkBaseFrameData data);

    UFUNCTION(BlueprintCallable, Category = "LOLED|Zeiss XD")
        FXDDistortionData ParseXDDistortionData(FLiveLinkBaseFrameData data);

    UFUNCTION(BlueprintCallable, Category = "LOLED|Zeiss XD")
        FXDShadingData ParseXDShadingData(FLiveLinkBaseFrameData data);

    UFUNCTION(BlueprintCallable, Category = "LOLED|Zeiss XD")
        FVector2D MakeFxFy(float focalLength, float SensorResX, float SensorResY, float SensorSizeX, float SensorSizeY);

};
