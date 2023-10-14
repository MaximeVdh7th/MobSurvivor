// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProgGameplayProto/Effects/ProjectileEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectileEffect() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_AWeaponProjectile_NoRegister();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_UProjectileEffect();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_UProjectileEffect_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProgGameplayProto();
// End Cross Module References
	DEFINE_FUNCTION(UProjectileEffect::execOnProjectileDestroy)
	{
		P_GET_OBJECT(AWeaponProjectile,Z_Param_Projectile);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnProjectileDestroy(Z_Param_Projectile);
		P_NATIVE_END;
	}
	void UProjectileEffect::StaticRegisterNativesUProjectileEffect()
	{
		UClass* Class = UProjectileEffect::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnProjectileDestroy", &UProjectileEffect::execOnProjectileDestroy },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UProjectileEffect_OnProjectileDestroy_Statics
	{
		struct ProjectileEffect_eventOnProjectileDestroy_Parms
		{
			AWeaponProjectile* Projectile;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Projectile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProjectileEffect_OnProjectileDestroy_Statics::NewProp_Projectile = { "Projectile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileEffect_eventOnProjectileDestroy_Parms, Projectile), Z_Construct_UClass_AWeaponProjectile_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectileEffect_OnProjectileDestroy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectileEffect_OnProjectileDestroy_Statics::NewProp_Projectile,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectileEffect_OnProjectileDestroy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Effects/ProjectileEffect.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectileEffect_OnProjectileDestroy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectileEffect, nullptr, "OnProjectileDestroy", nullptr, nullptr, Z_Construct_UFunction_UProjectileEffect_OnProjectileDestroy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileEffect_OnProjectileDestroy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectileEffect_OnProjectileDestroy_Statics::ProjectileEffect_eventOnProjectileDestroy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileEffect_OnProjectileDestroy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectileEffect_OnProjectileDestroy_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileEffect_OnProjectileDestroy_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UProjectileEffect_OnProjectileDestroy_Statics::ProjectileEffect_eventOnProjectileDestroy_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UProjectileEffect_OnProjectileDestroy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectileEffect_OnProjectileDestroy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProjectileEffect);
	UClass* Z_Construct_UClass_UProjectileEffect_NoRegister()
	{
		return UProjectileEffect::StaticClass();
	}
	struct Z_Construct_UClass_UProjectileEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentProjectile_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentProjectile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProjectileEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ProgGameplayProto,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileEffect_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UProjectileEffect_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UProjectileEffect_OnProjectileDestroy, "OnProjectileDestroy" }, // 279540776
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileEffect_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileEffect_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "Effects/ProjectileEffect.h" },
		{ "ModuleRelativePath", "Effects/ProjectileEffect.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileEffect_Statics::NewProp_CurrentProjectile_MetaData[] = {
		{ "ModuleRelativePath", "Effects/ProjectileEffect.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UProjectileEffect_Statics::NewProp_CurrentProjectile = { "CurrentProjectile", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectileEffect, CurrentProjectile), Z_Construct_UClass_AWeaponProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileEffect_Statics::NewProp_CurrentProjectile_MetaData), Z_Construct_UClass_UProjectileEffect_Statics::NewProp_CurrentProjectile_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProjectileEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileEffect_Statics::NewProp_CurrentProjectile,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProjectileEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProjectileEffect>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UProjectileEffect_Statics::ClassParams = {
		&UProjectileEffect::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UProjectileEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileEffect_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileEffect_Statics::Class_MetaDataParams), Z_Construct_UClass_UProjectileEffect_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileEffect_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UProjectileEffect()
	{
		if (!Z_Registration_Info_UClass_UProjectileEffect.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProjectileEffect.OuterSingleton, Z_Construct_UClass_UProjectileEffect_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UProjectileEffect.OuterSingleton;
	}
	template<> PROGGAMEPLAYPROTO_API UClass* StaticClass<UProjectileEffect>()
	{
		return UProjectileEffect::StaticClass();
	}
	UProjectileEffect::UProjectileEffect(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProjectileEffect);
	UProjectileEffect::~UProjectileEffect() {}
	struct Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Effects_ProjectileEffect_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Effects_ProjectileEffect_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UProjectileEffect, UProjectileEffect::StaticClass, TEXT("UProjectileEffect"), &Z_Registration_Info_UClass_UProjectileEffect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProjectileEffect), 921238467U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Effects_ProjectileEffect_h_3376277790(TEXT("/Script/ProgGameplayProto"),
		Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Effects_ProjectileEffect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Effects_ProjectileEffect_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
