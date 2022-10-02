// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HenrikGram_Test/DynamicCamera.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDynamicCamera() {}
// Cross Module References
	HENRIKGRAM_TEST_API UClass* Z_Construct_UClass_UDynamicCamera_NoRegister();
	HENRIKGRAM_TEST_API UClass* Z_Construct_UClass_UDynamicCamera();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_HenrikGram_Test();
// End Cross Module References
	void UDynamicCamera::StaticRegisterNativesUDynamicCamera()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDynamicCamera);
	UClass* Z_Construct_UClass_UDynamicCamera_NoRegister()
	{
		return UDynamicCamera::StaticClass();
	}
	struct Z_Construct_UClass_UDynamicCamera_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDynamicCamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HenrikGram_Test,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicCamera_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DynamicCamera.h" },
		{ "ModuleRelativePath", "DynamicCamera.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDynamicCamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDynamicCamera>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDynamicCamera_Statics::ClassParams = {
		&UDynamicCamera::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDynamicCamera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicCamera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDynamicCamera()
	{
		if (!Z_Registration_Info_UClass_UDynamicCamera.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDynamicCamera.OuterSingleton, Z_Construct_UClass_UDynamicCamera_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDynamicCamera.OuterSingleton;
	}
	template<> HENRIKGRAM_TEST_API UClass* StaticClass<UDynamicCamera>()
	{
		return UDynamicCamera::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDynamicCamera);
	struct Z_CompiledInDeferFile_FID_HenrikGram_Test_Source_HenrikGram_Test_DynamicCamera_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HenrikGram_Test_Source_HenrikGram_Test_DynamicCamera_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDynamicCamera, UDynamicCamera::StaticClass, TEXT("UDynamicCamera"), &Z_Registration_Info_UClass_UDynamicCamera, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDynamicCamera), 3357170680U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HenrikGram_Test_Source_HenrikGram_Test_DynamicCamera_h_2836289893(TEXT("/Script/HenrikGram_Test"),
		Z_CompiledInDeferFile_FID_HenrikGram_Test_Source_HenrikGram_Test_DynamicCamera_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HenrikGram_Test_Source_HenrikGram_Test_DynamicCamera_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
