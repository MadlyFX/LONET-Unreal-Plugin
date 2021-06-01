// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TimecodeProvider.h"
#include "XDTimecodeProvider.generated.h"

/**
 * 
 */
UCLASS(config = Engine, Blueprintable, BlueprintType, editinlinenew)
class LOLEDLIVELINK_API UXDTimecodeProvider : public UTimecodeProvider
{
	GENERATED_BODY()
	

public:

	/** The frame rate at which the timecode value will be generated. */
	UPROPERTY(EditAnywhere, Category = Timecode)
		FFrameRate FrameRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Properties)
		FTimecode TimeCode;


private:

	/** Current state of the provider */
	ETimecodeProviderSynchronizationState State;

public:

	UXDTimecodeProvider();

	/** Generate a frame time value, including subframe, using the system clock. */
	//static FFrameTime GenerateFrameTimeFromSystemTime(FFrameRate Rate);

	/** Generate a timecode value using the system clock. */
	//static FTimecode GenerateTimecodeFromSystemTime(FFrameRate Rate);

	/**
	 * Generate a frame time value, including subframe, using the high performance clock
	 * Using the high performance clock is faster but will make the value drift over time.
	 * This is an optimized version. Prefer GenerateTimecodeFromSystemTime, if the value need to be accurate.
	 **/
	 //static FFrameTime GenerateFrameTimeFromHighPerformanceClock(FFrameRate Rate);

	 /**
	  * Generate a timecode value using the high performance clock
	  * Using the high performance clock is faster but will make the value drift over time.
	  * This is an optimized version. Prefer GenerateTimecodeFromSystemTime, if the value need to be accurate.
	  **/
	  //static FTimecode GenerateTimecodeFromHighPerformanceClock(FFrameRate Rate);
	UFUNCTION(BlueprintCallable, Category = Properties)
	void UpdateXDFrameRate(FTimecode InputXDFrameRate);

	//~ Begin UTimecodeProvider Interface
	virtual FQualifiedFrameTime GetQualifiedFrameTime() const override;

	virtual ETimecodeProviderSynchronizationState GetSynchronizationState() const override
	{
		return State;
	}

	virtual bool Initialize(class UEngine* InEngine) override
	{
		State = ETimecodeProviderSynchronizationState::Synchronized;
		return true;
	}

	virtual void Shutdown(class UEngine* InEngine) override
	{
		State = ETimecodeProviderSynchronizationState::Closed;
	}
	//~ End UTimecodeProvider Interface
};
