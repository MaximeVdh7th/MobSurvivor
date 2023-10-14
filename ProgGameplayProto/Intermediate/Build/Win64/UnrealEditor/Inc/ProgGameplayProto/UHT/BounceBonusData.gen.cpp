// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProgGameplayProto/Bonuses/BounceBonusData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBounceBonusData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_UBonusData();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_UBounceBonusData();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_UBounceBonusData_NoRegister();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_UBounceEffect_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProgGameplayProto();
// End Cross Module References
	void UBounceBonusData::StaticRegisterNativesUBounceBonusData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBounceBonusData);
	UClass* Z_Construct_UClass_UBounceBonusData_NoRegister()
	{
		return UBounceBonusData::StaticClass();
	}
	struct Z_Construct_UClass_UBounceBonusData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BounceEffect_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BounceEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfBounces_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfBounces;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBounceBonusData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBonusData,
		(UObject* (*)())Z_Construct_UPackage__Script_ProgGameplayProto,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBounceBonusData_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBounceBonusData_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "Bonuses/BounceBonusData.h" },
		{ "ModuleRelativePath", "Bonuses/BounceBonusData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBounceBonusData_Statics::NewProp_BounceEffect_MetaData[] = {
		{ "Category", "BounceBonusData" },
		{ "ModuleRelativePath", "Bonuses/BounceBonusData.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBounceBonusData_Statics::NewProp_BounceEffect = { "BounceEffect", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBounceBonusData, BounceEffect), Z_Construct_UClass_UClass, Z_Construct_UClass_UBounceEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBounceBonusData_Statics::NewProp_BounceEffect_MetaData), Z_Construct_UClass_UBounceBonusData_Statics::NewProp_BounceEffect_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBounceBonusData_Statics::NewProp_NumberOfBounces_MetaData[] = {
		{ "Category", "BounceBonusData" },
		{ "ModuleRelativePath", "Bonuses/BounceBonusData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBounceBonusData_Statics::NewProp_NumberOfBounces = { "NumberOfBounces", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBounceBonusData, NumberOfBounces), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBounceBonusData_Statics::NewProp_NumberOfBounces_MetaData), Z_Construct_UClass_UBounceBonusData_Statics::NewProp_NumberOfBounces_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBounceBonusData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBounceBonusData_Statics::NewProp_BounceEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBounceBonusData_Statics::NewProp_NumberOfBounces,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBounceBonusData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBounceBonusData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBounceBonusData_Statics::ClassParams = {
		&UBounceBonusData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBounceBonusData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBounceBonusData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBounceBonusData_Statics::Class_MetaDataParams), Z_Construct_UClass_UBounceBonusData_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBounceBonusData_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UBounceBonusData()
	{
		if (!Z_Registration_Info_UClass_UBounceBonusData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBounceBonusData.OuterSingleton, Z_Construct_UClass_UBounceBonusData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBounceBonusData.OuterSingleton;
	}
	template<> PROGGAMEPLAYPROTO_API UClass* StaticClass<UBounceBonusData>()
	{
		return UBounceBonusData::StaticClass();
	}
	UBounceBonusData::UBounceBonusData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBounceBonusData);
	UBounceBonusData::~UBounceBonusData() {}
	struct Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Bonuses_BounceBonusData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Bonuses_BounceBonusData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBounceBonusData, UBounceBonusData::StaticClass, TEXT("UBounceBonusData"), &Z_Registration_Info_UClass_UBounceBonusData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBounceBonusData), 2490191830U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Bonuses_BounceBonusData_h_728782143(TEXT("/Script/ProgGameplayProto"),
		Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Bonuses_BounceBonusData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Bonuses_BounceBonusData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
