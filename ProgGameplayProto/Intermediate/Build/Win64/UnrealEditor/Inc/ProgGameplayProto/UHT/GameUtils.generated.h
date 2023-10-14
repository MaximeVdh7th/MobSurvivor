// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameUtils.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AProgGameplayProtoCharacter;
#ifdef PROGGAMEPLAYPROTO_GameUtils_generated_h
#error "GameUtils.generated.h already included, missing '#pragma once' in GameUtils.h"
#endif
#define PROGGAMEPLAYPROTO_GameUtils_generated_h

#define FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_GameUtils_h_19_SPARSE_DATA
#define FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_GameUtils_h_19_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_GameUtils_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_GameUtils_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMainCharacter);


#define FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_GameUtils_h_19_ACCESSORS
#define FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_GameUtils_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameUtils(); \
	friend struct Z_Construct_UClass_UGameUtils_Statics; \
public: \
	DECLARE_CLASS(UGameUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProgGameplayProto"), NO_API) \
	DECLARE_SERIALIZER(UGameUtils)


#define FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_GameUtils_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameUtils(UGameUtils&&); \
	NO_API UGameUtils(const UGameUtils&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameUtils); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameUtils) \
	NO_API virtual ~UGameUtils();


#define FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_GameUtils_h_16_PROLOG
#define FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_GameUtils_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_GameUtils_h_19_SPARSE_DATA \
	FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_GameUtils_h_19_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_GameUtils_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_GameUtils_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_GameUtils_h_19_ACCESSORS \
	FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_GameUtils_h_19_INCLASS_NO_PURE_DECLS \
	FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_GameUtils_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROGGAMEPLAYPROTO_API UClass* StaticClass<class UGameUtils>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_GameUtils_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
