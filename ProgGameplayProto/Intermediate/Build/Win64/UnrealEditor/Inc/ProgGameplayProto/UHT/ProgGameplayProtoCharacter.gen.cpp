// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProgGameplayProto/ProgGameplayProtoCharacter.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProgGameplayProtoCharacter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_AProgGameplayProtoCharacter();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_AProgGameplayProtoCharacter_NoRegister();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_AWeaponProjectile_NoRegister();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_UBonusData_NoRegister();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_UExperienceComponent_NoRegister();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_UHealth_NoRegister();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_UWeaponComponent_NoRegister();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_UWeaponData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProgGameplayProto();
// End Cross Module References
	DEFINE_FUNCTION(AProgGameplayProtoCharacter::execOnDropsCollectorBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDropsCollectorBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void AProgGameplayProtoCharacter::StaticRegisterNativesAProgGameplayProtoCharacter()
	{
		UClass* Class = AProgGameplayProtoCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnDropsCollectorBeginOverlap", &AProgGameplayProtoCharacter::execOnDropsCollectorBeginOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AProgGameplayProtoCharacter_OnDropsCollectorBeginOverlap_Statics
	{
		struct ProgGameplayProtoCharacter_eventOnDropsCollectorBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProgGameplayProtoCharacter_OnDropsCollectorBeginOverlap_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProgGameplayProtoCharacter_OnDropsCollectorBeginOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProgGameplayProtoCharacter_eventOnDropsCollectorBeginOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProgGameplayProtoCharacter_OnDropsCollectorBeginOverlap_Statics::NewProp_OverlappedComp_MetaData), Z_Construct_UFunction_AProgGameplayProtoCharacter_OnDropsCollectorBeginOverlap_Statics::NewProp_OverlappedComp_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProgGameplayProtoCharacter_OnDropsCollectorBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProgGameplayProtoCharacter_eventOnDropsCollectorBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProgGameplayProtoCharacter_OnDropsCollectorBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProgGameplayProtoCharacter_OnDropsCollectorBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProgGameplayProtoCharacter_eventOnDropsCollectorBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProgGameplayProtoCharacter_OnDropsCollectorBeginOverlap_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_AProgGameplayProtoCharacter_OnDropsCollectorBeginOverlap_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AProgGameplayProtoCharacter_OnDropsCollectorBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProgGameplayProtoCharacter_eventOnDropsCollectorBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AProgGameplayProtoCharacter_OnDropsCollectorBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((ProgGameplayProtoCharacter_eventOnDropsCollectorBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AProgGameplayProtoCharacter_OnDropsCollectorBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ProgGameplayProtoCharacter_eventOnDropsCollectorBeginOverlap_Parms), &Z_Construct_UFunction_AProgGameplayProtoCharacter_OnDropsCollectorBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProgGameplayProtoCharacter_OnDropsCollectorBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProgGameplayProtoCharacter_OnDropsCollectorBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProgGameplayProtoCharacter_eventOnDropsCollectorBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProgGameplayProtoCharacter_OnDropsCollectorBeginOverlap_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_AProgGameplayProtoCharacter_OnDropsCollectorBeginOverlap_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProgGameplayProtoCharacter_OnDropsCollectorBeginOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProgGameplayProtoCharacter_OnDropsCollectorBeginOverlap_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProgGameplayProtoCharacter_OnDropsCollectorBeginOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProgGameplayProtoCharacter_OnDropsCollectorBeginOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProgGameplayProtoCharacter_OnDropsCollectorBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProgGameplayProtoCharacter_OnDropsCollectorBeginOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProgGameplayProtoCharacter_OnDropsCollectorBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProgGameplayProtoCharacter_OnDropsCollectorBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ProgGameplayProtoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProgGameplayProtoCharacter_OnDropsCollectorBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProgGameplayProtoCharacter, nullptr, "OnDropsCollectorBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_AProgGameplayProtoCharacter_OnDropsCollectorBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProgGameplayProtoCharacter_OnDropsCollectorBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AProgGameplayProtoCharacter_OnDropsCollectorBeginOverlap_Statics::ProgGameplayProtoCharacter_eventOnDropsCollectorBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProgGameplayProtoCharacter_OnDropsCollectorBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProgGameplayProtoCharacter_OnDropsCollectorBeginOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProgGameplayProtoCharacter_OnDropsCollectorBeginOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AProgGameplayProtoCharacter_OnDropsCollectorBeginOverlap_Statics::ProgGameplayProtoCharacter_eventOnDropsCollectorBeginOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AProgGameplayProtoCharacter_OnDropsCollectorBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProgGameplayProtoCharacter_OnDropsCollectorBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProgGameplayProtoCharacter);
	UClass* Z_Construct_UClass_AProgGameplayProtoCharacter_NoRegister()
	{
		return AProgGameplayProtoCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AProgGameplayProtoCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShootAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShootAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoFireAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AutoFireAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponProjectileToSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponProjectileToSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DropsCollector_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DropsCollector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Experience_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Experience;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWeaponData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultWeaponData;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultBonuses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBonuses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultBonuses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ProgGameplayProto,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AProgGameplayProtoCharacter_OnDropsCollectorBeginOverlap, "OnDropsCollectorBeginOverlap" }, // 3419000989
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ProgGameplayProtoCharacter.h" },
		{ "ModuleRelativePath", "ProgGameplayProtoCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProgGameplayProtoCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProgGameplayProtoCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_CameraBoom_MetaData), Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_CameraBoom_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Follow camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProgGameplayProtoCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Follow camera" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProgGameplayProtoCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_FollowCamera_MetaData), Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_FollowCamera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "ProgGameplayProtoCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProgGameplayProtoCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_DefaultMappingContext_MetaData), Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_DefaultMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "ProgGameplayProtoCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProgGameplayProtoCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_JumpAction_MetaData), Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_JumpAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "ProgGameplayProtoCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProgGameplayProtoCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_MoveAction_MetaData), Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_MoveAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "ProgGameplayProtoCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProgGameplayProtoCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_LookAction_MetaData), Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_LookAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_ShootAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "ProgGameplayProtoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_ShootAction = { "ShootAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProgGameplayProtoCharacter, ShootAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_ShootAction_MetaData), Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_ShootAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_AutoFireAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "ProgGameplayProtoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_AutoFireAction = { "AutoFireAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProgGameplayProtoCharacter, AutoFireAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_AutoFireAction_MetaData), Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_AutoFireAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_WeaponProjectileToSpawn_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "ProgGameplayProtoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_WeaponProjectileToSpawn = { "WeaponProjectileToSpawn", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProgGameplayProtoCharacter, WeaponProjectileToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_AWeaponProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_WeaponProjectileToSpawn_MetaData), Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_WeaponProjectileToSpawn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_DropsCollector_MetaData[] = {
		{ "Category", "WeaponData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProgGameplayProtoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_DropsCollector = { "DropsCollector", nullptr, (EPropertyFlags)0x002008000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProgGameplayProtoCharacter, DropsCollector), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_DropsCollector_MetaData), Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_DropsCollector_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "ProgGameplayProtoCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProgGameplayProtoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x002008000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProgGameplayProtoCharacter, Health), Z_Construct_UClass_UHealth_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_Health_MetaData), Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_Health_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_Experience_MetaData[] = {
		{ "Category", "ProgGameplayProtoCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProgGameplayProtoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_Experience = { "Experience", nullptr, (EPropertyFlags)0x002008000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProgGameplayProtoCharacter, Experience), Z_Construct_UClass_UExperienceComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_Experience_MetaData), Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_Experience_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_DefaultWeaponData_MetaData[] = {
		{ "Category", "WeaponData" },
		{ "ModuleRelativePath", "ProgGameplayProtoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_DefaultWeaponData = { "DefaultWeaponData", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProgGameplayProtoCharacter, DefaultWeaponData), Z_Construct_UClass_UWeaponData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_DefaultWeaponData_MetaData), Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_DefaultWeaponData_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_DefaultBonuses_Inner = { "DefaultBonuses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBonusData_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_DefaultBonuses_MetaData[] = {
		{ "Category", "WeaponData" },
		{ "ModuleRelativePath", "ProgGameplayProtoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_DefaultBonuses = { "DefaultBonuses", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProgGameplayProtoCharacter, DefaultBonuses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_DefaultBonuses_MetaData), Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_DefaultBonuses_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_Weapon_MetaData[] = {
		{ "Category", "ProgGameplayProtoCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProgGameplayProtoCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x002008000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProgGameplayProtoCharacter, Weapon), Z_Construct_UClass_UWeaponComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_Weapon_MetaData), Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_Weapon_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_JumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_LookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_ShootAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_AutoFireAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_WeaponProjectileToSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_DropsCollector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_Experience,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_DefaultWeaponData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_DefaultBonuses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_DefaultBonuses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::NewProp_Weapon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProgGameplayProtoCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::ClassParams = {
		&AProgGameplayProtoCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AProgGameplayProtoCharacter()
	{
		if (!Z_Registration_Info_UClass_AProgGameplayProtoCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProgGameplayProtoCharacter.OuterSingleton, Z_Construct_UClass_AProgGameplayProtoCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AProgGameplayProtoCharacter.OuterSingleton;
	}
	template<> PROGGAMEPLAYPROTO_API UClass* StaticClass<AProgGameplayProtoCharacter>()
	{
		return AProgGameplayProtoCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProgGameplayProtoCharacter);
	AProgGameplayProtoCharacter::~AProgGameplayProtoCharacter() {}
	struct Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_ProgGameplayProtoCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_ProgGameplayProtoCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AProgGameplayProtoCharacter, AProgGameplayProtoCharacter::StaticClass, TEXT("AProgGameplayProtoCharacter"), &Z_Registration_Info_UClass_AProgGameplayProtoCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProgGameplayProtoCharacter), 1734007959U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_ProgGameplayProtoCharacter_h_685730007(TEXT("/Script/ProgGameplayProto"),
		Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_ProgGameplayProtoCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_ProgGameplayProtoCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
