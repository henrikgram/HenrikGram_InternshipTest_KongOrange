// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HenrikGram_Test/Gamemode_level1.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGamemode_level1() {}
// Cross Module References
	HENRIKGRAM_TEST_API UClass* Z_Construct_UClass_AGamemode_level1_NoRegister();
	HENRIKGRAM_TEST_API UClass* Z_Construct_UClass_AGamemode_level1();
	HENRIKGRAM_TEST_API UClass* Z_Construct_UClass_AHenrikGram_TestGameModeBase();
	UPackage* Z_Construct_UPackage__Script_HenrikGram_Test();
// End Cross Module References
	void AGamemode_level1::StaticRegisterNativesAGamemode_level1()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGamemode_level1);
	UClass* Z_Construct_UClass_AGamemode_level1_NoRegister()
	{
		return AGamemode_level1::StaticClass();
	}
	struct Z_Construct_UClass_AGamemode_level1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGamemode_level1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHenrikGram_TestGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_HenrikGram_Test,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGamemode_level1_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Gamemode_level1.h" },
		{ "ModuleRelativePath", "Gamemode_level1.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGamemode_level1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGamemode_level1>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGamemode_level1_Statics::ClassParams = {
		&AGamemode_level1::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGamemode_level1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGamemode_level1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGamemode_level1()
	{
		if (!Z_Registration_Info_UClass_AGamemode_level1.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGamemode_level1.OuterSingleton, Z_Construct_UClass_AGamemode_level1_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGamemode_level1.OuterSingleton;
	}
	template<> HENRIKGRAM_TEST_API UClass* StaticClass<AGamemode_level1>()
	{
		return AGamemode_level1::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGamemode_level1);
	struct Z_CompiledInDeferFile_FID_HenrikGram_Test_Source_HenrikGram_Test_Gamemode_level1_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HenrikGram_Test_Source_HenrikGram_Test_Gamemode_level1_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGamemode_level1, AGamemode_level1::StaticClass, TEXT("AGamemode_level1"), &Z_Registration_Info_UClass_AGamemode_level1, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGamemode_level1), 2505755153U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HenrikGram_Test_Source_HenrikGram_Test_Gamemode_level1_h_2037227527(TEXT("/Script/HenrikGram_Test"),
		Z_CompiledInDeferFile_FID_HenrikGram_Test_Source_HenrikGram_Test_Gamemode_level1_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HenrikGram_Test_Source_HenrikGram_Test_Gamemode_level1_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
