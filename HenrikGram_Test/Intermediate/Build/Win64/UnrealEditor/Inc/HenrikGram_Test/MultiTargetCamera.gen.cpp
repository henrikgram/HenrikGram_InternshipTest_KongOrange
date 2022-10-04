// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HenrikGram_Test/MultiTargetCamera.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiTargetCamera() {}
// Cross Module References
	HENRIKGRAM_TEST_API UClass* Z_Construct_UClass_UMultiTargetCamera_NoRegister();
	HENRIKGRAM_TEST_API UClass* Z_Construct_UClass_UMultiTargetCamera();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_HenrikGram_Test();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	void UMultiTargetCamera::StaticRegisterNativesUMultiTargetCamera()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMultiTargetCamera);
	UClass* Z_Construct_UClass_UMultiTargetCamera_NoRegister()
	{
		return UMultiTargetCamera::StaticClass();
	}
	struct Z_Construct_UClass_UMultiTargetCamera_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_target1_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_target1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_target2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_target2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ZOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_minDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_minDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoomFeel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ZoomFeel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMultiTargetCamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HenrikGram_Test,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiTargetCamera_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MultiTargetCamera.h" },
		{ "ModuleRelativePath", "MultiTargetCamera.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiTargetCamera_Statics::NewProp_target1_MetaData[] = {
		{ "Category", "MultiTargetCamera" },
		{ "ModuleRelativePath", "MultiTargetCamera.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMultiTargetCamera_Statics::NewProp_target1 = { "target1", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultiTargetCamera, target1), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMultiTargetCamera_Statics::NewProp_target1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiTargetCamera_Statics::NewProp_target1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiTargetCamera_Statics::NewProp_target2_MetaData[] = {
		{ "Category", "MultiTargetCamera" },
		{ "ModuleRelativePath", "MultiTargetCamera.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMultiTargetCamera_Statics::NewProp_target2 = { "target2", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultiTargetCamera, target2), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMultiTargetCamera_Statics::NewProp_target2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiTargetCamera_Statics::NewProp_target2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiTargetCamera_Statics::NewProp_ZOffset_MetaData[] = {
		{ "Category", "MultiTargetCamera" },
		{ "ModuleRelativePath", "MultiTargetCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMultiTargetCamera_Statics::NewProp_ZOffset = { "ZOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultiTargetCamera, ZOffset), METADATA_PARAMS(Z_Construct_UClass_UMultiTargetCamera_Statics::NewProp_ZOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiTargetCamera_Statics::NewProp_ZOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiTargetCamera_Statics::NewProp_minDistance_MetaData[] = {
		{ "Category", "MultiTargetCamera" },
		{ "ModuleRelativePath", "MultiTargetCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMultiTargetCamera_Statics::NewProp_minDistance = { "minDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultiTargetCamera, minDistance), METADATA_PARAMS(Z_Construct_UClass_UMultiTargetCamera_Statics::NewProp_minDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiTargetCamera_Statics::NewProp_minDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiTargetCamera_Statics::NewProp_maxDistance_MetaData[] = {
		{ "Category", "MultiTargetCamera" },
		{ "ModuleRelativePath", "MultiTargetCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMultiTargetCamera_Statics::NewProp_maxDistance = { "maxDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultiTargetCamera, maxDistance), METADATA_PARAMS(Z_Construct_UClass_UMultiTargetCamera_Statics::NewProp_maxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiTargetCamera_Statics::NewProp_maxDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiTargetCamera_Statics::NewProp_ZoomFeel_MetaData[] = {
		{ "Category", "MultiTargetCamera" },
		{ "ModuleRelativePath", "MultiTargetCamera.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMultiTargetCamera_Statics::NewProp_ZoomFeel = { "ZoomFeel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultiTargetCamera, ZoomFeel), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMultiTargetCamera_Statics::NewProp_ZoomFeel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiTargetCamera_Statics::NewProp_ZoomFeel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMultiTargetCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiTargetCamera_Statics::NewProp_target1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiTargetCamera_Statics::NewProp_target2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiTargetCamera_Statics::NewProp_ZOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiTargetCamera_Statics::NewProp_minDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiTargetCamera_Statics::NewProp_maxDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiTargetCamera_Statics::NewProp_ZoomFeel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMultiTargetCamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMultiTargetCamera>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMultiTargetCamera_Statics::ClassParams = {
		&UMultiTargetCamera::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMultiTargetCamera_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMultiTargetCamera_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMultiTargetCamera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiTargetCamera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMultiTargetCamera()
	{
		if (!Z_Registration_Info_UClass_UMultiTargetCamera.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMultiTargetCamera.OuterSingleton, Z_Construct_UClass_UMultiTargetCamera_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMultiTargetCamera.OuterSingleton;
	}
	template<> HENRIKGRAM_TEST_API UClass* StaticClass<UMultiTargetCamera>()
	{
		return UMultiTargetCamera::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMultiTargetCamera);
	struct Z_CompiledInDeferFile_FID_HenrikGram_Test_Source_HenrikGram_Test_MultiTargetCamera_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HenrikGram_Test_Source_HenrikGram_Test_MultiTargetCamera_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMultiTargetCamera, UMultiTargetCamera::StaticClass, TEXT("UMultiTargetCamera"), &Z_Registration_Info_UClass_UMultiTargetCamera, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMultiTargetCamera), 850170792U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HenrikGram_Test_Source_HenrikGram_Test_MultiTargetCamera_h_353614563(TEXT("/Script/HenrikGram_Test"),
		Z_CompiledInDeferFile_FID_HenrikGram_Test_Source_HenrikGram_Test_MultiTargetCamera_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HenrikGram_Test_Source_HenrikGram_Test_MultiTargetCamera_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
