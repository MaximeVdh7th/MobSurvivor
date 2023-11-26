// Fill out your copyright notice in the Description page of Project Settings.


#include "MySaveGame.h"

void UMySaveGame::CombineStruct(FUpgradeValueStruct Bonuses, TArray<int> LevelByUpgrade)
{
	FUpgradeValueStruct incrementalStruct = Bonuses;

	UpgradeStrut = incrementalStruct;
	UpgradeStrut.LevelByUpgrade = LevelByUpgrade;
}

FUpgradeValueStruct UMySaveGame::CombineBonuses(TArray<FUpgradeValueStruct> Bonuses)
{
	FUpgradeValueStruct incrementalStruct;

	for (size_t i = 0; i < Bonuses.Num(); i++)
	{
		incrementalStruct.HPMax					+= Bonuses[i].HPMax;
		incrementalStruct.HPRegen				+= Bonuses[i].HPRegen;
		incrementalStruct.CollectionDistance	+= Bonuses[i].CollectionDistance;
		incrementalStruct.GoldLuck				+= Bonuses[i].GoldLuck;
		incrementalStruct.XPLuck				+= Bonuses[i].XPLuck;
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

FUpgradeValueStruct UMySaveGame::ConvertUpdateToStruct(UPermanentBonusesData* Data, int32 Index)
{
	FUpgradeValueStruct SaveStruct;

	SaveStruct.HPMax				= GetGoodestIndex(&Data->HPMax,Index);
	SaveStruct.HPRegen				= GetGoodestIndex(&Data->HPRegen,Index);
	SaveStruct.CollectionDistance	= GetGoodestIndex(&Data->CollectionDistance,Index);
	SaveStruct.GoldLuck				= GetGoodestIndex(&Data->GoldLuck,Index);
	SaveStruct.XPLuck				= GetGoodestIndex(&Data->XPLuck,Index);
	SaveStruct.InvicibilityTime		= GetGoodestIndex(&Data->InvicibilityTime,Index);
	
	
	SaveStruct.DashDistance = GetGoodestIndex(&Data->DashDistance,Index);
	SaveStruct.DashCooldown = GetGoodestIndex(&Data->DashCooldown,Index);
	
	
	SaveStruct.ShieldCooldown	= GetGoodestIndex(&Data->ShieldCooldown,Index);
	SaveStruct.ShieldAbsortion	= GetGoodestIndex(&Data->ShieldAbsortion,Index);
	
	
	SaveStruct.BombCooldown		= GetGoodestIndex(&Data->BombCooldown,Index);
	SaveStruct.BombRadiusDamage = GetGoodestIndex(&Data->BombRadiusDamage,Index);
	SaveStruct.BombDamage		= GetGoodestIndex(&Data->BombDamage,Index);
	
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

float UMySaveGame::GetGoodestIndex(TArray<float>* List, int32 Index)
{
	float bestValue;
	if(List->Num() == 0)
	{
		bestValue = 0;
	}	
	else if(List->Num() >= Index)
	{
		//bestValue = List[Index];
		bestValue = List->Find(Index);
	}
	else
	{
		bestValue = List->Last();
	}
	return bestValue;
	//return List[Index] ? List->Num()-1 >= Index : List->Last();
}