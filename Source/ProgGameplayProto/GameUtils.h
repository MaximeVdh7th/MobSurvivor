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

	static float GoldLuck;
	static float GoldMultiplier;
	static float XPLuck;
	static float XPMultiplier;
	static float HPLuck;
	static float HPMultiplier;
};

float UGameUtils::GoldLuck = 0;
float UGameUtils::GoldMultiplier = 1;
float UGameUtils::XPLuck = 0;
float UGameUtils::XPMultiplier = 1;
float UGameUtils::HPLuck = 0;
float UGameUtils::HPMultiplier = 1;