// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ProjectileInteraction.h"
#include "Health.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnHealthDie);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHealthChanged, float, NewHealthValue);

/**
 *
 */
UCLASS()
class PROGGAMEPLAYPROTO_API UHealth : public UProjectileInteraction
{
	GENERATED_BODY()

protected:

	virtual void BeginPlay() override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxHealth = 10;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RegenerationMultiplier = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool HasShield;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ShieldHealth;
	UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite)
	float CurrentHealth;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* HP_Curve;
	UPROPERTY()
	FOnHealthDie OnBeforeHealthDie;

	UPROPERTY()
	FOnHealthDie OnHealthDie;

	UPROPERTY(BlueprintAssignable)
	FOnHealthChanged OnHealthChanged;

	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	bool IsInvincible;

public:
	virtual void HitByProjectile(AWeaponProjectile* Projectile) override;
	virtual void HitByAttack(float Damages, AActor* Attacker);
	UFUNCTION(BlueprintCallable)
	virtual void AddHealth(float Amount);
	virtual void Die();	

	UFUNCTION(BlueprintCallable)
	FORCEINLINE float GetCurrentHealth() { return CurrentHealth; }

	UFUNCTION(BlueprintCallable, BlueprintPure)
	virtual float GetCurrentHealthPercentage();

	UFUNCTION(BlueprintCallable)
	FORCEINLINE float GetMaxHealth() { return MaxHealth; }
	UFUNCTION(BlueprintCallable)
	FORCEINLINE void SetMaxHealth(float DefaultMax_Health, float time);

	float GetDamage(AWeaponProjectile* DamageProjectile);
};
