// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProgGameplayProto/Drops/DropperComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDropperComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_UDropperComponent();
	PROGGAMEPLAYPROTO_API UClass* Z_Construct_UClass_UDropperComponent_NoRegister();
	PROGGAMEPLAYPROTO_API UScriptStruct* Z_Construct_UScriptStruct_FDropAndWeight();
	UPackage* Z_Construct_UPackage__Script_ProgGameplayProto();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DropAndWeight;
class UScriptStruct* FDropAndWeight::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DropAndWeight.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DropAndWeight.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDropAndWeight, (UObject*)Z_Construct_UPackage__Script_ProgGameplayProto(), TEXT("DropAndWeight"));
	}
	return Z_Registration_Info_UScriptStruct_DropAndWeight.OuterSingleton;
}
template<> PROGGAMEPLAYPROTO_API UScriptStruct* StaticStruct<FDropAndWeight>()
{
	return FDropAndWeight::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDropAndWeight_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectToSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ObjectToSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDropAndWeight_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Drops/DropperComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDropAndWeight_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDropAndWeight>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDropAndWeight_Statics::NewProp_ObjectToSpawn_MetaData[] = {
		{ "Category", "DropAndWeight" },
		{ "ModuleRelativePath", "Drops/DropperComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FDropAndWeight_Statics::NewProp_ObjectToSpawn = { "ObjectToSpawn", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDropAndWeight, ObjectToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDropAndWeight_Statics::NewProp_ObjectToSpawn_MetaData), Z_Construct_UScriptStruct_FDropAndWeight_Statics::NewProp_ObjectToSpawn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDropAndWeight_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "DropAndWeight" },
		{ "ModuleRelativePath", "Drops/DropperComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDropAndWeight_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDropAndWeight, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDropAndWeight_Statics::NewProp_Weight_MetaData), Z_Construct_UScriptStruct_FDropAndWeight_Statics::NewProp_Weight_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDropAndWeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDropAndWeight_Statics::NewProp_ObjectToSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDropAndWeight_Statics::NewProp_Weight,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDropAndWeight_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProgGameplayProto,
		nullptr,
		&NewStructOps,
		"DropAndWeight",
		Z_Construct_UScriptStruct_FDropAndWeight_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDropAndWeight_Statics::PropPointers),
		sizeof(FDropAndWeight),
		alignof(FDropAndWeight),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDropAndWeight_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDropAndWeight_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDropAndWeight_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FDropAndWeight()
	{
		if (!Z_Registration_Info_UScriptStruct_DropAndWeight.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DropAndWeight.InnerSingleton, Z_Construct_UScriptStruct_FDropAndWeight_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DropAndWeight.InnerSingleton;
	}
	void UDropperComponent::StaticRegisterNativesUDropperComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDropperComponent);
	UClass* Z_Construct_UClass_UDropperComponent_NoRegister()
	{
		return UDropperComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDropperComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Drops_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Drops_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Drops;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfDropsRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NumberOfDropsRange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDropperComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ProgGameplayProto,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDropperComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDropperComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Drops/DropperComponent.h" },
		{ "ModuleRelativePath", "Drops/DropperComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDropperComponent_Statics::NewProp_Drops_Inner = { "Drops", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDropAndWeight, METADATA_PARAMS(0, nullptr) }; // 308115569
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDropperComponent_Statics::NewProp_Drops_MetaData[] = {
		{ "Category", "DropperComponent" },
		{ "ModuleRelativePath", "Drops/DropperComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDropperComponent_Statics::NewProp_Drops = { "Drops", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDropperComponent, Drops), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDropperComponent_Statics::NewProp_Drops_MetaData), Z_Construct_UClass_UDropperComponent_Statics::NewProp_Drops_MetaData) }; // 308115569
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDropperComponent_Statics::NewProp_NumberOfDropsRange_MetaData[] = {
		{ "Category", "DropperComponent" },
		{ "ModuleRelativePath", "Drops/DropperComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDropperComponent_Statics::NewProp_NumberOfDropsRange = { "NumberOfDropsRange", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDropperComponent, NumberOfDropsRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDropperComponent_Statics::NewProp_NumberOfDropsRange_MetaData), Z_Construct_UClass_UDropperComponent_Statics::NewProp_NumberOfDropsRange_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDropperComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDropperComponent_Statics::NewProp_Drops_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDropperComponent_Statics::NewProp_Drops,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDropperComponent_Statics::NewProp_NumberOfDropsRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDropperComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDropperComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDropperComponent_Statics::ClassParams = {
		&UDropperComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDropperComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDropperComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDropperComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDropperComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDropperComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDropperComponent()
	{
		if (!Z_Registration_Info_UClass_UDropperComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDropperComponent.OuterSingleton, Z_Construct_UClass_UDropperComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDropperComponent.OuterSingleton;
	}
	template<> PROGGAMEPLAYPROTO_API UClass* StaticClass<UDropperComponent>()
	{
		return UDropperComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDropperComponent);
	UDropperComponent::~UDropperComponent() {}
	struct Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Drops_DropperComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Drops_DropperComponent_h_Statics::ScriptStructInfo[] = {
		{ FDropAndWeight::StaticStruct, Z_Construct_UScriptStruct_FDropAndWeight_Statics::NewStructOps, TEXT("DropAndWeight"), &Z_Registration_Info_UScriptStruct_DropAndWeight, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDropAndWeight), 308115569U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Drops_DropperComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDropperComponent, UDropperComponent::StaticClass, TEXT("UDropperComponent"), &Z_Registration_Info_UClass_UDropperComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDropperComponent), 307708635U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Drops_DropperComponent_h_745622198(TEXT("/Script/ProgGameplayProto"),
		Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Drops_DropperComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Drops_DropperComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Drops_DropperComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FrostyFroggs_Formations_ProgGameplayProto_Source_ProgGameplayProto_Drops_DropperComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
