// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProgGameplayProto/ProgGameplayProtoGameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProgGameplayProtoGameState() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_AProgGameplayProtoGameState();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_AProgGameplayProtoGameState_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProgGameplayProto();
// End Cross Module References
	DEFINE_FUNCTION(AProgGameplayProtoGameState::execStartGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AProgGameplayProtoGameState::execGetGameTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetGameTime();
		P_NATIVE_END;
	}
	void AProgGameplayProtoGameState::StaticRegisterNativesAProgGameplayProtoGameState()
	{
		UClass* Class = AProgGameplayProtoGameState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGameTime", &AProgGameplayProtoGameState::execGetGameTime },
			{ "StartGame", &AProgGameplayProtoGameState::execStartGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AProgGameplayProtoGameState_GetGameTime_Statics
	{
		struct ProgGameplayProtoGameState_eventGetGameTime_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AProgGameplayProtoGameState_GetGameTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProgGameplayProtoGameState_eventGetGameTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProgGameplayProtoGameState_GetGameTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProgGameplayProtoGameState_GetGameTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProgGameplayProtoGameState_GetGameTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ProgGameplayProtoGameState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProgGameplayProtoGameState_GetGameTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProgGameplayProtoGameState, nullptr, "GetGameTime", nullptr, nullptr, Z_Construct_UFunction_AProgGameplayProtoGameState_GetGameTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProgGameplayProtoGameState_GetGameTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_AProgGameplayProtoGameState_GetGameTime_Statics::ProgGameplayProtoGameState_eventGetGameTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProgGameplayProtoGameState_GetGameTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProgGameplayProtoGameState_GetGameTime_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProgGameplayProtoGameState_GetGameTime_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AProgGameplayProtoGameState_GetGameTime_Statics::ProgGameplayProtoGameState_eventGetGameTime_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AProgGameplayProtoGameState_GetGameTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProgGameplayProtoGameState_GetGameTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProgGameplayProtoGameState_StartGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProgGameplayProtoGameState_StartGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ProgGameplayProtoGameState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProgGameplayProtoGameState_StartGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProgGameplayProtoGameState, nullptr, "StartGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProgGameplayProtoGameState_StartGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProgGameplayProtoGameState_StartGame_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AProgGameplayProtoGameState_StartGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProgGameplayProtoGameState_StartGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProgGameplayProtoGameState);
	UClass* Z_Construct_UClass_AProgGameplayProtoGameState_NoRegister()
	{
		return AProgGameplayProtoGameState::StaticClass();
	}
	struct Z_Construct_UClass_AProgGameplayProtoGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProgGameplayProtoGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ProgGameplayProto,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProgGameplayProtoGameState_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AProgGameplayProtoGameState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AProgGameplayProtoGameState_GetGameTime, "GetGameTime" }, // 2104397789
		{ &Z_Construct_UFunction_AProgGameplayProtoGameState_StartGame, "StartGame" }, // 477598206
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProgGameplayProtoGameState_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProgGameplayProtoGameState_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ProgGameplayProtoGameState.h" },
		{ "ModuleRelativePath", "ProgGameplayProtoGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProgGameplayProtoGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProgGameplayProtoGameState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AProgGameplayProtoGameState_Statics::ClassParams = {
		&AProgGameplayProtoGameState::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProgGameplayProtoGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_AProgGameplayProtoGameState_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AProgGameplayProtoGameState()
	{
		if (!Z_Registration_Info_UClass_AProgGameplayProtoGameState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProgGameplayProtoGameState.OuterSingleton, Z_Construct_UClass_AProgGameplayProtoGameState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AProgGameplayProtoGameState.OuterSingleton;
	}
	template<> PROGGAMEPLAYPROTO_API UClass* StaticClass<AProgGameplayProtoGameState>()
	{
		return AProgGameplayProtoGameState::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProgGameplayProtoGameState);
	AProgGameplayProtoGameState::~AProgGameplayProtoGameState() {}
	struct Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_ProgGameplayProtoGameState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_ProgGameplayProtoGameState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AProgGameplayProtoGameState, AProgGameplayProtoGameState::StaticClass, TEXT("AProgGameplayProtoGameState"), &Z_Registration_Info_UClass_AProgGameplayProtoGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProgGameplayProtoGameState), 3571083918U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_ProgGameplayProtoGameState_h_3269209453(TEXT("/Script/ProgGameplayProto"),
		Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_ProgGameplayProtoGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_ProgGameplayProtoGameState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
