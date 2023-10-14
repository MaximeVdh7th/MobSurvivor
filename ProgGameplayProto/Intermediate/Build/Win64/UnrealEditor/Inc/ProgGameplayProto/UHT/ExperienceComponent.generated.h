// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ExperienceComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROGGAMEPLAYPROTO_ExperienceComponent_generated_h
#error "ExperienceComponent.generated.h already included, missing '#pragma once' in ExperienceComponent.h"
#endif
#define PROGGAMEPLAYPROTO_ExperienceComponent_generated_h

#define FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_ExperienceComponent_h_9_DELEGATE \
PROGGAMEPLAYPROTO_API void FOnExperienceChanged_DelegateWrapper(const FMulticastScriptDelegate& OnExperienceChanged, float NewExperienceValue);


#define FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_ExperienceComponent_h_10_DELEGATE \
PROGGAMEPLAYPROTO_API void FOnLevelUp_DelegateWrapper(const FMulticastScriptDelegate& OnLevelUp, int32 NewLevel);


#define FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_ExperienceComponent_h_15_SPARSE_DATA
#define FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_ExperienceComponent_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_ExperienceComponent_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_ExperienceComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentExperiencePercentage);


#define FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_ExperienceComponent_h_15_ACCESSORS
#define FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_ExperienceComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUExperienceComponent(); \
	friend struct Z_Construct_UClass_UExperienceComponent_Statics; \
public: \
	DECLARE_CLASS(UExperienceComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProgGameplayProto"), NO_API) \
	DECLARE_SERIALIZER(UExperienceComponent)


#define FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_ExperienceComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UExperienceComponent(UExperienceComponent&&); \
	NO_API UExperienceComponent(const UExperienceComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExperienceComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExperienceComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UExperienceComponent) \
	NO_API virtual ~UExperienceComponent();


#define FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_ExperienceComponent_h_12_PROLOG
#define FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_ExperienceComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_ExperienceComponent_h_15_SPARSE_DATA \
	FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_ExperienceComponent_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_ExperienceComponent_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_ExperienceComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_ExperienceComponent_h_15_ACCESSORS \
	FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_ExperienceComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_ExperienceComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROGGAMEPLAYPROTO_API UClass* StaticClass<class UExperienceComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_ExperienceComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
