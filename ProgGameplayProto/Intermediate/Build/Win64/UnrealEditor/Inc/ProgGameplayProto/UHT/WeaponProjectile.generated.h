// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Weapons/WeaponProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWeaponProjectile;
#ifdef PROGGAMEPLAYPROTO_WeaponProjectile_generated_h
#error "WeaponProjectile.generated.h already included, missing '#pragma once' in WeaponProjectile.h"
#endif
#define PROGGAMEPLAYPROTO_WeaponProjectile_generated_h

#define FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Weapons_WeaponProjectile_h_13_DELEGATE \
PROGGAMEPLAYPROTO_API void FProjectileHitDelegate_DelegateWrapper(const FMulticastScriptDelegate& ProjectileHitDelegate, AWeaponProjectile* Projectile, FVector HitLocation, FVector OriginLocation);


#define FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Weapons_WeaponProjectile_h_14_DELEGATE \
PROGGAMEPLAYPROTO_API void FProjectileDestroyDelegate_DelegateWrapper(const FMulticastScriptDelegate& ProjectileDestroyDelegate, AWeaponProjectile* Projectile);


#define FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Weapons_WeaponProjectile_h_19_SPARSE_DATA
#define FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Weapons_WeaponProjectile_h_19_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Weapons_WeaponProjectile_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Weapons_WeaponProjectile_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Weapons_WeaponProjectile_h_19_ACCESSORS
#define FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Weapons_WeaponProjectile_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeaponProjectile(); \
	friend struct Z_Construct_UClass_AWeaponProjectile_Statics; \
public: \
	DECLARE_CLASS(AWeaponProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProgGameplayProto"), NO_API) \
	DECLARE_SERIALIZER(AWeaponProjectile)


#define FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Weapons_WeaponProjectile_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponProjectile(AWeaponProjectile&&); \
	NO_API AWeaponProjectile(const AWeaponProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeaponProjectile) \
	NO_API virtual ~AWeaponProjectile();


#define FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Weapons_WeaponProjectile_h_16_PROLOG
#define FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Weapons_WeaponProjectile_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Weapons_WeaponProjectile_h_19_SPARSE_DATA \
	FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Weapons_WeaponProjectile_h_19_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Weapons_WeaponProjectile_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Weapons_WeaponProjectile_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Weapons_WeaponProjectile_h_19_ACCESSORS \
	FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Weapons_WeaponProjectile_h_19_INCLASS_NO_PURE_DECLS \
	FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Weapons_WeaponProjectile_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROGGAMEPLAYPROTO_API UClass* StaticClass<class AWeaponProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Weapons_WeaponProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
