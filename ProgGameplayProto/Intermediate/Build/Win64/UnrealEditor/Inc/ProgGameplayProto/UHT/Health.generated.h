// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Health.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROGGAMEPLAYPROTO_Health_generated_h
#error "Health.generated.h already included, missing '#pragma once' in Health.h"
#endif
#define PROGGAMEPLAYPROTO_Health_generated_h

#define FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Health_h_9_DELEGATE \
PROGGAMEPLAYPROTO_API void FOnHealthDie_DelegateWrapper(const FMulticastScriptDelegate& OnHealthDie);


#define FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Health_h_10_DELEGATE \
PROGGAMEPLAYPROTO_API void FOnHealthChanged_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChanged, float NewHealthValue);


#define FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Health_h_18_SPARSE_DATA
#define FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Health_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Health_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Health_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentHealthPercentage); \
	DECLARE_FUNCTION(execGetCurrentHealth);


#define FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Health_h_18_ACCESSORS
#define FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Health_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHealth(); \
	friend struct Z_Construct_UClass_UHealth_Statics; \
public: \
	DECLARE_CLASS(UHealth, UProjectileInteraction, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProgGameplayProto"), NO_API) \
	DECLARE_SERIALIZER(UHealth)


#define FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Health_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHealth(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealth(UHealth&&); \
	NO_API UHealth(const UHealth&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealth); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealth); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHealth) \
	NO_API virtual ~UHealth();


#define FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Health_h_15_PROLOG
#define FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Health_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Health_h_18_SPARSE_DATA \
	FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Health_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Health_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Health_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Health_h_18_ACCESSORS \
	FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Health_h_18_INCLASS_NO_PURE_DECLS \
	FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Health_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROGGAMEPLAYPROTO_API UClass* StaticClass<class UHealth>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Health_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
