// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProgGameplayProto/Weapons/WeaponProjectile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponProjectile() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_AWeaponProjectile();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_AWeaponProjectile_NoRegister();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_UProjectileEffect_NoRegister();
	PROGGAMEPLAYPROTO_API UFunction* Z_Construct_UDelegateFunction_ProgGameplayProto_ProjectileDestroyDelegate__DelegateSignature();
	PROGGAMEPLAYPROTO_API UFunction* Z_Construct_UDelegateFunction_ProgGameplayProto_ProjectileHitDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ProgGameplayProto();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ProgGameplayProto_ProjectileHitDelegate__DelegateSignature_Statics
	{
		struct _Script_ProgGameplayProto_eventProjectileHitDelegate_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProgGameplayProto_ProjectileHitDelegate__DelegateSignature_Statics::NewProp_Projectile = { "Projectile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProgGameplayProto_eventProjectileHitDelegate_Parms, Projectile), Z_Construct_UClass_AWeaponProjectile_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ProgGameplayProto_ProjectileHitDelegate__DelegateSignature_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProgGameplayProto_eventProjectileHitDelegate_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ProgGameplayProto_ProjectileHitDelegate__DelegateSignature_Statics::NewProp_OriginLocation = { "OriginLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProgGameplayProto_eventProjectileHitDelegate_Parms, OriginLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProgGameplayProto_ProjectileHitDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProgGameplayProto_ProjectileHitDelegate__DelegateSignature_Statics::NewProp_Projectile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProgGameplayProto_ProjectileHitDelegate__DelegateSignature_Statics::NewProp_HitLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProgGameplayProto_ProjectileHitDelegate__DelegateSignature_Statics::NewProp_OriginLocation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ProgGameplayProto_ProjectileHitDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/WeaponProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProgGameplayProto_ProjectileHitDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProgGameplayProto, nullptr, "ProjectileHitDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProgGameplayProto_ProjectileHitDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProgGameplayProto_ProjectileHitDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProgGameplayProto_ProjectileHitDelegate__DelegateSignature_Statics::_Script_ProgGameplayProto_eventProjectileHitDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProgGameplayProto_ProjectileHitDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProgGameplayProto_ProjectileHitDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProgGameplayProto_ProjectileHitDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_ProgGameplayProto_ProjectileHitDelegate__DelegateSignature_Statics::_Script_ProgGameplayProto_eventProjectileHitDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_ProgGameplayProto_ProjectileHitDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProgGameplayProto_ProjectileHitDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FProjectileHitDelegate_DelegateWrapper(const FMulticastScriptDelegate& ProjectileHitDelegate, AWeaponProjectile* Projectile, FVector HitLocation, FVector OriginLocation)
{
	struct _Script_ProgGameplayProto_eventProjectileHitDelegate_Parms
	{
		AWeaponProjectile* Projectile;
		FVector HitLocation;
		FVector OriginLocation;
	};
	_Script_ProgGameplayProto_eventProjectileHitDelegate_Parms Parms;
	Parms.Projectile=Projectile;
	Parms.HitLocation=HitLocation;
	Parms.OriginLocation=OriginLocation;
	ProjectileHitDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_ProgGameplayProto_ProjectileDestroyDelegate__DelegateSignature_Statics
	{
		struct _Script_ProgGameplayProto_eventProjectileDestroyDelegate_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ProgGameplayProto_ProjectileDestroyDelegate__DelegateSignature_Statics::NewProp_Projectile = { "Projectile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProgGameplayProto_eventProjectileDestroyDelegate_Parms, Projectile), Z_Construct_UClass_AWeaponProjectile_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProgGameplayProto_ProjectileDestroyDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProgGameplayProto_ProjectileDestroyDelegate__DelegateSignature_Statics::NewProp_Projectile,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ProgGameplayProto_ProjectileDestroyDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Weapons/WeaponProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProgGameplayProto_ProjectileDestroyDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProgGameplayProto, nullptr, "ProjectileDestroyDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProgGameplayProto_ProjectileDestroyDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProgGameplayProto_ProjectileDestroyDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProgGameplayProto_ProjectileDestroyDelegate__DelegateSignature_Statics::_Script_ProgGameplayProto_eventProjectileDestroyDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProgGameplayProto_ProjectileDestroyDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProgGameplayProto_ProjectileDestroyDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProgGameplayProto_ProjectileDestroyDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_ProgGameplayProto_ProjectileDestroyDelegate__DelegateSignature_Statics::_Script_ProgGameplayProto_eventProjectileDestroyDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_ProgGameplayProto_ProjectileDestroyDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProgGameplayProto_ProjectileDestroyDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FProjectileDestroyDelegate_DelegateWrapper(const FMulticastScriptDelegate& ProjectileDestroyDelegate, AWeaponProjectile* Projectile)
{
	struct _Script_ProgGameplayProto_eventProjectileDestroyDelegate_Parms
	{
		AWeaponProjectile* Projectile;
	};
	_Script_ProgGameplayProto_eventProjectileDestroyDelegate_Parms Parms;
	Parms.Projectile=Projectile;
	ProjectileDestroyDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	void AWeaponProjectile::StaticRegisterNativesAWeaponProjectile()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWeaponProjectile);
	UClass* Z_Construct_UClass_AWeaponProjectile_NoRegister()
	{
		return AWeaponProjectile::StaticClass();
	}
	struct Z_Construct_UClass_AWeaponProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Collision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastActorHit_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LastActorHit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnProjectileHit_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnProjectileHit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnProjectileDestroy_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnProjectileDestroy;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Effects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Effects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Effects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeaponProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProgGameplayProto,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponProjectile_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapons/WeaponProjectile.h" },
		{ "ModuleRelativePath", "Weapons/WeaponProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponProjectile_Statics::NewProp_Collision_MetaData[] = {
		{ "Category", "WeaponProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/WeaponProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponProjectile_Statics::NewProp_Collision = { "Collision", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponProjectile, Collision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponProjectile_Statics::NewProp_Collision_MetaData), Z_Construct_UClass_AWeaponProjectile_Statics::NewProp_Collision_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponProjectile_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "WeaponProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Weapons/WeaponProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponProjectile_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponProjectile, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponProjectile_Statics::NewProp_Mesh_MetaData), Z_Construct_UClass_AWeaponProjectile_Statics::NewProp_Mesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponProjectile_Statics::NewProp_LastActorHit_MetaData[] = {
		{ "ModuleRelativePath", "Weapons/WeaponProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponProjectile_Statics::NewProp_LastActorHit = { "LastActorHit", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponProjectile, LastActorHit), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponProjectile_Statics::NewProp_LastActorHit_MetaData), Z_Construct_UClass_AWeaponProjectile_Statics::NewProp_LastActorHit_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponProjectile_Statics::NewProp_OnProjectileHit_MetaData[] = {
		{ "ModuleRelativePath", "Weapons/WeaponProjectile.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AWeaponProjectile_Statics::NewProp_OnProjectileHit = { "OnProjectileHit", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponProjectile, OnProjectileHit), Z_Construct_UDelegateFunction_ProgGameplayProto_ProjectileHitDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponProjectile_Statics::NewProp_OnProjectileHit_MetaData), Z_Construct_UClass_AWeaponProjectile_Statics::NewProp_OnProjectileHit_MetaData) }; // 3032538062
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponProjectile_Statics::NewProp_OnProjectileDestroy_MetaData[] = {
		{ "ModuleRelativePath", "Weapons/WeaponProjectile.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AWeaponProjectile_Statics::NewProp_OnProjectileDestroy = { "OnProjectileDestroy", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponProjectile, OnProjectileDestroy), Z_Construct_UDelegateFunction_ProgGameplayProto_ProjectileDestroyDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponProjectile_Statics::NewProp_OnProjectileDestroy_MetaData), Z_Construct_UClass_AWeaponProjectile_Statics::NewProp_OnProjectileDestroy_MetaData) }; // 592780073
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponProjectile_Statics::NewProp_Effects_Inner = { "Effects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UProjectileEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponProjectile_Statics::NewProp_Effects_MetaData[] = {
		{ "ModuleRelativePath", "Weapons/WeaponProjectile.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWeaponProjectile_Statics::NewProp_Effects = { "Effects", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeaponProjectile, Effects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponProjectile_Statics::NewProp_Effects_MetaData), Z_Construct_UClass_AWeaponProjectile_Statics::NewProp_Effects_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeaponProjectile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponProjectile_Statics::NewProp_Collision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponProjectile_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponProjectile_Statics::NewProp_LastActorHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponProjectile_Statics::NewProp_OnProjectileHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponProjectile_Statics::NewProp_OnProjectileDestroy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponProjectile_Statics::NewProp_Effects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponProjectile_Statics::NewProp_Effects,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeaponProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponProjectile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeaponProjectile_Statics::ClassParams = {
		&AWeaponProjectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWeaponProjectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponProjectile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_AWeaponProjectile_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponProjectile_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AWeaponProjectile()
	{
		if (!Z_Registration_Info_UClass_AWeaponProjectile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeaponProjectile.OuterSingleton, Z_Construct_UClass_AWeaponProjectile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWeaponProjectile.OuterSingleton;
	}
	template<> PROGGAMEPLAYPROTO_API UClass* StaticClass<AWeaponProjectile>()
	{
		return AWeaponProjectile::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponProjectile);
	AWeaponProjectile::~AWeaponProjectile() {}
	struct Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Weapons_WeaponProjectile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Weapons_WeaponProjectile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWeaponProjectile, AWeaponProjectile::StaticClass, TEXT("AWeaponProjectile"), &Z_Registration_Info_UClass_AWeaponProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeaponProjectile), 1130735794U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Weapons_WeaponProjectile_h_3762684191(TEXT("/Script/ProgGameplayProto"),
		Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Weapons_WeaponProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Weapons_WeaponProjectile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
