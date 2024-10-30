// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TimepointBase.generated.h"

/**
 * 
 */
UCLASS(BlueprintType,Blueprintable)
class TIMEPOWER_API UTimepointBase : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
	float Time = 0.0f;

	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
	UTimepointBase* Interpolate(const UTimepointBase* other,float distance);

private:
	virtual UTimepointBase* Interpolate_Implementation(const UTimepointBase* other, float distance) const;
};
