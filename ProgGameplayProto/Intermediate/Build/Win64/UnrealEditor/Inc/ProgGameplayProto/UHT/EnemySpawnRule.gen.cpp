// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProgGameplayProto/EnemySpawnRule.h"
#include "../../Source/Runtime/Engine/Classes/Curves/CurveFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemySpawnRule() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_AEnemy_NoRegister();
	PROGGAMEPLAYPROTO_API UScriptStruct* Z_Construct_UScriptStruct_FPunctualEnemySpawnRule();
	PROGGAMEPLAYPROTO_API UScriptStruct* Z_Construct_UScriptStruct_FRangeEnemySpawnRule();
	UPackage* Z_Construct_UPackage__Script_ProgGameplayProto();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PunctualEnemySpawnRule;
class UScriptStruct* FPunctualEnemySpawnRule::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PunctualEnemySpawnRule.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PunctualEnemySpawnRule.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPunctualEnemySpawnRule, (UObject*)Z_Construct_UPackage__Script_ProgGameplayProto(), TEXT("PunctualEnemySpawnRule"));
	}
	return Z_Registration_Info_UScriptStruct_PunctualEnemySpawnRule.OuterSingleton;
}
template<> PROGGAMEPLAYPROTO_API UScriptStruct* StaticStruct<FPunctualEnemySpawnRule>()
{
	return FPunctualEnemySpawnRule::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPunctualEnemySpawnRule_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Number_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Number;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enemy_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Enemy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPunctualEnemySpawnRule_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemySpawnRule.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPunctualEnemySpawnRule_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPunctualEnemySpawnRule>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPunctualEnemySpawnRule_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "PunctualEnemySpawnRule" },
		{ "ModuleRelativePath", "EnemySpawnRule.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPunctualEnemySpawnRule_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPunctualEnemySpawnRule, Time), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPunctualEnemySpawnRule_Statics::NewProp_Time_MetaData), Z_Construct_UScriptStruct_FPunctualEnemySpawnRule_Statics::NewProp_Time_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPunctualEnemySpawnRule_Statics::NewProp_Number_MetaData[] = {
		{ "Category", "PunctualEnemySpawnRule" },
		{ "ModuleRelativePath", "EnemySpawnRule.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPunctualEnemySpawnRule_Statics::NewProp_Number = { "Number", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPunctualEnemySpawnRule, Number), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPunctualEnemySpawnRule_Statics::NewProp_Number_MetaData), Z_Construct_UScriptStruct_FPunctualEnemySpawnRule_Statics::NewProp_Number_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPunctualEnemySpawnRule_Statics::NewProp_Enemy_MetaData[] = {
		{ "Category", "PunctualEnemySpawnRule" },
		{ "ModuleRelativePath", "EnemySpawnRule.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FPunctualEnemySpawnRule_Statics::NewProp_Enemy = { "Enemy", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPunctualEnemySpawnRule, Enemy), Z_Construct_UClass_UClass, Z_Construct_UClass_AEnemy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPunctualEnemySpawnRule_Statics::NewProp_Enemy_MetaData), Z_Construct_UScriptStruct_FPunctualEnemySpawnRule_Statics::NewProp_Enemy_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPunctualEnemySpawnRule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPunctualEnemySpawnRule_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPunctualEnemySpawnRule_Statics::NewProp_Number,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPunctualEnemySpawnRule_Statics::NewProp_Enemy,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPunctualEnemySpawnRule_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProgGameplayProto,
		nullptr,
		&NewStructOps,
		"PunctualEnemySpawnRule",
		Z_Construct_UScriptStruct_FPunctualEnemySpawnRule_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPunctualEnemySpawnRule_Statics::PropPointers),
		sizeof(FPunctualEnemySpawnRule),
		alignof(FPunctualEnemySpawnRule),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPunctualEnemySpawnRule_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPunctualEnemySpawnRule_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPunctualEnemySpawnRule_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPunctualEnemySpawnRule()
	{
		if (!Z_Registration_Info_UScriptStruct_PunctualEnemySpawnRule.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PunctualEnemySpawnRule.InnerSingleton, Z_Construct_UScriptStruct_FPunctualEnemySpawnRule_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PunctualEnemySpawnRule.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RangeEnemySpawnRule;
class UScriptStruct* FRangeEnemySpawnRule::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RangeEnemySpawnRule.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RangeEnemySpawnRule.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRangeEnemySpawnRule, (UObject*)Z_Construct_UPackage__Script_ProgGameplayProto(), TEXT("RangeEnemySpawnRule"));
	}
	return Z_Registration_Info_UScriptStruct_RangeEnemySpawnRule.OuterSingleton;
}
template<> PROGGAMEPLAYPROTO_API UScriptStruct* StaticStruct<FRangeEnemySpawnRule>()
{
	return FRangeEnemySpawnRule::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRangeEnemySpawnRule_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enemy_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Enemy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfEnemyToSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NumberOfEnemyToSpawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRangeEnemySpawnRule_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemySpawnRule.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRangeEnemySpawnRule_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRangeEnemySpawnRule>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRangeEnemySpawnRule_Statics::NewProp_SpawnCurve_MetaData[] = {
		{ "Category", "RangeEnemySpawnRule" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// spawn value of enemy according to time\n" },
#endif
		{ "ModuleRelativePath", "EnemySpawnRule.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "spawn value of enemy according to time" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRangeEnemySpawnRule_Statics::NewProp_SpawnCurve = { "SpawnCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRangeEnemySpawnRule, SpawnCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRangeEnemySpawnRule_Statics::NewProp_SpawnCurve_MetaData), Z_Construct_UScriptStruct_FRangeEnemySpawnRule_Statics::NewProp_SpawnCurve_MetaData) }; // 3321759441
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRangeEnemySpawnRule_Statics::NewProp_Enemy_MetaData[] = {
		{ "Category", "RangeEnemySpawnRule" },
		{ "ModuleRelativePath", "EnemySpawnRule.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FRangeEnemySpawnRule_Statics::NewProp_Enemy = { "Enemy", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRangeEnemySpawnRule, Enemy), Z_Construct_UClass_UClass, Z_Construct_UClass_AEnemy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRangeEnemySpawnRule_Statics::NewProp_Enemy_MetaData), Z_Construct_UScriptStruct_FRangeEnemySpawnRule_Statics::NewProp_Enemy_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRangeEnemySpawnRule_Statics::NewProp_NumberOfEnemyToSpawn_MetaData[] = {
		{ "ModuleRelativePath", "EnemySpawnRule.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRangeEnemySpawnRule_Statics::NewProp_NumberOfEnemyToSpawn = { "NumberOfEnemyToSpawn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRangeEnemySpawnRule, NumberOfEnemyToSpawn), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRangeEnemySpawnRule_Statics::NewProp_NumberOfEnemyToSpawn_MetaData), Z_Construct_UScriptStruct_FRangeEnemySpawnRule_Statics::NewProp_NumberOfEnemyToSpawn_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRangeEnemySpawnRule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRangeEnemySpawnRule_Statics::NewProp_SpawnCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRangeEnemySpawnRule_Statics::NewProp_Enemy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRangeEnemySpawnRule_Statics::NewProp_NumberOfEnemyToSpawn,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRangeEnemySpawnRule_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProgGameplayProto,
		nullptr,
		&NewStructOps,
		"RangeEnemySpawnRule",
		Z_Construct_UScriptStruct_FRangeEnemySpawnRule_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRangeEnemySpawnRule_Statics::PropPointers),
		sizeof(FRangeEnemySpawnRule),
		alignof(FRangeEnemySpawnRule),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRangeEnemySpawnRule_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRangeEnemySpawnRule_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRangeEnemySpawnRule_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRangeEnemySpawnRule()
	{
		if (!Z_Registration_Info_UScriptStruct_RangeEnemySpawnRule.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RangeEnemySpawnRule.InnerSingleton, Z_Construct_UScriptStruct_FRangeEnemySpawnRule_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RangeEnemySpawnRule.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_EnemySpawnRule_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_EnemySpawnRule_h_Statics::ScriptStructInfo[] = {
		{ FPunctualEnemySpawnRule::StaticStruct, Z_Construct_UScriptStruct_FPunctualEnemySpawnRule_Statics::NewStructOps, TEXT("PunctualEnemySpawnRule"), &Z_Registration_Info_UScriptStruct_PunctualEnemySpawnRule, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPunctualEnemySpawnRule), 2719654815U) },
		{ FRangeEnemySpawnRule::StaticStruct, Z_Construct_UScriptStruct_FRangeEnemySpawnRule_Statics::NewStructOps, TEXT("RangeEnemySpawnRule"), &Z_Registration_Info_UScriptStruct_RangeEnemySpawnRule, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRangeEnemySpawnRule), 2059494961U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_EnemySpawnRule_h_3847615463(TEXT("/Script/ProgGameplayProto"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_EnemySpawnRule_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_EnemySpawnRule_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
