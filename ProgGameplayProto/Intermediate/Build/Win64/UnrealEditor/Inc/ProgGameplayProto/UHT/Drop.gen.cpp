// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProgGameplayProto/Drops/Drop.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDrop() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_ADrop();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_ADrop_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProgGameplayProto();
// End Cross Module References
	void ADrop::StaticRegisterNativesADrop()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADrop);
	UClass* Z_Construct_UClass_ADrop_NoRegister()
	{
		return ADrop::StaticClass();
	}
	struct Z_Construct_UClass_ADrop_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollectionSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CollectionSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollectingTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollectingTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADrop_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProgGameplayProto,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADrop_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrop_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Drops/Drop.h" },
		{ "ModuleRelativePath", "Drops/Drop.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrop_Statics::NewProp_CollectionSpeed_MetaData[] = {
		{ "Category", "Drop" },
		{ "ModuleRelativePath", "Drops/Drop.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADrop_Statics::NewProp_CollectionSpeed = { "CollectionSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrop, CollectionSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrop_Statics::NewProp_CollectionSpeed_MetaData), Z_Construct_UClass_ADrop_Statics::NewProp_CollectionSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADrop_Statics::NewProp_CollectingTarget_MetaData[] = {
		{ "ModuleRelativePath", "Drops/Drop.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADrop_Statics::NewProp_CollectingTarget = { "CollectingTarget", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADrop, CollectingTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrop_Statics::NewProp_CollectingTarget_MetaData), Z_Construct_UClass_ADrop_Statics::NewProp_CollectingTarget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADrop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrop_Statics::NewProp_CollectionSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADrop_Statics::NewProp_CollectingTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADrop_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADrop>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADrop_Statics::ClassParams = {
		&ADrop::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADrop_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADrop_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADrop_Statics::Class_MetaDataParams), Z_Construct_UClass_ADrop_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADrop_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ADrop()
	{
		if (!Z_Registration_Info_UClass_ADrop.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADrop.OuterSingleton, Z_Construct_UClass_ADrop_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADrop.OuterSingleton;
	}
	template<> PROGGAMEPLAYPROTO_API UClass* StaticClass<ADrop>()
	{
		return ADrop::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADrop);
	ADrop::~ADrop() {}
	struct Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Drops_Drop_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Drops_Drop_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADrop, ADrop::StaticClass, TEXT("ADrop"), &Z_Registration_Info_UClass_ADrop, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADrop), 4006257977U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Drops_Drop_h_1768268605(TEXT("/Script/ProgGameplayProto"),
		Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Drops_Drop_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Drops_Drop_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
