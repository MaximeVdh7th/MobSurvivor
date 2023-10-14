// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProgGameplayProto_init() {}
	PROGGAMEPLAYPROTO_API UFunction* Z_Construct_UDelegateFunction_ProgGameplayProto_HitDelegate__DelegateSignature();
	PROGGAMEPLAYPROTO_API UFunction* Z_Construct_UDelegateFunction_ProgGameplayProto_OnExperienceChanged__DelegateSignature();
	PROGGAMEPLAYPROTO_API UFunction* Z_Construct_UDelegateFunction_ProgGameplayProto_OnHealthChanged__DelegateSignature();
	PROGGAMEPLAYPROTO_API UFunction* Z_Construct_UDelegateFunction_ProgGameplayProto_OnHealthDie__DelegateSignature();
	PROGGAMEPLAYPROTO_API UFunction* Z_Construct_UDelegateFunction_ProgGameplayProto_OnLevelUp__DelegateSignature();
	PROGGAMEPLAYPROTO_API UFunction* Z_Construct_UDelegateFunction_ProgGameplayProto_ProjectileDestroyDelegate__DelegateSignature();
	PROGGAMEPLAYPROTO_API UFunction* Z_Construct_UDelegateFunction_ProgGameplayProto_ProjectileHitDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ProgGameplayProto;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ProgGameplayProto()
	{
		if (!Z_Registration_Info_UPackage__Script_ProgGameplayProto.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ProgGameplayProto_HitDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ProgGameplayProto_OnExperienceChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ProgGameplayProto_OnHealthChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ProgGameplayProto_OnHealthDie__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ProgGameplayProto_OnLevelUp__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ProgGameplayProto_ProjectileDestroyDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ProgGameplayProto_ProjectileHitDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ProgGameplayProto",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xDC1F1F05,
				0x1350C8DA,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ProgGameplayProto.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ProgGameplayProto.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ProgGameplayProto(Z_Construct_UPackage__Script_ProgGameplayProto, TEXT("/Script/ProgGameplayProto"), Z_Registration_Info_UPackage__Script_ProgGameplayProto, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xDC1F1F05, 0x1350C8DA));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
