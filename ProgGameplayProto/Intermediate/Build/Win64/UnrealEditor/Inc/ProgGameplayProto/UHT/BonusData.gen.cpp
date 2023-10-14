// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProgGameplayProto/Bonuses/BonusData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBonusData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_UBonusData();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_UBonusData_NoRegister();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_UProjectileEffect_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProgGameplayProto();
// End Cross Module References
	DEFINE_FUNCTION(UBonusData::execApplyOnMainCharacter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyOnMainCharacter();
		P_NATIVE_END;
	}
	void UBonusData::StaticRegisterNativesUBonusData()
	{
		UClass* Class = UBonusData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyOnMainCharacter", &UBonusData::execApplyOnMainCharacter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBonusData_ApplyOnMainCharacter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBonusData_ApplyOnMainCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Bonuses/BonusData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBonusData_ApplyOnMainCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBonusData, nullptr, "ApplyOnMainCharacter", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBonusData_ApplyOnMainCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBonusData_ApplyOnMainCharacter_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UBonusData_ApplyOnMainCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBonusData_ApplyOnMainCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBonusData);
	UClass* Z_Construct_UClass_UBonusData_NoRegister()
	{
		return UBonusData::StaticClass();
	}
	struct Z_Construct_UClass_UBonusData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
		static const UECodeGen_Private::FClassPropertyParams NewProp_Effects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Effects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Effects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BonusFireRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BonusFireRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BonusFireRateMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BonusFireRateMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BonusNumberOfShots_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BonusNumberOfShots;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BonusNumberOfShotsMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BonusNumberOfShotsMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BonusPrecision_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BonusPrecision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BonusPrecisionMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BonusPrecisionMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BonusSpread_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BonusSpread;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BonusSpreadMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BonusSpreadMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BonusDamages_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BonusDamages;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BonusDamagesMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BonusDamagesMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BonusProjectileSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BonusProjectileSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BonusProjectileSizeMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BonusProjectileSizeMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BonusRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BonusRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BonusRangeMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BonusRangeMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BonusProjectileSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BonusProjectileSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BonusProjectileSpeedMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BonusProjectileSpeedMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BonusCriticalHitChance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BonusCriticalHitChance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BonusCriticalHitChanceMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BonusCriticalHitChanceMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BonusCriticalHitDamageMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BonusCriticalHitDamageMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBonusData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_ProgGameplayProto,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBonusData_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UBonusData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBonusData_ApplyOnMainCharacter, "ApplyOnMainCharacter" }, // 1452490512
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBonusData_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonusData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "Bonuses/BonusData.h" },
		{ "ModuleRelativePath", "Bonuses/BonusData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonusData_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "BonusData" },
		{ "ModuleRelativePath", "Bonuses/BonusData.h" },
		{ "MultiLine", "TRUE" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UBonusData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBonusData, Description), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBonusData_Statics::NewProp_Description_MetaData), Z_Construct_UClass_UBonusData_Statics::NewProp_Description_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBonusData_Statics::NewProp_Effects_Inner = { "Effects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UProjectileEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonusData_Statics::NewProp_Effects_MetaData[] = {
		{ "Category", "BonusData" },
		{ "ModuleRelativePath", "Bonuses/BonusData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBonusData_Statics::NewProp_Effects = { "Effects", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBonusData, Effects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBonusData_Statics::NewProp_Effects_MetaData), Z_Construct_UClass_UBonusData_Statics::NewProp_Effects_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonusData_Statics::NewProp_BonusFireRate_MetaData[] = {
		{ "Category", "BonusData" },
		{ "ModuleRelativePath", "Bonuses/BonusData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBonusData_Statics::NewProp_BonusFireRate = { "BonusFireRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBonusData, BonusFireRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBonusData_Statics::NewProp_BonusFireRate_MetaData), Z_Construct_UClass_UBonusData_Statics::NewProp_BonusFireRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonusData_Statics::NewProp_BonusFireRateMultiplier_MetaData[] = {
		{ "Category", "BonusData" },
		{ "ModuleRelativePath", "Bonuses/BonusData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBonusData_Statics::NewProp_BonusFireRateMultiplier = { "BonusFireRateMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBonusData, BonusFireRateMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBonusData_Statics::NewProp_BonusFireRateMultiplier_MetaData), Z_Construct_UClass_UBonusData_Statics::NewProp_BonusFireRateMultiplier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonusData_Statics::NewProp_BonusNumberOfShots_MetaData[] = {
		{ "Category", "BonusData" },
		{ "ModuleRelativePath", "Bonuses/BonusData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBonusData_Statics::NewProp_BonusNumberOfShots = { "BonusNumberOfShots", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBonusData, BonusNumberOfShots), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBonusData_Statics::NewProp_BonusNumberOfShots_MetaData), Z_Construct_UClass_UBonusData_Statics::NewProp_BonusNumberOfShots_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonusData_Statics::NewProp_BonusNumberOfShotsMultiplier_MetaData[] = {
		{ "Category", "BonusData" },
		{ "ModuleRelativePath", "Bonuses/BonusData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBonusData_Statics::NewProp_BonusNumberOfShotsMultiplier = { "BonusNumberOfShotsMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBonusData, BonusNumberOfShotsMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBonusData_Statics::NewProp_BonusNumberOfShotsMultiplier_MetaData), Z_Construct_UClass_UBonusData_Statics::NewProp_BonusNumberOfShotsMultiplier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonusData_Statics::NewProp_BonusPrecision_MetaData[] = {
		{ "Category", "BonusData" },
		{ "ModuleRelativePath", "Bonuses/BonusData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBonusData_Statics::NewProp_BonusPrecision = { "BonusPrecision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBonusData, BonusPrecision), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBonusData_Statics::NewProp_BonusPrecision_MetaData), Z_Construct_UClass_UBonusData_Statics::NewProp_BonusPrecision_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonusData_Statics::NewProp_BonusPrecisionMultiplier_MetaData[] = {
		{ "Category", "BonusData" },
		{ "ModuleRelativePath", "Bonuses/BonusData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBonusData_Statics::NewProp_BonusPrecisionMultiplier = { "BonusPrecisionMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBonusData, BonusPrecisionMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBonusData_Statics::NewProp_BonusPrecisionMultiplier_MetaData), Z_Construct_UClass_UBonusData_Statics::NewProp_BonusPrecisionMultiplier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonusData_Statics::NewProp_BonusSpread_MetaData[] = {
		{ "Category", "BonusData" },
		{ "ModuleRelativePath", "Bonuses/BonusData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBonusData_Statics::NewProp_BonusSpread = { "BonusSpread", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBonusData, BonusSpread), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBonusData_Statics::NewProp_BonusSpread_MetaData), Z_Construct_UClass_UBonusData_Statics::NewProp_BonusSpread_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonusData_Statics::NewProp_BonusSpreadMultiplier_MetaData[] = {
		{ "Category", "BonusData" },
		{ "ModuleRelativePath", "Bonuses/BonusData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBonusData_Statics::NewProp_BonusSpreadMultiplier = { "BonusSpreadMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBonusData, BonusSpreadMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBonusData_Statics::NewProp_BonusSpreadMultiplier_MetaData), Z_Construct_UClass_UBonusData_Statics::NewProp_BonusSpreadMultiplier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonusData_Statics::NewProp_BonusDamages_MetaData[] = {
		{ "Category", "BonusData" },
		{ "ModuleRelativePath", "Bonuses/BonusData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBonusData_Statics::NewProp_BonusDamages = { "BonusDamages", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBonusData, BonusDamages), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBonusData_Statics::NewProp_BonusDamages_MetaData), Z_Construct_UClass_UBonusData_Statics::NewProp_BonusDamages_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonusData_Statics::NewProp_BonusDamagesMultiplier_MetaData[] = {
		{ "Category", "BonusData" },
		{ "ModuleRelativePath", "Bonuses/BonusData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBonusData_Statics::NewProp_BonusDamagesMultiplier = { "BonusDamagesMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBonusData, BonusDamagesMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBonusData_Statics::NewProp_BonusDamagesMultiplier_MetaData), Z_Construct_UClass_UBonusData_Statics::NewProp_BonusDamagesMultiplier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonusData_Statics::NewProp_BonusProjectileSize_MetaData[] = {
		{ "Category", "BonusData" },
		{ "ModuleRelativePath", "Bonuses/BonusData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBonusData_Statics::NewProp_BonusProjectileSize = { "BonusProjectileSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBonusData, BonusProjectileSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBonusData_Statics::NewProp_BonusProjectileSize_MetaData), Z_Construct_UClass_UBonusData_Statics::NewProp_BonusProjectileSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonusData_Statics::NewProp_BonusProjectileSizeMultiplier_MetaData[] = {
		{ "Category", "BonusData" },
		{ "ModuleRelativePath", "Bonuses/BonusData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBonusData_Statics::NewProp_BonusProjectileSizeMultiplier = { "BonusProjectileSizeMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBonusData, BonusProjectileSizeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBonusData_Statics::NewProp_BonusProjectileSizeMultiplier_MetaData), Z_Construct_UClass_UBonusData_Statics::NewProp_BonusProjectileSizeMultiplier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonusData_Statics::NewProp_BonusRange_MetaData[] = {
		{ "Category", "BonusData" },
		{ "ModuleRelativePath", "Bonuses/BonusData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBonusData_Statics::NewProp_BonusRange = { "BonusRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBonusData, BonusRange), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBonusData_Statics::NewProp_BonusRange_MetaData), Z_Construct_UClass_UBonusData_Statics::NewProp_BonusRange_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonusData_Statics::NewProp_BonusRangeMultiplier_MetaData[] = {
		{ "Category", "BonusData" },
		{ "ModuleRelativePath", "Bonuses/BonusData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBonusData_Statics::NewProp_BonusRangeMultiplier = { "BonusRangeMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBonusData, BonusRangeMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBonusData_Statics::NewProp_BonusRangeMultiplier_MetaData), Z_Construct_UClass_UBonusData_Statics::NewProp_BonusRangeMultiplier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonusData_Statics::NewProp_BonusProjectileSpeed_MetaData[] = {
		{ "Category", "BonusData" },
		{ "ModuleRelativePath", "Bonuses/BonusData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBonusData_Statics::NewProp_BonusProjectileSpeed = { "BonusProjectileSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBonusData, BonusProjectileSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBonusData_Statics::NewProp_BonusProjectileSpeed_MetaData), Z_Construct_UClass_UBonusData_Statics::NewProp_BonusProjectileSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonusData_Statics::NewProp_BonusProjectileSpeedMultiplier_MetaData[] = {
		{ "Category", "BonusData" },
		{ "ModuleRelativePath", "Bonuses/BonusData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBonusData_Statics::NewProp_BonusProjectileSpeedMultiplier = { "BonusProjectileSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBonusData, BonusProjectileSpeedMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBonusData_Statics::NewProp_BonusProjectileSpeedMultiplier_MetaData), Z_Construct_UClass_UBonusData_Statics::NewProp_BonusProjectileSpeedMultiplier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonusData_Statics::NewProp_BonusCriticalHitChance_MetaData[] = {
		{ "Category", "BonusData" },
		{ "ModuleRelativePath", "Bonuses/BonusData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBonusData_Statics::NewProp_BonusCriticalHitChance = { "BonusCriticalHitChance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBonusData, BonusCriticalHitChance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBonusData_Statics::NewProp_BonusCriticalHitChance_MetaData), Z_Construct_UClass_UBonusData_Statics::NewProp_BonusCriticalHitChance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonusData_Statics::NewProp_BonusCriticalHitChanceMultiplier_MetaData[] = {
		{ "Category", "BonusData" },
		{ "ModuleRelativePath", "Bonuses/BonusData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBonusData_Statics::NewProp_BonusCriticalHitChanceMultiplier = { "BonusCriticalHitChanceMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBonusData, BonusCriticalHitChanceMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBonusData_Statics::NewProp_BonusCriticalHitChanceMultiplier_MetaData), Z_Construct_UClass_UBonusData_Statics::NewProp_BonusCriticalHitChanceMultiplier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBonusData_Statics::NewProp_BonusCriticalHitDamageMultiplier_MetaData[] = {
		{ "Category", "BonusData" },
		{ "ModuleRelativePath", "Bonuses/BonusData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBonusData_Statics::NewProp_BonusCriticalHitDamageMultiplier = { "BonusCriticalHitDamageMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBonusData, BonusCriticalHitDamageMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBonusData_Statics::NewProp_BonusCriticalHitDamageMultiplier_MetaData), Z_Construct_UClass_UBonusData_Statics::NewProp_BonusCriticalHitDamageMultiplier_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBonusData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonusData_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonusData_Statics::NewProp_Effects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonusData_Statics::NewProp_Effects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonusData_Statics::NewProp_BonusFireRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonusData_Statics::NewProp_BonusFireRateMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonusData_Statics::NewProp_BonusNumberOfShots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonusData_Statics::NewProp_BonusNumberOfShotsMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonusData_Statics::NewProp_BonusPrecision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonusData_Statics::NewProp_BonusPrecisionMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonusData_Statics::NewProp_BonusSpread,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonusData_Statics::NewProp_BonusSpreadMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonusData_Statics::NewProp_BonusDamages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonusData_Statics::NewProp_BonusDamagesMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonusData_Statics::NewProp_BonusProjectileSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonusData_Statics::NewProp_BonusProjectileSizeMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonusData_Statics::NewProp_BonusRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonusData_Statics::NewProp_BonusRangeMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonusData_Statics::NewProp_BonusProjectileSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonusData_Statics::NewProp_BonusProjectileSpeedMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonusData_Statics::NewProp_BonusCriticalHitChance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonusData_Statics::NewProp_BonusCriticalHitChanceMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonusData_Statics::NewProp_BonusCriticalHitDamageMultiplier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBonusData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBonusData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBonusData_Statics::ClassParams = {
		&UBonusData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBonusData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBonusData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBonusData_Statics::Class_MetaDataParams), Z_Construct_UClass_UBonusData_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBonusData_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UBonusData()
	{
		if (!Z_Registration_Info_UClass_UBonusData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBonusData.OuterSingleton, Z_Construct_UClass_UBonusData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBonusData.OuterSingleton;
	}
	template<> PROGGAMEPLAYPROTO_API UClass* StaticClass<UBonusData>()
	{
		return UBonusData::StaticClass();
	}
	UBonusData::UBonusData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBonusData);
	UBonusData::~UBonusData() {}
	struct Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Bonuses_BonusData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Bonuses_BonusData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBonusData, UBonusData::StaticClass, TEXT("UBonusData"), &Z_Registration_Info_UClass_UBonusData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBonusData), 4073912490U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Bonuses_BonusData_h_3242420905(TEXT("/Script/ProgGameplayProto"),
		Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Bonuses_BonusData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Bonuses_BonusData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
