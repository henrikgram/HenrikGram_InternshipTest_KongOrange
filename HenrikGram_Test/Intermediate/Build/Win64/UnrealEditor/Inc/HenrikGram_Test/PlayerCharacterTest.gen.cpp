// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HenrikGram_Test/PlayerCharacterTest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCharacterTest() {}
// Cross Module References
	HENRIKGRAM_TEST_API UClass* Z_Construct_UClass_APlayerCharacterTest_NoRegister();
	HENRIKGRAM_TEST_API UClass* Z_Construct_UClass_APlayerCharacterTest();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_HenrikGram_Test();
// End Cross Module References
	void APlayerCharacterTest::StaticRegisterNativesAPlayerCharacterTest()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerCharacterTest);
	UClass* Z_Construct_UClass_APlayerCharacterTest_NoRegister()
	{
		return APlayerCharacterTest::StaticClass();
	}
	struct Z_Construct_UClass_APlayerCharacterTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerCharacterTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_HenrikGram_Test,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacterTest_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerCharacterTest.h" },
		{ "ModuleRelativePath", "PlayerCharacterTest.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerCharacterTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerCharacterTest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerCharacterTest_Statics::ClassParams = {
		&APlayerCharacterTest::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerCharacterTest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacterTest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerCharacterTest()
	{
		if (!Z_Registration_Info_UClass_APlayerCharacterTest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerCharacterTest.OuterSingleton, Z_Construct_UClass_APlayerCharacterTest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlayerCharacterTest.OuterSingleton;
	}
	template<> HENRIKGRAM_TEST_API UClass* StaticClass<APlayerCharacterTest>()
	{
		return APlayerCharacterTest::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerCharacterTest);
	struct Z_CompiledInDeferFile_FID_HenrikGram_Test_Source_HenrikGram_Test_PlayerCharacterTest_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HenrikGram_Test_Source_HenrikGram_Test_PlayerCharacterTest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayerCharacterTest, APlayerCharacterTest::StaticClass, TEXT("APlayerCharacterTest"), &Z_Registration_Info_UClass_APlayerCharacterTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerCharacterTest), 141985852U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HenrikGram_Test_Source_HenrikGram_Test_PlayerCharacterTest_h_2255404567(TEXT("/Script/HenrikGram_Test"),
		Z_CompiledInDeferFile_FID_HenrikGram_Test_Source_HenrikGram_Test_PlayerCharacterTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HenrikGram_Test_Source_HenrikGram_Test_PlayerCharacterTest_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
