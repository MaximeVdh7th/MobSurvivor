// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProgGameplayProto/Health.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealth() {}
// Cross Module References
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_UHealth();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_UHealth_NoRegister();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_UProjectileInteraction();
	PROGGAMEPLAYPROTO_API UFunction* Z_Construct_UDelegateFunction_ProgGameplayProto_OnHealthChanged__DelegateSignature();
	PROGGAMEPLAYPROTO_API UFunction* Z_Construct_UDelegateFunction_ProgGameplayProto_OnHealthDie__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ProgGameplayProto();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ProgGameplayProto_OnHealthDie__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ProgGameplayProto_OnHealthDie__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Health.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProgGameplayProto_OnHealthDie__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProgGameplayProto, nullptr, "OnHealthDie__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProgGameplayProto_OnHealthDie__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProgGameplayProto_OnHealthDie__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_ProgGameplayProto_OnHealthDie__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProgGameplayProto_OnHealthDie__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnHealthDie_DelegateWrapper(const FMulticastScriptDelegate& OnHealthDie)
{
	OnHealthDie.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_ProgGameplayProto_OnHealthChanged__DelegateSignature_Statics
	{
		struct _Script_ProgGameplayProto_eventOnHealthChanged_Parms
		{
			float NewHealthValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHealthValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ProgGameplayProto_OnHealthChanged__DelegateSignature_Statics::NewProp_NewHealthValue = { "NewHealthValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProgGameplayProto_eventOnHealthChanged_Parms, NewHealthValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProgGameplayProto_OnHealthChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProgGameplayProto_OnHealthChanged__DelegateSignature_Statics::NewProp_NewHealthValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ProgGameplayProto_OnHealthChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Health.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProgGameplayProto_OnHealthChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProgGameplayProto, nullptr, "OnHealthChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProgGameplayProto_OnHealthChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProgGameplayProto_OnHealthChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProgGameplayProto_OnHealthChanged__DelegateSignature_Statics::_Script_ProgGameplayProto_eventOnHealthChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProgGameplayProto_OnHealthChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProgGameplayProto_OnHealthChanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProgGameplayProto_OnHealthChanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_ProgGameplayProto_OnHealthChanged__DelegateSignature_Statics::_Script_ProgGameplayProto_eventOnHealthChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_ProgGameplayProto_OnHealthChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProgGameplayProto_OnHealthChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnHealthChanged_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChanged, float NewHealthValue)
{
	struct _Script_ProgGameplayProto_eventOnHealthChanged_Parms
	{
		float NewHealthValue;
	};
	_Script_ProgGameplayProto_eventOnHealthChanged_Parms Parms;
	Parms.NewHealthValue=NewHealthValue;
	OnHealthChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UHealth::execGetCurrentHealthPercentage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentHealthPercentage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHealth::execGetCurrentHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentHealth();
		P_NATIVE_END;
	}
	void UHealth::StaticRegisterNativesUHealth()
	{
		UClass* Class = UHealth::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentHealth", &UHealth::execGetCurrentHealth },
			{ "GetCurrentHealthPercentage", &UHealth::execGetCurrentHealthPercentage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHealth_GetCurrentHealth_Statics
	{
		struct Health_eventGetCurrentHealth_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHealth_GetCurrentHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Health_eventGetCurrentHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealth_GetCurrentHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealth_GetCurrentHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealth_GetCurrentHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Health.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealth_GetCurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealth, nullptr, "GetCurrentHealth", nullptr, nullptr, Z_Construct_UFunction_UHealth_GetCurrentHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealth_GetCurrentHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHealth_GetCurrentHealth_Statics::Health_eventGetCurrentHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealth_GetCurrentHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealth_GetCurrentHealth_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealth_GetCurrentHealth_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHealth_GetCurrentHealth_Statics::Health_eventGetCurrentHealth_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHealth_GetCurrentHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealth_GetCurrentHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHealth_GetCurrentHealthPercentage_Statics
	{
		struct Health_eventGetCurrentHealthPercentage_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHealth_GetCurrentHealthPercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Health_eventGetCurrentHealthPercentage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealth_GetCurrentHealthPercentage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealth_GetCurrentHealthPercentage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealth_GetCurrentHealthPercentage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Health.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealth_GetCurrentHealthPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealth, nullptr, "GetCurrentHealthPercentage", nullptr, nullptr, Z_Construct_UFunction_UHealth_GetCurrentHealthPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealth_GetCurrentHealthPercentage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHealth_GetCurrentHealthPercentage_Statics::Health_eventGetCurrentHealthPercentage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealth_GetCurrentHealthPercentage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealth_GetCurrentHealthPercentage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealth_GetCurrentHealthPercentage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UHealth_GetCurrentHealthPercentage_Statics::Health_eventGetCurrentHealthPercentage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UHealth_GetCurrentHealthPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealth_GetCurrentHealthPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHealth);
	UClass* Z_Construct_UClass_UHealth_NoRegister()
	{
		return UHealth::StaticClass();
	}
	struct Z_Construct_UClass_UHealth_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnBeforeHealthDie_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBeforeHealthDie;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthDie_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthDie;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHealth_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UProjectileInteraction,
		(UObject* (*)())Z_Construct_UPackage__Script_ProgGameplayProto,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealth_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UHealth_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHealth_GetCurrentHealth, "GetCurrentHealth" }, // 4238577171
		{ &Z_Construct_UFunction_UHealth_GetCurrentHealthPercentage, "GetCurrentHealthPercentage" }, // 2541330231
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealth_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealth_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "Health.h" },
		{ "ModuleRelativePath", "Health.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealth_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Health.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHealth_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealth, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHealth_Statics::NewProp_MaxHealth_MetaData), Z_Construct_UClass_UHealth_Statics::NewProp_MaxHealth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealth_Statics::NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Health.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHealth_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0020080000020805, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealth, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHealth_Statics::NewProp_CurrentHealth_MetaData), Z_Construct_UClass_UHealth_Statics::NewProp_CurrentHealth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealth_Statics::NewProp_OnBeforeHealthDie_MetaData[] = {
		{ "ModuleRelativePath", "Health.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHealth_Statics::NewProp_OnBeforeHealthDie = { "OnBeforeHealthDie", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealth, OnBeforeHealthDie), Z_Construct_UDelegateFunction_ProgGameplayProto_OnHealthDie__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHealth_Statics::NewProp_OnBeforeHealthDie_MetaData), Z_Construct_UClass_UHealth_Statics::NewProp_OnBeforeHealthDie_MetaData) }; // 3202955360
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealth_Statics::NewProp_OnHealthDie_MetaData[] = {
		{ "ModuleRelativePath", "Health.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHealth_Statics::NewProp_OnHealthDie = { "OnHealthDie", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealth, OnHealthDie), Z_Construct_UDelegateFunction_ProgGameplayProto_OnHealthDie__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHealth_Statics::NewProp_OnHealthDie_MetaData), Z_Construct_UClass_UHealth_Statics::NewProp_OnHealthDie_MetaData) }; // 3202955360
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealth_Statics::NewProp_OnHealthChanged_MetaData[] = {
		{ "ModuleRelativePath", "Health.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHealth_Statics::NewProp_OnHealthChanged = { "OnHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealth, OnHealthChanged), Z_Construct_UDelegateFunction_ProgGameplayProto_OnHealthChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHealth_Statics::NewProp_OnHealthChanged_MetaData), Z_Construct_UClass_UHealth_Statics::NewProp_OnHealthChanged_MetaData) }; // 2883914127
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealth_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealth_Statics::NewProp_CurrentHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealth_Statics::NewProp_OnBeforeHealthDie,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealth_Statics::NewProp_OnHealthDie,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealth_Statics::NewProp_OnHealthChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHealth_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHealth>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHealth_Statics::ClassParams = {
		&UHealth::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHealth_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHealth_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHealth_Statics::Class_MetaDataParams), Z_Construct_UClass_UHealth_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealth_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UHealth()
	{
		if (!Z_Registration_Info_UClass_UHealth.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHealth.OuterSingleton, Z_Construct_UClass_UHealth_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHealth.OuterSingleton;
	}
	template<> PROGGAMEPLAYPROTO_API UClass* StaticClass<UHealth>()
	{
		return UHealth::StaticClass();
	}
	UHealth::UHealth() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHealth);
	UHealth::~UHealth() {}
	struct Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Health_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Health_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHealth, UHealth::StaticClass, TEXT("UHealth"), &Z_Registration_Info_UClass_UHealth, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHealth), 1385360121U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Health_h_3062186753(TEXT("/Script/ProgGameplayProto"),
		Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Health_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Health_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
