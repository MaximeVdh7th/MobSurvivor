// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthDrop.h"

#include "DropperComponent.h"
#include "ProgGameplayProto/GameUtils.h"
#include "ProgGameplayProto/ProgGameplayProtoCharacter.h"
#include "ProgGameplayProto/Health.h"
#include "../GameUtils.h"

void AHealthDrop::Collect()
{
	Super::Collect();

	AProgGameplayProtoCharacter* mainCharacter = UGameUtils::GetMainCharacter();
	if (IsValid(mainCharacter))
	{
		HealthAmount *= FMath::Max(1, UGameUtils::HPMultiplier);
		mainCharacter->FindComponentByClass<UHealth>()->AddHealth(HealthAmount);
	}

	Destroy();
}