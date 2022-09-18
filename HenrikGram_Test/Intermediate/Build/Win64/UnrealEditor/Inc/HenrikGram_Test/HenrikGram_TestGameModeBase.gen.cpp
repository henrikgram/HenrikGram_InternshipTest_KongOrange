// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HenrikGram_Test/HenrikGram_TestGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHenrikGram_TestGameModeBase() {}
// Cross Module References
	HENRIKGRAM_TEST_API UClass* Z_Construct_UClass_AHenrikGram_TestGameModeBase_NoRegister();
	HENRIKGRAM_TEST_API UClass* Z_Construct_UClass_AHenrikGram_TestGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_HenrikGram_Test();
// End Cross Module References
	void AHenrikGram_TestGameModeBase::StaticRegisterNativesAHenrikGram_TestGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHenrikGram_TestGameModeBase);
	UClass* Z_Construct_UClass_AHenrikGram_TestGameModeBase_NoRegister()
	{
		return AHenrikGram_TestGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AHenrikGram_TestGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHenrikGram_TestGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_HenrikGram_Test,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHenrikGram_TestGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "HenrikGram_TestGameModeBase.h" },
		{ "ModuleRelativePath", "HenrikGram_TestGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHenrikGram_TestGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHenrikGram_TestGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHenrikGram_TestGameModeBase_Statics::ClassParams = {
		&AHenrikGram_TestGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AHenrikGram_TestGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHenrikGram_TestGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHenrikGram_TestGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AHenrikGram_TestGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHenrikGram_TestGameModeBase.OuterSingleton, Z_Construct_UClass_AHenrikGram_TestGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHenrikGram_TestGameModeBase.OuterSingleton;
	}
	template<> HENRIKGRAM_TEST_API UClass* StaticClass<AHenrikGram_TestGameModeBase>()
	{
		return AHenrikGram_TestGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHenrikGram_TestGameModeBase);
	struct Z_CompiledInDeferFile_FID_HenrikGram_Test_Source_HenrikGram_Test_HenrikGram_TestGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HenrikGram_Test_Source_HenrikGram_Test_HenrikGram_TestGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHenrikGram_TestGameModeBase, AHenrikGram_TestGameModeBase::StaticClass, TEXT("AHenrikGram_TestGameModeBase"), &Z_Registration_Info_UClass_AHenrikGram_TestGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHenrikGram_TestGameModeBase), 2918744018U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HenrikGram_Test_Source_HenrikGram_Test_HenrikGram_TestGameModeBase_h_1376281318(TEXT("/Script/HenrikGram_Test"),
		Z_CompiledInDeferFile_FID_HenrikGram_Test_Source_HenrikGram_Test_HenrikGram_TestGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HenrikGram_Test_Source_HenrikGram_Test_HenrikGram_TestGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
