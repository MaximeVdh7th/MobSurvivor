// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemiesHealthBar.h"
#include "BossHealthBar.generated.h"

/**
 * 
 */
UCLASS()
class PROGGAMEPLAYPROTO_API UBossHealthBar : public UUserWidget
{
	GENERATED_BODY()


public:
	void SetOwnerBoss(ABoss* InBoss) { OwnerBoss = InBoss; }

protected:

	TWeakObjectPtr<ABoss> OwnerBoss;


	UPROPERTY(meta = (BindWidget))
	class UProgressBar* HealthBar;
	UPROPERTY(meta = (BindWidget))
	class UTextBlock* CurrentHealthLabel;
	UPROPERTY(meta = (BindWidget))
	class UTextBlock* MaxHealthLabel;

	void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;
};
