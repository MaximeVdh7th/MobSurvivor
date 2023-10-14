// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProgGameplayProto/EnemySpawnerManager.h"
#include "ProgGameplayProto/EnemySpawnRule.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemySpawnerManager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_AEnemySpawnerManager();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_AEnemySpawnerManager_NoRegister();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_AProgGameplayProtoGameMode_NoRegister();
	PROGGAMEPLAYPROTO_API UScriptStruct* Z_Construct_UScriptStruct_FPunctualEnemySpawnRule();
	PROGGAMEPLAYPROTO_API UScriptStruct* Z_Construct_UScriptStruct_FRangeEnemySpawnRule();
	UPackage* Z_Construct_UPackage__Script_ProgGameplayProto();
// End Cross Module References
	void AEnemySpawnerManager::StaticRegisterNativesAEnemySpawnerManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemySpawnerManager);
	UClass* Z_Construct_UClass_AEnemySpawnerManager_NoRegister()
	{
		return AEnemySpawnerManager::StaticClass();
	}
	struct Z_Construct_UClass_AEnemySpawnerManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameMode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GameMode;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PunctualEnemySpawnRules_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PunctualEnemySpawnRules_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PunctualEnemySpawnRules;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RangeEnemySpawnRules_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RangeEnemySpawnRules_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RangeEnemySpawnRules;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemySpawnerManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_ProgGameplayProto,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpawnerManager_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemySpawnerManager_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "EnemySpawnerManager.h" },
		{ "ModuleRelativePath", "EnemySpawnerManager.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemySpawnerManager_Statics::NewProp_GameMode_MetaData[] = {
		{ "ModuleRelativePath", "EnemySpawnerManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemySpawnerManager_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemySpawnerManager, GameMode), Z_Construct_UClass_AProgGameplayProtoGameMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpawnerManager_Statics::NewProp_GameMode_MetaData), Z_Construct_UClass_AEnemySpawnerManager_Statics::NewProp_GameMode_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnemySpawnerManager_Statics::NewProp_PunctualEnemySpawnRules_Inner = { "PunctualEnemySpawnRules", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPunctualEnemySpawnRule, METADATA_PARAMS(0, nullptr) }; // 2719654815
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemySpawnerManager_Statics::NewProp_PunctualEnemySpawnRules_MetaData[] = {
		{ "ModuleRelativePath", "EnemySpawnerManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEnemySpawnerManager_Statics::NewProp_PunctualEnemySpawnRules = { "PunctualEnemySpawnRules", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemySpawnerManager, PunctualEnemySpawnRules), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpawnerManager_Statics::NewProp_PunctualEnemySpawnRules_MetaData), Z_Construct_UClass_AEnemySpawnerManager_Statics::NewProp_PunctualEnemySpawnRules_MetaData) }; // 2719654815
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnemySpawnerManager_Statics::NewProp_RangeEnemySpawnRules_Inner = { "RangeEnemySpawnRules", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRangeEnemySpawnRule, METADATA_PARAMS(0, nullptr) }; // 2059494961
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemySpawnerManager_Statics::NewProp_RangeEnemySpawnRules_MetaData[] = {
		{ "ModuleRelativePath", "EnemySpawnerManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEnemySpawnerManager_Statics::NewProp_RangeEnemySpawnRules = { "RangeEnemySpawnRules", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemySpawnerManager, RangeEnemySpawnRules), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpawnerManager_Statics::NewProp_RangeEnemySpawnRules_MetaData), Z_Construct_UClass_AEnemySpawnerManager_Statics::NewProp_RangeEnemySpawnRules_MetaData) }; // 2059494961
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemySpawnerManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawnerManager_Statics::NewProp_GameMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawnerManager_Statics::NewProp_PunctualEnemySpawnRules_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawnerManager_Statics::NewProp_PunctualEnemySpawnRules,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawnerManager_Statics::NewProp_RangeEnemySpawnRules_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawnerManager_Statics::NewProp_RangeEnemySpawnRules,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemySpawnerManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemySpawnerManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemySpawnerManager_Statics::ClassParams = {
		&AEnemySpawnerManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemySpawnerManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpawnerManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpawnerManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemySpawnerManager_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpawnerManager_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AEnemySpawnerManager()
	{
		if (!Z_Registration_Info_UClass_AEnemySpawnerManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemySpawnerManager.OuterSingleton, Z_Construct_UClass_AEnemySpawnerManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemySpawnerManager.OuterSingleton;
	}
	template<> PROGGAMEPLAYPROTO_API UClass* StaticClass<AEnemySpawnerManager>()
	{
		return AEnemySpawnerManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemySpawnerManager);
	AEnemySpawnerManager::~AEnemySpawnerManager() {}
	struct Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_EnemySpawnerManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_EnemySpawnerManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemySpawnerManager, AEnemySpawnerManager::StaticClass, TEXT("AEnemySpawnerManager"), &Z_Registration_Info_UClass_AEnemySpawnerManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemySpawnerManager), 4345676U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_EnemySpawnerManager_h_1030571451(TEXT("/Script/ProgGameplayProto"),
		Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_EnemySpawnerManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_EnemySpawnerManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
