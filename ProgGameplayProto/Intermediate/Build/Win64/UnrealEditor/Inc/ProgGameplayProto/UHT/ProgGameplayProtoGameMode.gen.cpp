// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProgGameplayProto/ProgGameplayProtoGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProgGameplayProtoGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_ABonusManager_NoRegister();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_AEnemySpawnerManager_NoRegister();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_AProgGameplayProtoGameMode();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_AProgGameplayProtoGameMode_NoRegister();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_UGameLevelData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProgGameplayProto();
// End Cross Module References
	void AProgGameplayProtoGameMode::StaticRegisterNativesAProgGameplayProtoGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProgGameplayProtoGameMode);
	UClass* Z_Construct_UClass_AProgGameplayProtoGameMode_NoRegister()
	{
		return AProgGameplayProtoGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AProgGameplayProtoGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameLevelData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GameLevelData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemySpawnerManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemySpawnerManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BonusManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BonusManager;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProgGameplayProtoGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ProgGameplayProto,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProgGameplayProtoGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProgGameplayProtoGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ProgGameplayProtoGameMode.h" },
		{ "ModuleRelativePath", "ProgGameplayProtoGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProgGameplayProtoGameMode_Statics::NewProp_GameLevelData_MetaData[] = {
		{ "Category", "ProgGameplayProtoGameMode" },
		{ "ModuleRelativePath", "ProgGameplayProtoGameMode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProgGameplayProtoGameMode_Statics::NewProp_GameLevelData = { "GameLevelData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProgGameplayProtoGameMode, GameLevelData), Z_Construct_UClass_UGameLevelData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProgGameplayProtoGameMode_Statics::NewProp_GameLevelData_MetaData), Z_Construct_UClass_AProgGameplayProtoGameMode_Statics::NewProp_GameLevelData_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProgGameplayProtoGameMode_Statics::NewProp_EnemySpawnerManager_MetaData[] = {
		{ "Category", "ProgGameplayProtoGameMode" },
		{ "ModuleRelativePath", "ProgGameplayProtoGameMode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProgGameplayProtoGameMode_Statics::NewProp_EnemySpawnerManager = { "EnemySpawnerManager", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProgGameplayProtoGameMode, EnemySpawnerManager), Z_Construct_UClass_AEnemySpawnerManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProgGameplayProtoGameMode_Statics::NewProp_EnemySpawnerManager_MetaData), Z_Construct_UClass_AProgGameplayProtoGameMode_Statics::NewProp_EnemySpawnerManager_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProgGameplayProtoGameMode_Statics::NewProp_BonusManager_MetaData[] = {
		{ "Category", "ProgGameplayProtoGameMode" },
		{ "ModuleRelativePath", "ProgGameplayProtoGameMode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProgGameplayProtoGameMode_Statics::NewProp_BonusManager = { "BonusManager", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProgGameplayProtoGameMode, BonusManager), Z_Construct_UClass_ABonusManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProgGameplayProtoGameMode_Statics::NewProp_BonusManager_MetaData), Z_Construct_UClass_AProgGameplayProtoGameMode_Statics::NewProp_BonusManager_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProgGameplayProtoGameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProgGameplayProtoGameMode_Statics::NewProp_GameLevelData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProgGameplayProtoGameMode_Statics::NewProp_EnemySpawnerManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProgGameplayProtoGameMode_Statics::NewProp_BonusManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProgGameplayProtoGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProgGameplayProtoGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AProgGameplayProtoGameMode_Statics::ClassParams = {
		&AProgGameplayProtoGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AProgGameplayProtoGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AProgGameplayProtoGameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProgGameplayProtoGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AProgGameplayProtoGameMode_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProgGameplayProtoGameMode_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AProgGameplayProtoGameMode()
	{
		if (!Z_Registration_Info_UClass_AProgGameplayProtoGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProgGameplayProtoGameMode.OuterSingleton, Z_Construct_UClass_AProgGameplayProtoGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AProgGameplayProtoGameMode.OuterSingleton;
	}
	template<> PROGGAMEPLAYPROTO_API UClass* StaticClass<AProgGameplayProtoGameMode>()
	{
		return AProgGameplayProtoGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProgGameplayProtoGameMode);
	AProgGameplayProtoGameMode::~AProgGameplayProtoGameMode() {}
	struct Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_ProgGameplayProtoGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_ProgGameplayProtoGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AProgGameplayProtoGameMode, AProgGameplayProtoGameMode::StaticClass, TEXT("AProgGameplayProtoGameMode"), &Z_Registration_Info_UClass_AProgGameplayProtoGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProgGameplayProtoGameMode), 604836041U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_ProgGameplayProtoGameMode_h_3931368961(TEXT("/Script/ProgGameplayProto"),
		Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_ProgGameplayProtoGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_ProgGameplayProtoGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
