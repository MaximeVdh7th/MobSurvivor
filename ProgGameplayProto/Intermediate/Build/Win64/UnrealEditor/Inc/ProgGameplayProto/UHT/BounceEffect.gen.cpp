// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProgGameplayProto/Effects/BounceEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBounceEffect() {}
// Cross Module References
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_UBounceEffect();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_UBounceEffect_NoRegister();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_UProjectileHitEffect();
	UPackage* Z_Construct_UPackage__Script_ProgGameplayProto();
// End Cross Module References
	void UBounceEffect::StaticRegisterNativesUBounceEffect()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBounceEffect);
	UClass* Z_Construct_UClass_UBounceEffect_NoRegister()
	{
		return UBounceEffect::StaticClass();
	}
	struct Z_Construct_UClass_UBounceEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBounceEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UProjectileHitEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_ProgGameplayProto,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBounceEffect_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBounceEffect_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "Effects/BounceEffect.h" },
		{ "ModuleRelativePath", "Effects/BounceEffect.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBounceEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBounceEffect>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBounceEffect_Statics::ClassParams = {
		&UBounceEffect::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBounceEffect_Statics::Class_MetaDataParams), Z_Construct_UClass_UBounceEffect_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UBounceEffect()
	{
		if (!Z_Registration_Info_UClass_UBounceEffect.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBounceEffect.OuterSingleton, Z_Construct_UClass_UBounceEffect_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBounceEffect.OuterSingleton;
	}
	template<> PROGGAMEPLAYPROTO_API UClass* StaticClass<UBounceEffect>()
	{
		return UBounceEffect::StaticClass();
	}
	UBounceEffect::UBounceEffect(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBounceEffect);
	UBounceEffect::~UBounceEffect() {}
	struct Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Effects_BounceEffect_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Effects_BounceEffect_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBounceEffect, UBounceEffect::StaticClass, TEXT("UBounceEffect"), &Z_Registration_Info_UClass_UBounceEffect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBounceEffect), 2130677097U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Effects_BounceEffect_h_1001958632(TEXT("/Script/ProgGameplayProto"),
		Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Effects_BounceEffect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Effects_BounceEffect_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
