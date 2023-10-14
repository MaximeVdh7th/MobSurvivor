// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProgGameplayProto/BonusManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBonusManager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_ABonusManager();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_ABonusManager_NoRegister();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_UBonusData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProgGameplayProto();
// End Cross Module References
	DEFINE_FUNCTION(ABonusManager::execGetRandomBonus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBonusData**)Z_Param__Result=P_THIS->GetRandomBonus();
		P_NATIVE_END;
	}
	void ABonusManager::StaticRegisterNativesABonusManager()
	{
		UClass* Class = ABonusManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRandomBonus", &ABonusManager::execGetRandomBonus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABonusManager_GetRandomBonus_Statics
	{
		struct BonusManager_eventGetRandomBonus_Parms
		{
			UBonusData* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABonusManager_GetRandomBonus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BonusManager_eventGetRandomBonus_Parms, ReturnValue), Z_Construct_UClass_UBonusData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABonusManager_GetRandomBonus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABonusManager_GetRandomBonus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABonusManager_GetRandomBonus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BonusManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABonusManager_GetRandomBonus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABonusManager, nullptr, "GetRandomBonus", nullptr, nullptr, Z_Construct_UFunction_ABonusManager_GetRandomBonus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABonusManager_GetRandomBonus_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABonusManager_GetRandomBonus_Statics::BonusManager_eventGetRandomBonus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABonusManager_GetRandomBonus_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABonusManager_GetRandomBonus_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABonusManager_GetRandomBonus_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABonusManager_GetRandomBonus_Statics::BonusManager_eventGetRandomBonus_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABonusManager_GetRandomBonus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABonusManager_GetRandomBonus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABonusManager);
	UClass* Z_Construct_UClass_ABonusManager_NoRegister()
	{
		return ABonusManager::StaticClass();
	}
	struct Z_Construct_UClass_ABonusManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AllBonuses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllBonuses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllBonuses;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AvailableBonuses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvailableBonuses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailableBonuses;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABonusManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_ProgGameplayProto,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABonusManager_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ABonusManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABonusManager_GetRandomBonus, "GetRandomBonus" }, // 2551698323
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABonusManager_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonusManager_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BonusManager.h" },
		{ "ModuleRelativePath", "BonusManager.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABonusManager_Statics::NewProp_AllBonuses_Inner = { "AllBonuses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBonusData_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonusManager_Statics::NewProp_AllBonuses_MetaData[] = {
		{ "ModuleRelativePath", "BonusManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABonusManager_Statics::NewProp_AllBonuses = { "AllBonuses", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABonusManager, AllBonuses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABonusManager_Statics::NewProp_AllBonuses_MetaData), Z_Construct_UClass_ABonusManager_Statics::NewProp_AllBonuses_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABonusManager_Statics::NewProp_AvailableBonuses_Inner = { "AvailableBonuses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBonusData_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABonusManager_Statics::NewProp_AvailableBonuses_MetaData[] = {
		{ "ModuleRelativePath", "BonusManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABonusManager_Statics::NewProp_AvailableBonuses = { "AvailableBonuses", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABonusManager, AvailableBonuses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABonusManager_Statics::NewProp_AvailableBonuses_MetaData), Z_Construct_UClass_ABonusManager_Statics::NewProp_AvailableBonuses_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABonusManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonusManager_Statics::NewProp_AllBonuses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonusManager_Statics::NewProp_AllBonuses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonusManager_Statics::NewProp_AvailableBonuses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonusManager_Statics::NewProp_AvailableBonuses,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABonusManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABonusManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABonusManager_Statics::ClassParams = {
		&ABonusManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABonusManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABonusManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABonusManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ABonusManager_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABonusManager_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABonusManager()
	{
		if (!Z_Registration_Info_UClass_ABonusManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABonusManager.OuterSingleton, Z_Construct_UClass_ABonusManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABonusManager.OuterSingleton;
	}
	template<> PROGGAMEPLAYPROTO_API UClass* StaticClass<ABonusManager>()
	{
		return ABonusManager::StaticClass();
	}
	ABonusManager::ABonusManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABonusManager);
	ABonusManager::~ABonusManager() {}
	struct Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_BonusManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_BonusManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABonusManager, ABonusManager::StaticClass, TEXT("ABonusManager"), &Z_Registration_Info_UClass_ABonusManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABonusManager), 2723067139U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_BonusManager_h_3620938612(TEXT("/Script/ProgGameplayProto"),
		Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_BonusManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_BonusManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
