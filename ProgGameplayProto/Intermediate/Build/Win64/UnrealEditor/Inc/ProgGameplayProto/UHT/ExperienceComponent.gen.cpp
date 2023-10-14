// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProgGameplayProto/ExperienceComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExperienceComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_UExperienceComponent();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_UExperienceComponent_NoRegister();
	PROGGAMEPLAYPROTO_API UFunction* Z_Construct_UDelegateFunction_ProgGameplayProto_OnExperienceChanged__DelegateSignature();
	PROGGAMEPLAYPROTO_API UFunction* Z_Construct_UDelegateFunction_ProgGameplayProto_OnLevelUp__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ProgGameplayProto();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ProgGameplayProto_OnExperienceChanged__DelegateSignature_Statics
	{
		struct _Script_ProgGameplayProto_eventOnExperienceChanged_Parms
		{
			float NewExperienceValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewExperienceValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ProgGameplayProto_OnExperienceChanged__DelegateSignature_Statics::NewProp_NewExperienceValue = { "NewExperienceValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProgGameplayProto_eventOnExperienceChanged_Parms, NewExperienceValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProgGameplayProto_OnExperienceChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProgGameplayProto_OnExperienceChanged__DelegateSignature_Statics::NewProp_NewExperienceValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ProgGameplayProto_OnExperienceChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ExperienceComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProgGameplayProto_OnExperienceChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProgGameplayProto, nullptr, "OnExperienceChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProgGameplayProto_OnExperienceChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProgGameplayProto_OnExperienceChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProgGameplayProto_OnExperienceChanged__DelegateSignature_Statics::_Script_ProgGameplayProto_eventOnExperienceChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProgGameplayProto_OnExperienceChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProgGameplayProto_OnExperienceChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProgGameplayProto_OnExperienceChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_ProgGameplayProto_OnExperienceChanged__DelegateSignature_Statics::_Script_ProgGameplayProto_eventOnExperienceChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_ProgGameplayProto_OnExperienceChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProgGameplayProto_OnExperienceChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnExperienceChanged_DelegateWrapper(const FMulticastScriptDelegate& OnExperienceChanged, float NewExperienceValue)
{
	struct _Script_ProgGameplayProto_eventOnExperienceChanged_Parms
	{
		float NewExperienceValue;
	};
	_Script_ProgGameplayProto_eventOnExperienceChanged_Parms Parms;
	Parms.NewExperienceValue=NewExperienceValue;
	OnExperienceChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_ProgGameplayProto_OnLevelUp__DelegateSignature_Statics
	{
		struct _Script_ProgGameplayProto_eventOnLevelUp_Parms
		{
			int32 NewLevel;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_ProgGameplayProto_OnLevelUp__DelegateSignature_Statics::NewProp_NewLevel = { "NewLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProgGameplayProto_eventOnLevelUp_Parms, NewLevel), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProgGameplayProto_OnLevelUp__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProgGameplayProto_OnLevelUp__DelegateSignature_Statics::NewProp_NewLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ProgGameplayProto_OnLevelUp__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ExperienceComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProgGameplayProto_OnLevelUp__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProgGameplayProto, nullptr, "OnLevelUp__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProgGameplayProto_OnLevelUp__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProgGameplayProto_OnLevelUp__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProgGameplayProto_OnLevelUp__DelegateSignature_Statics::_Script_ProgGameplayProto_eventOnLevelUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProgGameplayProto_OnLevelUp__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProgGameplayProto_OnLevelUp__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProgGameplayProto_OnLevelUp__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_ProgGameplayProto_OnLevelUp__DelegateSignature_Statics::_Script_ProgGameplayProto_eventOnLevelUp_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_ProgGameplayProto_OnLevelUp__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProgGameplayProto_OnLevelUp__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnLevelUp_DelegateWrapper(const FMulticastScriptDelegate& OnLevelUp, int32 NewLevel)
{
	struct _Script_ProgGameplayProto_eventOnLevelUp_Parms
	{
		int32 NewLevel;
	};
	_Script_ProgGameplayProto_eventOnLevelUp_Parms Parms;
	Parms.NewLevel=NewLevel;
	OnLevelUp.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UExperienceComponent::execGetCurrentExperiencePercentage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentExperiencePercentage();
		P_NATIVE_END;
	}
	void UExperienceComponent::StaticRegisterNativesUExperienceComponent()
	{
		UClass* Class = UExperienceComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentExperiencePercentage", &UExperienceComponent::execGetCurrentExperiencePercentage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UExperienceComponent_GetCurrentExperiencePercentage_Statics
	{
		struct ExperienceComponent_eventGetCurrentExperiencePercentage_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExperienceComponent_GetCurrentExperiencePercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExperienceComponent_eventGetCurrentExperiencePercentage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExperienceComponent_GetCurrentExperiencePercentage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExperienceComponent_GetCurrentExperiencePercentage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExperienceComponent_GetCurrentExperiencePercentage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ExperienceComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExperienceComponent_GetCurrentExperiencePercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExperienceComponent, nullptr, "GetCurrentExperiencePercentage", nullptr, nullptr, Z_Construct_UFunction_UExperienceComponent_GetCurrentExperiencePercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExperienceComponent_GetCurrentExperiencePercentage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExperienceComponent_GetCurrentExperiencePercentage_Statics::ExperienceComponent_eventGetCurrentExperiencePercentage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExperienceComponent_GetCurrentExperiencePercentage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExperienceComponent_GetCurrentExperiencePercentage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExperienceComponent_GetCurrentExperiencePercentage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UExperienceComponent_GetCurrentExperiencePercentage_Statics::ExperienceComponent_eventGetCurrentExperiencePercentage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UExperienceComponent_GetCurrentExperiencePercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExperienceComponent_GetCurrentExperiencePercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExperienceComponent);
	UClass* Z_Construct_UClass_UExperienceComponent_NoRegister()
	{
		return UExperienceComponent::StaticClass();
	}
	struct Z_Construct_UClass_UExperienceComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnExperienceChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnExperienceChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLevelUp_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLevelUp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExperienceCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExperienceCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExperienceComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ProgGameplayProto,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExperienceComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UExperienceComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UExperienceComponent_GetCurrentExperiencePercentage, "GetCurrentExperiencePercentage" }, // 1428900486
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExperienceComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExperienceComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ExperienceComponent.h" },
		{ "ModuleRelativePath", "ExperienceComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExperienceComponent_Statics::NewProp_OnExperienceChanged_MetaData[] = {
		{ "ModuleRelativePath", "ExperienceComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UExperienceComponent_Statics::NewProp_OnExperienceChanged = { "OnExperienceChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExperienceComponent, OnExperienceChanged), Z_Construct_UDelegateFunction_ProgGameplayProto_OnExperienceChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExperienceComponent_Statics::NewProp_OnExperienceChanged_MetaData), Z_Construct_UClass_UExperienceComponent_Statics::NewProp_OnExperienceChanged_MetaData) }; // 1446666349
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExperienceComponent_Statics::NewProp_OnLevelUp_MetaData[] = {
		{ "ModuleRelativePath", "ExperienceComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UExperienceComponent_Statics::NewProp_OnLevelUp = { "OnLevelUp", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExperienceComponent, OnLevelUp), Z_Construct_UDelegateFunction_ProgGameplayProto_OnLevelUp__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExperienceComponent_Statics::NewProp_OnLevelUp_MetaData), Z_Construct_UClass_UExperienceComponent_Statics::NewProp_OnLevelUp_MetaData) }; // 1324859189
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExperienceComponent_Statics::NewProp_ExperienceCurve_MetaData[] = {
		{ "Category", "ExperienceComponent" },
		{ "ModuleRelativePath", "ExperienceComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UExperienceComponent_Statics::NewProp_ExperienceCurve = { "ExperienceCurve", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExperienceComponent, ExperienceCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExperienceComponent_Statics::NewProp_ExperienceCurve_MetaData), Z_Construct_UClass_UExperienceComponent_Statics::NewProp_ExperienceCurve_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExperienceComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExperienceComponent_Statics::NewProp_OnExperienceChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExperienceComponent_Statics::NewProp_OnLevelUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExperienceComponent_Statics::NewProp_ExperienceCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExperienceComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExperienceComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UExperienceComponent_Statics::ClassParams = {
		&UExperienceComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UExperienceComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UExperienceComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExperienceComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UExperienceComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExperienceComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UExperienceComponent()
	{
		if (!Z_Registration_Info_UClass_UExperienceComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExperienceComponent.OuterSingleton, Z_Construct_UClass_UExperienceComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UExperienceComponent.OuterSingleton;
	}
	template<> PROGGAMEPLAYPROTO_API UClass* StaticClass<UExperienceComponent>()
	{
		return UExperienceComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExperienceComponent);
	UExperienceComponent::~UExperienceComponent() {}
	struct Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_ExperienceComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_ExperienceComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UExperienceComponent, UExperienceComponent::StaticClass, TEXT("UExperienceComponent"), &Z_Registration_Info_UClass_UExperienceComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExperienceComponent), 3955952327U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_ExperienceComponent_h_3668749259(TEXT("/Script/ProgGameplayProto"),
		Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_ExperienceComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_ExperienceComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
