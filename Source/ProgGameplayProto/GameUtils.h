// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameUtils.generated.h"

class AProgGameplayProtoCharacter;

/**
 *
 */
UCLASS

()
class PROGGAMEPLAYPROTO_API UGameUtils : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, Category = "Manager")
	static AProgGameplayProtoCharacter* GetMainCharacter();

	inline static float GoldLuck = 0.05;
	inline static float GoldMultiplier = 1;
	inline static float XPLuck = 0.05;
	inline static float XPMultiplier = 1;
	inline static float HPLuck = 0.01;
	inline static float HPMultiplier = 1;
};