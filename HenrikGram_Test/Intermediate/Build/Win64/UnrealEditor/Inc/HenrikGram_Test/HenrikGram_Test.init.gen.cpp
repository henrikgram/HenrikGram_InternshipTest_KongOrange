// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHenrikGram_Test_init() {}
	HENRIKGRAM_TEST_API UFunction* Z_Construct_UDelegateFunction_HenrikGram_Test_OnPlayerDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_HenrikGram_Test;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_HenrikGram_Test()
	{
		if (!Z_Registration_Info_UPackage__Script_HenrikGram_Test.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_HenrikGram_Test_OnPlayerDied__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/HenrikGram_Test",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xD6DCE538,
				0x50DEBF46,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_HenrikGram_Test.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_HenrikGram_Test.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_HenrikGram_Test(Z_Construct_UPackage__Script_HenrikGram_Test, TEXT("/Script/HenrikGram_Test"), Z_Registration_Info_UPackage__Script_HenrikGram_Test, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xD6DCE538, 0x50DEBF46));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
