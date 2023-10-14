// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProgGameplayProto/Effects/ProjectileHitEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectileHitEffect() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_AWeaponProjectile_NoRegister();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_UProjectileEffect();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_UProjectileHitEffect();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_UProjectileHitEffect_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProgGameplayProto();
// End Cross Module References
	DEFINE_FUNCTION(UProjectileHitEffect::execOnProjectileHit)
	{
		P_GET_OBJECT(AWeaponProjectile,Z_Param_Projectile);
		P_GET_STRUCT(FVector,Z_Param_HitLocation);
		P_GET_STRUCT(FVector,Z_Param_OriginLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnProjectileHit(Z_Param_Projectile,Z_Param_HitLocation,Z_Param_OriginLocation);
		P_NATIVE_END;
	}
	void UProjectileHitEffect::StaticRegisterNativesUProjectileHitEffect()
	{
		UClass* Class = UProjectileHitEffect::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnProjectileHit", &UProjectileHitEffect::execOnProjectileHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UProjectileHitEffect_OnProjectileHit_Statics
	{
		struct ProjectileHitEffect_eventOnProjectileHit_Parms
		{
			AWeaponProjectile* Projectile;
			FVector HitLocation;
			FVector OriginLocation;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Projectile;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OriginLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProjectileHitEffect_OnProjectileHit_Statics::NewProp_Projectile = { "Projectile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileHitEffect_eventOnProjectileHit_Parms, Projectile), Z_Construct_UClass_AWeaponProjectile_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProjectileHitEffect_OnProjectileHit_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileHitEffect_eventOnProjectileHit_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProjectileHitEffect_OnProjectileHit_Statics::NewProp_OriginLocation = { "OriginLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileHitEffect_eventOnProjectileHit_Parms, OriginLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectileHitEffect_OnProjectileHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectileHitEffect_OnProjectileHit_Statics::NewProp_Projectile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectileHitEffect_OnProjectileHit_Statics::NewProp_HitLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectileHitEffect_OnProjectileHit_Statics::NewProp_OriginLocation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectileHitEffect_OnProjectileHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Effects/ProjectileHitEffect.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectileHitEffect_OnProjectileHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectileHitEffect, nullptr, "OnProjectileHit", nullptr, nullptr, Z_Construct_UFunction_UProjectileHitEffect_OnProjectileHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileHitEffect_OnProjectileHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectileHitEffect_OnProjectileHit_Statics::ProjectileHitEffect_eventOnProjectileHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileHitEffect_OnProjectileHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectileHitEffect_OnProjectileHit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectileHitEffect_OnProjectileHit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UProjectileHitEffect_OnProjectileHit_Statics::ProjectileHitEffect_eventOnProjectileHit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UProjectileHitEffect_OnProjectileHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectileHitEffect_OnProjectileHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProjectileHitEffect);
	UClass* Z_Construct_UClass_UProjectileHitEffect_NoRegister()
	{
		return UProjectileHitEffect::StaticClass();
	}
	struct Z_Construct_UClass_UProjectileHitEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProjectileHitEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UProjectileEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_ProgGameplayProto,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileHitEffect_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UProjectileHitEffect_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UProjectileHitEffect_OnProjectileHit, "OnProjectileHit" }, // 1821439290
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileHitEffect_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileHitEffect_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "Effects/ProjectileHitEffect.h" },
		{ "ModuleRelativePath", "Effects/ProjectileHitEffect.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProjectileHitEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProjectileHitEffect>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UProjectileHitEffect_Statics::ClassParams = {
		&UProjectileHitEffect::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileHitEffect_Statics::Class_MetaDataParams), Z_Construct_UClass_UProjectileHitEffect_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UProjectileHitEffect()
	{
		if (!Z_Registration_Info_UClass_UProjectileHitEffect.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProjectileHitEffect.OuterSingleton, Z_Construct_UClass_UProjectileHitEffect_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UProjectileHitEffect.OuterSingleton;
	}
	template<> PROGGAMEPLAYPROTO_API UClass* StaticClass<UProjectileHitEffect>()
	{
		return UProjectileHitEffect::StaticClass();
	}
	UProjectileHitEffect::UProjectileHitEffect(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProjectileHitEffect);
	UProjectileHitEffect::~UProjectileHitEffect() {}
	struct Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Effects_ProjectileHitEffect_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Effects_ProjectileHitEffect_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UProjectileHitEffect, UProjectileHitEffect::StaticClass, TEXT("UProjectileHitEffect"), &Z_Registration_Info_UClass_UProjectileHitEffect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProjectileHitEffect), 3683869423U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Effects_ProjectileHitEffect_h_1511189496(TEXT("/Script/ProgGameplayProto"),
		Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Effects_ProjectileHitEffect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Effects_ProjectileHitEffect_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
