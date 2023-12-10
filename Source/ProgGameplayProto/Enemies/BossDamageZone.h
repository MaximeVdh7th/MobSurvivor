// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "../ProgGameplayProtoCharacter.h"
#include "../Health.h"
#include "BossDamageZone.generated.h"

UCLASS()
class PROGGAMEPLAYPROTO_API ABossDamageZone : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABossDamageZone();

	UFUNCTION()
		void TriggerEnter(UPrimitiveComponent* OverlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweetResult);
	
	UFUNCTION()
		void TriggerExit(UPrimitiveComponent* OverlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComponent, int32 OtherBodyIndex);

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USphereComponent* Collision;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USceneComponent* Root;
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void ApplyDamage();
	bool IsInSector;
	UHealth* HealthPlayer;

	UPROPERTY(Category = ZoneSettings, EditAnywhere, BlueprintReadWrite)
	float ZoneRadius = 2;
	UPROPERTY(Category = ZoneSettings, EditAnywhere, BlueprintReadWrite)
	float ZoneDamage = 0.5;
	UPROPERTY(Category = ZoneSettings, EditAnywhere, BlueprintReadWrite)
	float ZoneDuration = 0.5;


	float CustomDeltaTime;

	FTimerHandle UnusedHandle;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
