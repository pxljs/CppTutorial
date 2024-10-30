// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "TimeManager.h"

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TimeReversalGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class TIMEPOWER_API ATimeReversalGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	// Called before actor initialization
	void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage) override;

public:
	// Get the global managing time manager
	UFUNCTION(BlueprintCallable)
	ATimeManager* GetTimeManager();
	
protected:
	UPROPERTY(BlueprintReadOnly)
	ATimeManager* TimeManager=nullptr;
};
