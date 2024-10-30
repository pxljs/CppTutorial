// Fill out your copyright notice in the Description page of Project Settings.


#include "TimeReversalGameModeBase.h"

void ATimeReversalGameModeBase::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);

	// Init the time manager
	TimeManager = Cast<ATimeManager>(GetWorld()->SpawnActor(ATimeManager::StaticClass()));
	if (!TimeManager) {
		UE_LOG(LogTemp,Error,TEXT("Failed to create TimeMananger!"));
	}
}

ATimeManager* ATimeReversalGameModeBase::GetTimeManager()
{
	// check that time manager is valid
	if (!TimeManager) {
		UE_LOG(LogTemp,Error,TEXT("try to call GetTimeManager() before it existed"));
	}
	return TimeManager;
}
