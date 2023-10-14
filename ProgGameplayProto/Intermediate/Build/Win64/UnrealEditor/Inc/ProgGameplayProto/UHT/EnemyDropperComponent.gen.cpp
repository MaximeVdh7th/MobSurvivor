// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProgGameplayProto/Drops/EnemyDropperComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyDropperComponent() {}
// Cross Module References
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_UDropperComponent();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_UEnemyDropperComponent();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_UEnemyDropperComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProgGameplayProto();
// End Cross Module References
	DEFINE_FUNCTION(UEnemyDropperComponent::execOnEnemyDie)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEnemyDie();
		P_NATIVE_END;
	}
	void UEnemyDropperComponent::StaticRegisterNativesUEnemyDropperComponent()
	{
		UClass* Class = UEnemyDropperComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnEnemyDie", &UEnemyDropperComponent::execOnEnemyDie },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEnemyDropperComponent_OnEnemyDie_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemyDropperComponent_OnEnemyDie_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Drops/EnemyDropperComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemyDropperComponent_OnEnemyDie_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemyDropperComponent, nullptr, "OnEnemyDie", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyDropperComponent_OnEnemyDie_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnemyDropperComponent_OnEnemyDie_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UEnemyDropperComponent_OnEnemyDie()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemyDropperComponent_OnEnemyDie_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemyDropperComponent);
	UClass* Z_Construct_UClass_UEnemyDropperComponent_NoRegister()
	{
		return UEnemyDropperComponent::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyDropperComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemyDropperComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDropperComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ProgGameplayProto,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyDropperComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UEnemyDropperComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnemyDropperComponent_OnEnemyDie, "OnEnemyDie" }, // 3088957613
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyDropperComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyDropperComponent_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Drops/EnemyDropperComponent.h" },
		{ "ModuleRelativePath", "Drops/EnemyDropperComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyDropperComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyDropperComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyDropperComponent_Statics::ClassParams = {
		&UEnemyDropperComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyDropperComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemyDropperComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UEnemyDropperComponent()
	{
		if (!Z_Registration_Info_UClass_UEnemyDropperComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyDropperComponent.OuterSingleton, Z_Construct_UClass_UEnemyDropperComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnemyDropperComponent.OuterSingleton;
	}
	template<> PROGGAMEPLAYPROTO_API UClass* StaticClass<UEnemyDropperComponent>()
	{
		return UEnemyDropperComponent::StaticClass();
	}
	UEnemyDropperComponent::UEnemyDropperComponent() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyDropperComponent);
	UEnemyDropperComponent::~UEnemyDropperComponent() {}
	struct Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Drops_EnemyDropperComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Drops_EnemyDropperComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyDropperComponent, UEnemyDropperComponent::StaticClass, TEXT("UEnemyDropperComponent"), &Z_Registration_Info_UClass_UEnemyDropperComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyDropperComponent), 237010532U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Drops_EnemyDropperComponent_h_1771458292(TEXT("/Script/ProgGameplayProto"),
		Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Drops_EnemyDropperComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Drops_EnemyDropperComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
