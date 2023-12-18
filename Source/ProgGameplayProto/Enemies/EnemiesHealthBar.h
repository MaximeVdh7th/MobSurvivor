// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemy.h"
//#include "../../../../../../../../Program Files/Epic Games/UE_5.3/Engine/Source/Runtime/UMG/Public/Blueprint/UserWidget.h"   WHY??
#include "Blueprint/UserWidget.h"
#include "EnemiesHealthBar.generated.h"

UCLASS(Abstract)
class PROGGAMEPLAYPROTO_API UEnemiesHealthBar : public UUserWidget
{
	GENERATED_BODY()
public:

	void SetOwnerEnemy(AEnemy* InEnemy) { OwnerEnemy = InEnemy; }

protected:

	TWeakObjectPtr<AEnemy> OwnerEnemy;



	UPROPERTY(meta = (BindWidget))
	class UProgressBar* HealthBar;
	UPROPERTY(meta = (BindWidget))
	class UTextBlock* CurrentHealthLabel;
	UPROPERTY(meta = (BindWidget))
	class UTextBlock* MaxHealthLabel;

	void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

};
