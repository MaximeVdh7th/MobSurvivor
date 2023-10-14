// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProgGameplayProto/GameLevelData.h"
#include "ProgGameplayProto/EnemySpawnRule.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameLevelData() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_UBonusData_NoRegister();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_UGameLevelData();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_UGameLevelData_NoRegister();
	PROGGAMEPLAYPROTO_API UScriptStruct* Z_Construct_UScriptStruct_FPunctualEnemySpawnRule();
	PROGGAMEPLAYPROTO_API UScriptStruct* Z_Construct_UScriptStruct_FRangeEnemySpawnRule();
	UPackage* Z_Construct_UPackage__Script_ProgGameplayProto();
// End Cross Module References
	void UGameLevelData::StaticRegisterNativesUGameLevelData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameLevelData);
	UClass* Z_Construct_UClass_UGameLevelData_NoRegister()
	{
		return UGameLevelData::StaticClass();
	}
	struct Z_Construct_UClass_UGameLevelData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PunctualSpawnRules_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PunctualSpawnRules_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PunctualSpawnRules;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RangeSpawnRules_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RangeSpawnRules_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RangeSpawnRules;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Bonuses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bonuses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bonuses;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameLevelData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_ProgGameplayProto,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameLevelData_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameLevelData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "GameLevelData.h" },
		{ "ModuleRelativePath", "GameLevelData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameLevelData_Statics::NewProp_PunctualSpawnRules_Inner = { "PunctualSpawnRules", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPunctualEnemySpawnRule, METADATA_PARAMS(0, nullptr) }; // 2719654815
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameLevelData_Statics::NewProp_PunctualSpawnRules_MetaData[] = {
		{ "Category", "GameLevelData" },
		{ "ModuleRelativePath", "GameLevelData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameLevelData_Statics::NewProp_PunctualSpawnRules = { "PunctualSpawnRules", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameLevelData, PunctualSpawnRules), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameLevelData_Statics::NewProp_PunctualSpawnRules_MetaData), Z_Construct_UClass_UGameLevelData_Statics::NewProp_PunctualSpawnRules_MetaData) }; // 2719654815
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameLevelData_Statics::NewProp_RangeSpawnRules_Inner = { "RangeSpawnRules", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRangeEnemySpawnRule, METADATA_PARAMS(0, nullptr) }; // 2059494961
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameLevelData_Statics::NewProp_RangeSpawnRules_MetaData[] = {
		{ "Category", "GameLevelData" },
		{ "ModuleRelativePath", "GameLevelData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameLevelData_Statics::NewProp_RangeSpawnRules = { "RangeSpawnRules", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameLevelData, RangeSpawnRules), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameLevelData_Statics::NewProp_RangeSpawnRules_MetaData), Z_Construct_UClass_UGameLevelData_Statics::NewProp_RangeSpawnRules_MetaData) }; // 2059494961
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameLevelData_Statics::NewProp_Bonuses_Inner = { "Bonuses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBonusData_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameLevelData_Statics::NewProp_Bonuses_MetaData[] = {
		{ "Category", "GameLevelData" },
		{ "ModuleRelativePath", "GameLevelData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameLevelData_Statics::NewProp_Bonuses = { "Bonuses", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameLevelData, Bonuses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameLevelData_Statics::NewProp_Bonuses_MetaData), Z_Construct_UClass_UGameLevelData_Statics::NewProp_Bonuses_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameLevelData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameLevelData_Statics::NewProp_PunctualSpawnRules_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameLevelData_Statics::NewProp_PunctualSpawnRules,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameLevelData_Statics::NewProp_RangeSpawnRules_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameLevelData_Statics::NewProp_RangeSpawnRules,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameLevelData_Statics::NewProp_Bonuses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameLevelData_Statics::NewProp_Bonuses,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameLevelData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameLevelData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameLevelData_Statics::ClassParams = {
		&UGameLevelData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameLevelData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameLevelData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameLevelData_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameLevelData_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameLevelData_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGameLevelData()
	{
		if (!Z_Registration_Info_UClass_UGameLevelData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameLevelData.OuterSingleton, Z_Construct_UClass_UGameLevelData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameLevelData.OuterSingleton;
	}
	template<> PROGGAMEPLAYPROTO_API UClass* StaticClass<UGameLevelData>()
	{
		return UGameLevelData::StaticClass();
	}
	UGameLevelData::UGameLevelData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameLevelData);
	UGameLevelData::~UGameLevelData() {}
	struct Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_GameLevelData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_GameLevelData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameLevelData, UGameLevelData::StaticClass, TEXT("UGameLevelData"), &Z_Registration_Info_UClass_UGameLevelData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameLevelData), 899606994U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_GameLevelData_h_1935960267(TEXT("/Script/ProgGameplayProto"),
		Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_GameLevelData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_GameLevelData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
