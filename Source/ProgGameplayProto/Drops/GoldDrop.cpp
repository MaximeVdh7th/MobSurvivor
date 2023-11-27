// Fill out your copyright notice in the Description page of Project Settings.


#include "GoldDrop.h"

#include "ProgGameplayProto/ProgGameplayProtoGameState.h"
#include "../GameUtils.h"

void AGoldDrop::Collect()
{
	Super::Collect();

	AProgGameplayProtoGameState* GameState = GetWorld()->GetGameState<AProgGameplayProtoGameState>();
	GoldAmount *= FMath::Max(1,UGameUtils::GoldMultiplier);
	GameState->AddGold(GoldAmount);

	Destroy();
}