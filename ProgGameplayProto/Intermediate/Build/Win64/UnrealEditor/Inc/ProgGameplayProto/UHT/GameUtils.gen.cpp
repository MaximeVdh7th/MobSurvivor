// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProgGameplayProto/GameUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameUtils() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_AProgGameplayProtoCharacter_NoRegister();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_UGameUtils();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_UGameUtils_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProgGameplayProto();
// End Cross Module References
	DEFINE_FUNCTION(UGameUtils::execGetMainCharacter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AProgGameplayProtoCharacter**)Z_Param__Result=UGameUtils::GetMainCharacter();
		P_NATIVE_END;
	}
	void UGameUtils::StaticRegisterNativesUGameUtils()
	{
		UClass* Class = UGameUtils::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMainCharacter", &UGameUtils::execGetMainCharacter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameUtils_GetMainCharacter_Statics
	{
		struct GameUtils_eventGetMainCharacter_Parms
		{
			AProgGameplayProtoCharacter* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameUtils_GetMainCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameUtils_eventGetMainCharacter_Parms, ReturnValue), Z_Construct_UClass_AProgGameplayProtoCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameUtils_GetMainCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameUtils_GetMainCharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameUtils_GetMainCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manager" },
		{ "ModuleRelativePath", "GameUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameUtils_GetMainCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameUtils, nullptr, "GetMainCharacter", nullptr, nullptr, Z_Construct_UFunction_UGameUtils_GetMainCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUtils_GetMainCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameUtils_GetMainCharacter_Statics::GameUtils_eventGetMainCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUtils_GetMainCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameUtils_GetMainCharacter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameUtils_GetMainCharacter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGameUtils_GetMainCharacter_Statics::GameUtils_eventGetMainCharacter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGameUtils_GetMainCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameUtils_GetMainCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameUtils);
	UClass* Z_Construct_UClass_UGameUtils_NoRegister()
	{
		return UGameUtils::StaticClass();
	}
	struct Z_Construct_UClass_UGameUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ProgGameplayProto,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameUtils_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameUtils_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameUtils_GetMainCharacter, "GetMainCharacter" }, // 3337283312
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameUtils_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameUtils_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "GameUtils.h" },
		{ "ModuleRelativePath", "GameUtils.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameUtils>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameUtils_Statics::ClassParams = {
		&UGameUtils::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameUtils_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameUtils_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGameUtils()
	{
		if (!Z_Registration_Info_UClass_UGameUtils.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameUtils.OuterSingleton, Z_Construct_UClass_UGameUtils_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameUtils.OuterSingleton;
	}
	template<> PROGGAMEPLAYPROTO_API UClass* StaticClass<UGameUtils>()
	{
		return UGameUtils::StaticClass();
	}
	UGameUtils::UGameUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameUtils);
	UGameUtils::~UGameUtils() {}
	struct Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_GameUtils_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_GameUtils_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameUtils, UGameUtils::StaticClass, TEXT("UGameUtils"), &Z_Registration_Info_UClass_UGameUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameUtils), 3953508783U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_GameUtils_h_230228400(TEXT("/Script/ProgGameplayProto"),
		Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_GameUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_GameUtils_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
