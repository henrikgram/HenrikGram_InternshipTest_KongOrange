// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HenrikGram_Test/MonsterActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonsterActor() {}
// Cross Module References
	HENRIKGRAM_TEST_API UClass* Z_Construct_UClass_AMonsterActor_NoRegister();
	HENRIKGRAM_TEST_API UClass* Z_Construct_UClass_AMonsterActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_HenrikGram_Test();
	HENRIKGRAM_TEST_API UClass* Z_Construct_UClass_ALightManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	HENRIKGRAM_TEST_API UClass* Z_Construct_UClass_APlayerCharacter_NoRegister();
// End Cross Module References
	void AMonsterActor::StaticRegisterNativesAMonsterActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMonsterActor);
	UClass* Z_Construct_UClass_AMonsterActor_NoRegister()
	{
		return AMonsterActor::StaticClass();
	}
	struct Z_Construct_UClass_AMonsterActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lightManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_lightManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_movementSpeedLightsOn_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_movementSpeedLightsOn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_movementSpeedLightsOff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_movementSpeedLightsOff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlowdownStartDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SlowdownStartDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumSlowdown_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumSlowdown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlowdownCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SlowdownCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_moveDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_moveDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMonsterActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HenrikGram_Test,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MonsterActor.h" },
		{ "ModuleRelativePath", "MonsterActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterActor_Statics::NewProp_lightManager_MetaData[] = {
		{ "Category", "MonsterActor" },
		{ "Comment", "//TODO: read about uproperty\n" },
		{ "ModuleRelativePath", "MonsterActor.h" },
		{ "ToolTip", "TODO: read about uproperty" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMonsterActor_Statics::NewProp_lightManager = { "lightManager", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonsterActor, lightManager), Z_Construct_UClass_ALightManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMonsterActor_Statics::NewProp_lightManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterActor_Statics::NewProp_lightManager_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterActor_Statics::NewProp_movementSpeedLightsOn_MetaData[] = {
		{ "Category", "MonsterActor" },
		{ "ModuleRelativePath", "MonsterActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMonsterActor_Statics::NewProp_movementSpeedLightsOn = { "movementSpeedLightsOn", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonsterActor, movementSpeedLightsOn), METADATA_PARAMS(Z_Construct_UClass_AMonsterActor_Statics::NewProp_movementSpeedLightsOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterActor_Statics::NewProp_movementSpeedLightsOn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterActor_Statics::NewProp_movementSpeedLightsOff_MetaData[] = {
		{ "Category", "MonsterActor" },
		{ "ModuleRelativePath", "MonsterActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMonsterActor_Statics::NewProp_movementSpeedLightsOff = { "movementSpeedLightsOff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonsterActor, movementSpeedLightsOff), METADATA_PARAMS(Z_Construct_UClass_AMonsterActor_Statics::NewProp_movementSpeedLightsOff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterActor_Statics::NewProp_movementSpeedLightsOff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterActor_Statics::NewProp_SlowdownStartDistance_MetaData[] = {
		{ "Category", "MonsterActor" },
		{ "ModuleRelativePath", "MonsterActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMonsterActor_Statics::NewProp_SlowdownStartDistance = { "SlowdownStartDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonsterActor, SlowdownStartDistance), METADATA_PARAMS(Z_Construct_UClass_AMonsterActor_Statics::NewProp_SlowdownStartDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterActor_Statics::NewProp_SlowdownStartDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterActor_Statics::NewProp_MaximumSlowdown_MetaData[] = {
		{ "Category", "MonsterActor" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "MonsterActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMonsterActor_Statics::NewProp_MaximumSlowdown = { "MaximumSlowdown", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonsterActor, MaximumSlowdown), METADATA_PARAMS(Z_Construct_UClass_AMonsterActor_Statics::NewProp_MaximumSlowdown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterActor_Statics::NewProp_MaximumSlowdown_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterActor_Statics::NewProp_SlowdownCurve_MetaData[] = {
		{ "Category", "MonsterActor" },
		{ "ModuleRelativePath", "MonsterActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMonsterActor_Statics::NewProp_SlowdownCurve = { "SlowdownCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonsterActor, SlowdownCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMonsterActor_Statics::NewProp_SlowdownCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterActor_Statics::NewProp_SlowdownCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterActor_Statics::NewProp_moveDirection_MetaData[] = {
		{ "Category", "MonsterActor" },
		{ "ModuleRelativePath", "MonsterActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMonsterActor_Statics::NewProp_moveDirection = { "moveDirection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonsterActor, moveDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMonsterActor_Statics::NewProp_moveDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterActor_Statics::NewProp_moveDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterActor_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "MonsterActor" },
		{ "ModuleRelativePath", "MonsterActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMonsterActor_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonsterActor, Target), Z_Construct_UClass_APlayerCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMonsterActor_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterActor_Statics::NewProp_Target_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMonsterActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterActor_Statics::NewProp_lightManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterActor_Statics::NewProp_movementSpeedLightsOn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterActor_Statics::NewProp_movementSpeedLightsOff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterActor_Statics::NewProp_SlowdownStartDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterActor_Statics::NewProp_MaximumSlowdown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterActor_Statics::NewProp_SlowdownCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterActor_Statics::NewProp_moveDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterActor_Statics::NewProp_Target,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMonsterActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMonsterActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMonsterActor_Statics::ClassParams = {
		&AMonsterActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMonsterActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMonsterActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMonsterActor()
	{
		if (!Z_Registration_Info_UClass_AMonsterActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMonsterActor.OuterSingleton, Z_Construct_UClass_AMonsterActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMonsterActor.OuterSingleton;
	}
	template<> HENRIKGRAM_TEST_API UClass* StaticClass<AMonsterActor>()
	{
		return AMonsterActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMonsterActor);
	struct Z_CompiledInDeferFile_FID_HenrikGram_Test_Source_HenrikGram_Test_MonsterActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HenrikGram_Test_Source_HenrikGram_Test_MonsterActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMonsterActor, AMonsterActor::StaticClass, TEXT("AMonsterActor"), &Z_Registration_Info_UClass_AMonsterActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMonsterActor), 1421796667U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HenrikGram_Test_Source_HenrikGram_Test_MonsterActor_h_508172719(TEXT("/Script/HenrikGram_Test"),
		Z_CompiledInDeferFile_FID_HenrikGram_Test_Source_HenrikGram_Test_MonsterActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HenrikGram_Test_Source_HenrikGram_Test_MonsterActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
