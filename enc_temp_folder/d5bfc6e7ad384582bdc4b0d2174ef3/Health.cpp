// Fill out your copyright notice in the Description page of Project Settings.


#include "Health.h"

#include "Weapons/WeaponProjectile.h"

void UHealth::BeginPlay()
{
	Super::BeginPlay();

	CurrentHealth = MaxHealth;
}

void UHealth::HitByProjectile(AWeaponProjectile* Projectile)
{
	Super::HitByProjectile(Projectile);
	
	//Shield Health
	if (HasShield) 
	{
		//ShieldHealth -= GetDamage(Projectile);
		ShieldHealth -= Projectile->GetDamages();
		return;
	}
	//
	const float damages = Projectile->GetDamages();

	AddHealth(-damages);
}

void UHealth::HitByAttack(float Damages, AActor* Attacker)
{
	if (not IsInvincible)
	{
		AddHealth(-Damages);
	}
}

void UHealth::AddHealth(float Amount)
{
	if(Amount > 0)
	{
		Amount *= RegenerationMultiplier;
	}
	CurrentHealth += Amount;

	if (CurrentHealth > MaxHealth) 
	{
		CurrentHealth = MaxHealth;
	}

	OnHealthChanged.Broadcast(CurrentHealth);

	if (CurrentHealth <= 0)
		Die();
}

void UHealth::Die()
{
	OnBeforeHealthDie.Broadcast();

	OnHealthDie.Broadcast();
}

float UHealth::GetCurrentHealthPercentage()
{
	float output = CurrentHealth / MaxHealth;

	output = FMath::Clamp(output, 0, 1);

	return output;
}

float UHealth::GetDamage(AWeaponProjectile* DamageProjectile)
{
	float LocalDamage  = DamageProjectile->GetDamages();
	DamageProjectile->DestroyProjectile();
	return LocalDamage;
}

void UHealth::SetMaxHealth(float DefaultMax_Health, float time)
{

	if (IsValid(HP_Curve))
	{
		MaxHealth = DefaultMax_Health + HP_Curve->GetFloatValue(time);
		CurrentHealth = MaxHealth;
	}
}
