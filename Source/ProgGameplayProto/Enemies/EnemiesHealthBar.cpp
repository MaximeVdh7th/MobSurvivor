// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemiesHealthBar.h"

#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"
#include "ProgGameplayProto/Health.h"

void UEnemiesHealthBar::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	if (!OwnerEnemy.IsValid())
		return;
	HealthBar->SetPercent(OwnerEnemy->Health->GetCurrentHealth() / OwnerEnemy->Health->GetMaxHealth());

	FNumberFormattingOptions Opts;
	Opts.SetMaximumFractionalDigits(0);

	CurrentHealthLabel->SetText(FText::AsNumber(OwnerEnemy->Health->GetCurrentHealth(), &Opts ));
	MaxHealthLabel->SetText(FText::AsNumber(OwnerEnemy->Health->GetMaxHealth(), &Opts));

}
