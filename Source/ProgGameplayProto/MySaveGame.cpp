// Fill out your copyright notice in the Description page of Project Settings.


#include "MySaveGame.h"
#include "GameUtils.h"

// Combine array of upgrade state with struct + set game utils values
void UMySaveGame::CombineStruct(FUpgradeValueStruct Bonuses, TArray<int> LevelByUpgrade)
{
	UpgradeStrut = Bonuses;
	UpgradeStrut.LevelByUpgrade = LevelByUpgrade;

	UGameUtils::GoldLuck		= Bonuses.GoldLuck;
	UGameUtils::GoldMultiplier	= Bonuses.GoldMultiplier;
	UGameUtils::XPLuck			= Bonuses.XPLuck;
	FString TheFloatStr = FString::SanitizeFloat(Bonuses.XPLuck);
	GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, *TheFloatStr);
	UGameUtils::XPMultiplier	= Bonuses.XPMultiplier;

}
// From all bonuses 
FUpgradeValueStruct UMySaveGame::CombineBonuses(TArray<FUpgradeValueStruct> Bonuses)
{
	FUpgradeValueStruct incrementalStruct;
#pragma region Initialize
	incrementalStruct.HPMax 				 = 0;
	incrementalStruct.HPRegen 				 = 0;
	incrementalStruct.CollectionDistance 	 = 0;
	incrementalStruct.GoldLuck 				 = 0;
	incrementalStruct.GoldMultiplier 		 = 0;
	incrementalStruct.XPLuck 				 = 0;
	incrementalStruct.XPMultiplier 			 = 0;
	incrementalStruct.HPLuck 				 = 0;
	incrementalStruct.InvicibilityTime 		 = 0;


	incrementalStruct.DashDistance 			 = 0;
	incrementalStruct.DashCooldown 			 = 0;


	incrementalStruct.ShieldCooldown 		 = 0;
	incrementalStruct.ShieldAbsortion		 = 0;


	incrementalStruct.BombCooldown  		 = 0;
	incrementalStruct.BombRadiusDamage		 = 0;
	incrementalStruct.BombDamage 			 = 0;


	incrementalStruct.BombNotSelfDamage = false;
#pragma endregion
	for (size_t i = 0; i < Bonuses.Num(); i++)
	{
		incrementalStruct.HPMax					+= Bonuses[i].HPMax;
		incrementalStruct.HPRegen				+= Bonuses[i].HPRegen;
		incrementalStruct.CollectionDistance	+= Bonuses[i].CollectionDistance;
		incrementalStruct.GoldLuck				+= Bonuses[i].GoldLuck;
		incrementalStruct.GoldMultiplier		+= Bonuses[i].GoldMultiplier;
		incrementalStruct.XPLuck				+= Bonuses[i].XPLuck;
		incrementalStruct.XPMultiplier			+= Bonuses[i].XPMultiplier;
		incrementalStruct.HPLuck				+= Bonuses[i].HPLuck;
		incrementalStruct.InvicibilityTime		+= Bonuses[i].InvicibilityTime;
		
		
		incrementalStruct.DashDistance		+= Bonuses[i].DashDistance;
		incrementalStruct.DashCooldown		+= Bonuses[i].DashCooldown;
		
		
		incrementalStruct.ShieldCooldown	+= Bonuses[i].ShieldCooldown;
		incrementalStruct.ShieldAbsortion	+= Bonuses[i].ShieldAbsortion;
		
		
		incrementalStruct.BombCooldown		+= Bonuses[i].BombCooldown;
		incrementalStruct.BombRadiusDamage	+= Bonuses[i].BombRadiusDamage;
		incrementalStruct.BombDamage		+= Bonuses[i].BombDamage;

		if (Bonuses[i].BombNotSelfDamage) 
		{
			incrementalStruct.BombNotSelfDamage = true;
		}
	} 
	return incrementalStruct;
}
// Convert BonusesDataArray to correct struct upgrade for save
FUpgradeValueStruct UMySaveGame::ConvertUpdateToStruct(UPermanentBonusesData* Data, int32 Index)
{
	FUpgradeValueStruct SaveStruct;

	SaveStruct.HPMax				= GetBestIndex(Data->HPMax,Index);
	SaveStruct.HPRegen				= GetBestIndex(Data->HPRegen,Index);
	SaveStruct.CollectionDistance	= GetBestIndex(Data->CollectionDistance,Index);
	SaveStruct.GoldLuck				= GetBestIndex(Data->GoldLuck,Index);
	SaveStruct.GoldMultiplier		= GetBestIndex(Data->GoldMultiplier,Index);
	SaveStruct.XPLuck				= GetBestIndex(Data->XPLuck,Index);
	SaveStruct.XPMultiplier			= GetBestIndex(Data->XPMultiplier,Index);
	SaveStruct.HPLuck				= GetBestIndex(Data->HPLuck, Index);
	SaveStruct.InvicibilityTime		= GetBestIndex(Data->InvicibilityTime,Index);
	
	
	SaveStruct.DashDistance = GetBestIndex(Data->DashDistance,Index);
	SaveStruct.DashCooldown = GetBestIndex(Data->DashCooldown,Index);
	
	
	SaveStruct.ShieldCooldown	= GetBestIndex(Data->ShieldCooldown,Index);
	SaveStruct.ShieldAbsortion	= GetBestIndex(Data->ShieldAbsortion,Index);
	
	
	SaveStruct.BombCooldown		= GetBestIndex(Data->BombCooldown,Index);
	SaveStruct.BombRadiusDamage = GetBestIndex(Data->BombRadiusDamage,Index);
	SaveStruct.BombDamage		= GetBestIndex(Data->BombDamage,Index);
	
	if(Data->BombNotSelfDamage.Num() >= Index && Data->BombNotSelfDamage.Num() != 0)
	{
		SaveStruct.BombNotSelfDamage = Data->BombNotSelfDamage[Index];
	}
	else
	{
		SaveStruct.BombNotSelfDamage = false;
	}
	return SaveStruct;
}

// Get the good value per index
float UMySaveGame::GetBestIndex(const TArray<float>& List, int32 Index)
{
	float bestValue;
	if(List.Num() == 0)
	{
		bestValue = 0;
	}	
	else if(List.Num() >= Index)
	{
		bestValue = List[Index];
	}
	else
	{
		bestValue = List.Last();
	}
	return bestValue;
}