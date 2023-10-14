// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BonusManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBonusData;
#ifdef PROGGAMEPLAYPROTO_BonusManager_generated_h
#error "BonusManager.generated.h already included, missing '#pragma once' in BonusManager.h"
#endif
#define PROGGAMEPLAYPROTO_BonusManager_generated_h

#define FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_BonusManager_h_17_SPARSE_DATA
#define FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_BonusManager_h_17_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_BonusManager_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_BonusManager_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRandomBonus);


#define FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_BonusManager_h_17_ACCESSORS
#define FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_BonusManager_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABonusManager(); \
	friend struct Z_Construct_UClass_ABonusManager_Statics; \
public: \
	DECLARE_CLASS(ABonusManager, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProgGameplayProto"), NO_API) \
	DECLARE_SERIALIZER(ABonusManager)


#define FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_BonusManager_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABonusManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABonusManager(ABonusManager&&); \
	NO_API ABonusManager(const ABonusManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABonusManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABonusManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABonusManager) \
	NO_API virtual ~ABonusManager();


#define FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_BonusManager_h_14_PROLOG
#define FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_BonusManager_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_BonusManager_h_17_SPARSE_DATA \
	FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_BonusManager_h_17_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_BonusManager_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_BonusManager_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_BonusManager_h_17_ACCESSORS \
	FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_BonusManager_h_17_INCLASS_NO_PURE_DECLS \
	FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_BonusManager_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROGGAMEPLAYPROTO_API UClass* StaticClass<class ABonusManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_BonusManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
