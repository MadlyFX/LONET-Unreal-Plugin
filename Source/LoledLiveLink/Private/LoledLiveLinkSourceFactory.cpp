// Fill out your copyright notice in the Description page of Project Settings.

#include "LoledLiveLinkSourceFactory.h"
#include "LoledLiveLinkSource.h"
#include "LoledLiveLinkSourceEditor.h"
#include "LoledLiveLink.h"

#define LOCTEXT_NAMESPACE "ULoledLiveLinkSourceFactory"

FText ULoledLiveLinkSourceFactory::GetSourceDisplayName() const
{
    return LOCTEXT("SourceDisplayName", "LOLED LiveLink");
}

FText ULoledLiveLinkSourceFactory::GetSourceTooltip() const
{
    return LOCTEXT("SourceTooltip", "Creates a connection to a LOLED UDP Stream");
}

TSharedPtr<SWidget> ULoledLiveLinkSourceFactory::BuildCreationPanel(FOnLiveLinkSourceCreated InOnLiveLinkSourceCreated) const
{
    return SNew(LoledLiveLinkSourceEditor)
        .OnOkClicked(LoledLiveLinkSourceEditor::FOnOkClicked::CreateUObject(this, &ULoledLiveLinkSourceFactory::OnOkClicked, InOnLiveLinkSourceCreated));
}

TSharedPtr<ILiveLinkSource> ULoledLiveLinkSourceFactory::CreateSource(const FString& InConnectionString) const
{
    FIPv4Endpoint DeviceEndPoint;
    if (!FIPv4Endpoint::Parse(InConnectionString, DeviceEndPoint))
    {
        return TSharedPtr<ILiveLinkSource>();
    }

    return MakeShared<FLoledLiveLinkSource>(DeviceEndPoint);
}

void ULoledLiveLinkSourceFactory::OnOkClicked(FIPv4Endpoint InEndpoint, FOnLiveLinkSourceCreated InOnLiveLinkSourceCreated) const
{
    InOnLiveLinkSourceCreated.ExecuteIfBound(MakeShared<FLoledLiveLinkSource>(InEndpoint), InEndpoint.ToString());
}

#undef LOCTEXT_NAMESPACE
