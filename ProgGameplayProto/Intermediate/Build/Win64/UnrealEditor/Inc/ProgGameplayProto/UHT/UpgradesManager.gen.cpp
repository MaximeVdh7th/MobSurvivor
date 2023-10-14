// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProgGameplayProto/UpgradesManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUpgradesManager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_AUpgradesManager();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_AUpgradesManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProgGameplayProto();
// End Cross Module References
	void AUpgradesManager::StaticRegisterNativesAUpgradesManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUpgradesManager);
	UClass* Z_Construct_UClass_AUpgradesManager_NoRegister()
	{
		return AUpgradesManager::StaticClass();
	}
	struct Z_Construct_UClass_AUpgradesManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUpgradesManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_ProgGameplayProto,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUpgradesManager_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUpgradesManager_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UpgradesManager.h" },
		{ "ModuleRelativePath", "UpgradesManager.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUpgradesManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUpgradesManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUpgradesManager_Statics::ClassParams = {
		&AUpgradesManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUpgradesManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AUpgradesManager_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AUpgradesManager()
	{
		if (!Z_Registration_Info_UClass_AUpgradesManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUpgradesManager.OuterSingleton, Z_Construct_UClass_AUpgradesManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUpgradesManager.OuterSingleton;
	}
	template<> PROGGAMEPLAYPROTO_API UClass* StaticClass<AUpgradesManager>()
	{
		return AUpgradesManager::StaticClass();
	}
	AUpgradesManager::AUpgradesManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUpgradesManager);
	AUpgradesManager::~AUpgradesManager() {}
	struct Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_UpgradesManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_UpgradesManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUpgradesManager, AUpgradesManager::StaticClass, TEXT("AUpgradesManager"), &Z_Registration_Info_UClass_AUpgradesManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUpgradesManager), 1249298447U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_UpgradesManager_h_1411396139(TEXT("/Script/ProgGameplayProto"),
		Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_UpgradesManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_UpgradesManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
