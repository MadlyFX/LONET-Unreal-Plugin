// Copyright Epic Games, Inc. All Rights Reserved.

#include "XDTimecodeProvider.h"

#include "HAL/PlatformTime.h"
#include "Misc/CoreMisc.h"
#include "HAL/PlatformTime.h"

namespace
{
	static double ComputeTimeCodeOffset()
	{
		const FDateTime DateTime = FDateTime::Now();
		const double HighPerformanceClock = FPlatformTime::Seconds();
		return DateTime.GetTimeOfDay().GetTotalSeconds() - HighPerformanceClock;
	}

	static double HighPerformanceClockDelta = ComputeTimeCodeOffset();

	FTimecode zeroTC;

};


UXDTimecodeProvider::UXDTimecodeProvider()
	: FrameRate(60, 1)
	, TimeCode(0,FrameRate,0)
	, State(ETimecodeProviderSynchronizationState::Closed)
	{
}
/*

FFrameTime USystemTimeTimecodeProvider::GenerateFrameTimeFromSystemTime(FFrameRate FrameRate)
{
	const FDateTime DateTime = FDateTime::Now();
	const FTimespan Timespan = DateTime.GetTimeOfDay();
	return FrameRate.AsFrameTime(Timespan.GetTotalSeconds());
}


FTimecode USystemTimeTimecodeProvider::GenerateTimecodeFromSystemTime(FFrameRate FrameRate)
{
	const FDateTime DateTime = FDateTime::Now();
	const FTimespan Timespan = DateTime.GetTimeOfDay();
	return FTimecode::FromTimespan(Timespan, FrameRate, false);
}


FFrameTime USystemTimeTimecodeProvider::GenerateFrameTimeFromHighPerformanceClock(FFrameRate FrameRate)
{
	constexpr double SecondsPerDay = 24.0 * 60.0 * 60.0;
	return FrameRate.AsFrameTime(fmod(HighPerformanceClockDelta + FPlatformTime::Seconds(), SecondsPerDay));
}


FTimecode USystemTimeTimecodeProvider::GenerateTimecodeFromHighPerformanceClock(FFrameRate FrameRate)
{
	constexpr double SecondsPerDay = 24.0 * 60.0 * 60.0;
	const FTimespan Timespan = FTimespan::FromSeconds(fmod(HighPerformanceClockDelta + FPlatformTime::Seconds(), SecondsPerDay));
	return FTimecode::FromTimespan(Timespan, FrameRate, false);
}
*/

void UXDTimecodeProvider::UpdateXDFrameRate(FTimecode InputXDFrameRate)
{
	TimeCode = InputXDFrameRate;
}

FQualifiedFrameTime UXDTimecodeProvider::GetQualifiedFrameTime() const
{
	//return bGenerateFullFrame ? 
	//	FQualifiedFrameTime(bUseHighPerformanceClock ? GenerateTimecodeFromHighPerformanceClock(FrameRate) : GenerateTimecodeFromSystemTime(FrameRate), FrameRate)
	UE_LOG(LogTemp, Warning, TEXT("Framerate Called"));
	//	: FQualifiedFrameTime(bUseHighPerformanceClock ? GenerateFrameTimeFromHighPerformanceClock(FrameRate) : GenerateFrameTimeFromSystemTime(FrameRate), FrameRate);
	return FQualifiedFrameTime(TimeCode, FrameRate);
}