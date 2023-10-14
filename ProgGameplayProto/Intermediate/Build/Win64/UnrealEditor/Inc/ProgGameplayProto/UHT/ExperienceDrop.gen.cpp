// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProgGameplayProto/Drops/ExperienceDrop.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExperienceDrop() {}
// Cross Module References
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_ADrop();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_AExperienceDrop();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_AExperienceDrop_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProgGameplayProto();
// End Cross Module References
	void AExperienceDrop::StaticRegisterNativesAExperienceDrop()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AExperienceDrop);
	UClass* Z_Construct_UClass_AExperienceDrop_NoRegister()
	{
		return AExperienceDrop::StaticClass();
	}
	struct Z_Construct_UClass_AExperienceDrop_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExperienceAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExperienceAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AExperienceDrop_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADrop,
		(UObject* (*)())Z_Construct_UPackage__Script_ProgGameplayProto,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AExperienceDrop_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExperienceDrop_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "Drops/ExperienceDrop.h" },
		{ "ModuleRelativePath", "Drops/ExperienceDrop.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExperienceDrop_Statics::NewProp_ExperienceAmount_MetaData[] = {
		{ "Category", "ExperienceDrop" },
		{ "ModuleRelativePath", "Drops/ExperienceDrop.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AExperienceDrop_Statics::NewProp_ExperienceAmount = { "ExperienceAmount", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AExperienceDrop, ExperienceAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AExperienceDrop_Statics::NewProp_ExperienceAmount_MetaData), Z_Construct_UClass_AExperienceDrop_Statics::NewProp_ExperienceAmount_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AExperienceDrop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExperienceDrop_Statics::NewProp_ExperienceAmount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AExperienceDrop_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExperienceDrop>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AExperienceDrop_Statics::ClassParams = {
		&AExperienceDrop::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AExperienceDrop_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AExperienceDrop_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AExperienceDrop_Statics::Class_MetaDataParams), Z_Construct_UClass_AExperienceDrop_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AExperienceDrop_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AExperienceDrop()
	{
		if (!Z_Registration_Info_UClass_AExperienceDrop.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AExperienceDrop.OuterSingleton, Z_Construct_UClass_AExperienceDrop_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AExperienceDrop.OuterSingleton;
	}
	template<> PROGGAMEPLAYPROTO_API UClass* StaticClass<AExperienceDrop>()
	{
		return AExperienceDrop::StaticClass();
	}
	AExperienceDrop::AExperienceDrop() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExperienceDrop);
	AExperienceDrop::~AExperienceDrop() {}
	struct Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Drops_ExperienceDrop_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Drops_ExperienceDrop_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AExperienceDrop, AExperienceDrop::StaticClass, TEXT("AExperienceDrop"), &Z_Registration_Info_UClass_AExperienceDrop, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AExperienceDrop), 3158726597U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Drops_ExperienceDrop_h_1912423911(TEXT("/Script/ProgGameplayProto"),
		Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Drops_ExperienceDrop_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Drops_ExperienceDrop_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
