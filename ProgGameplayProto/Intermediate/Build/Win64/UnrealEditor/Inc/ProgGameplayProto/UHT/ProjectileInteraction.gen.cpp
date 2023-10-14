// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProgGameplayProto/ProjectileInteraction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectileInteraction() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_AWeaponProjectile_NoRegister();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_UProjectileInteraction();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_UProjectileInteraction_NoRegister();
	PROGGAMEPLAYPROTO_API UFunction* Z_Construct_UDelegateFunction_ProgGameplayProto_HitDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ProgGameplayProto();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ProgGameplayProto_HitDelegate__DelegateSignature_Statics
	{
		struct _Script_ProgGameplayProto_eventHitDelegate_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProgGameplayProto_HitDelegate__DelegateSignature_Statics::NewProp_Projectile = { "Projectile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProgGameplayProto_eventHitDelegate_Parms, Projectile), Z_Construct_UClass_AWeaponProjectile_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProgGameplayProto_HitDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProgGameplayProto_HitDelegate__DelegateSignature_Statics::NewProp_Projectile,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ProgGameplayProto_HitDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ProjectileInteraction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProgGameplayProto_HitDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProgGameplayProto, nullptr, "HitDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProgGameplayProto_HitDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProgGameplayProto_HitDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProgGameplayProto_HitDelegate__DelegateSignature_Statics::_Script_ProgGameplayProto_eventHitDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProgGameplayProto_HitDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProgGameplayProto_HitDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProgGameplayProto_HitDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_ProgGameplayProto_HitDelegate__DelegateSignature_Statics::_Script_ProgGameplayProto_eventHitDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_ProgGameplayProto_HitDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProgGameplayProto_HitDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FHitDelegate_DelegateWrapper(const FMulticastScriptDelegate& HitDelegate, AWeaponProjectile* Projectile)
{
	struct _Script_ProgGameplayProto_eventHitDelegate_Parms
	{
		AWeaponProjectile* Projectile;
	};
	_Script_ProgGameplayProto_eventHitDelegate_Parms Parms;
	Parms.Projectile=Projectile;
	HitDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UProjectileInteraction::StaticRegisterNativesUProjectileInteraction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProjectileInteraction);
	UClass* Z_Construct_UClass_UProjectileInteraction_NoRegister()
	{
		return UProjectileInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UProjectileInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnHitByProjectile_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHitByProjectile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProjectileInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ProgGameplayProto,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileInteraction_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileInteraction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ProjectileInteraction.h" },
		{ "ModuleRelativePath", "ProjectileInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectileInteraction_Statics::NewProp_OnHitByProjectile_MetaData[] = {
		{ "ModuleRelativePath", "ProjectileInteraction.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UProjectileInteraction_Statics::NewProp_OnHitByProjectile = { "OnHitByProjectile", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectileInteraction, OnHitByProjectile), Z_Construct_UDelegateFunction_ProgGameplayProto_HitDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileInteraction_Statics::NewProp_OnHitByProjectile_MetaData), Z_Construct_UClass_UProjectileInteraction_Statics::NewProp_OnHitByProjectile_MetaData) }; // 2774202116
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProjectileInteraction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectileInteraction_Statics::NewProp_OnHitByProjectile,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProjectileInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProjectileInteraction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UProjectileInteraction_Statics::ClassParams = {
		&UProjectileInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UProjectileInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileInteraction_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileInteraction_Statics::Class_MetaDataParams), Z_Construct_UClass_UProjectileInteraction_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectileInteraction_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UProjectileInteraction()
	{
		if (!Z_Registration_Info_UClass_UProjectileInteraction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProjectileInteraction.OuterSingleton, Z_Construct_UClass_UProjectileInteraction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UProjectileInteraction.OuterSingleton;
	}
	template<> PROGGAMEPLAYPROTO_API UClass* StaticClass<UProjectileInteraction>()
	{
		return UProjectileInteraction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProjectileInteraction);
	UProjectileInteraction::~UProjectileInteraction() {}
	struct Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_ProjectileInteraction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_ProjectileInteraction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UProjectileInteraction, UProjectileInteraction::StaticClass, TEXT("UProjectileInteraction"), &Z_Registration_Info_UClass_UProjectileInteraction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProjectileInteraction), 1509153514U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_ProjectileInteraction_h_957279560(TEXT("/Script/ProgGameplayProto"),
		Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_ProjectileInteraction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_ProjectileInteraction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
