// Fill out your copyright notice in the Description page of Project Settings.


#include "GoldDrop.h"

#include "ProgGameplayProto/ProgGameplayProtoGameState.h"

void AGoldDrop::Collect()
{
	Super::Collect();

	AProgGameplayProtoGameState* GameState = GetWorld()->GetGameState<AProgGameplayProtoGameState>();
	GameState->AddGold(GoldAmount);

	Destroy();
}