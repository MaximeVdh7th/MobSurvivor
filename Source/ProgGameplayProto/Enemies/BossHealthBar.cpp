// Fill out your copyright notice in the Description page of Project Settings.


#include "BossHealthBar.h"

#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"
#include "ProgGameplayProto/Health.h"

void UBossHealthBar::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	if (!OwnerBoss.IsValid())
		return;
	HealthBar->SetPercent(OwnerBoss->Health->GetCurrentHealth() / OwnerBoss->Health->GetMaxHealth());

	FNumberFormattingOptions BossOpts;
	BossOpts.SetMaximumFractionalDigits(0);

	CurrentHealthLabel->SetText(FText::AsNumber(OwnerBoss->Health->GetCurrentHealth(), &BossOpts));
	MaxHealthLabel->SetText(FText::AsNumber(OwnerBoss->Health->GetMaxHealth(), &BossOpts));





}

