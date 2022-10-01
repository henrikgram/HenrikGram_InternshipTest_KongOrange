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
	HENRIKGRAM_TEST_API UFunction* Z_Construct_UDelegateFunction_HenrikGram_Test_OnPlayerDied__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_HenrikGram_Test();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	HENRIKGRAM_TEST_API UClass* Z_Construct_UClass_AHenrikGram_TestGameModeBase_NoRegister();
	HENRIKGRAM_TEST_API UClass* Z_Construct_UClass_AHenrikGram_TestGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_HenrikGram_Test_OnPlayerDied__DelegateSignature_Statics
	{
		struct _Script_HenrikGram_Test_eventOnPlayerDied_Parms
		{
			ACharacter* Character;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_HenrikGram_Test_OnPlayerDied__DelegateSignature_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_HenrikGram_Test_eventOnPlayerDied_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_HenrikGram_Test_OnPlayerDied__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HenrikGram_Test_OnPlayerDied__DelegateSignature_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HenrikGram_Test_OnPlayerDied__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "HenrikGram_TestGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_HenrikGram_Test_OnPlayerDied__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HenrikGram_Test, nullptr, "OnPlayerDied__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_HenrikGram_Test_OnPlayerDied__DelegateSignature_Statics::_Script_HenrikGram_Test_eventOnPlayerDied_Parms), Z_Construct_UDelegateFunction_HenrikGram_Test_OnPlayerDied__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HenrikGram_Test_OnPlayerDied__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_HenrikGram_Test_OnPlayerDied__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HenrikGram_Test_OnPlayerDied__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_HenrikGram_Test_OnPlayerDied__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_HenrikGram_Test_OnPlayerDied__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AHenrikGram_TestGameModeBase::execPlayerDied)
	{
		P_GET_OBJECT(ACharacter,Z_Param_Character);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayerDied(Z_Param_Character);
		P_NATIVE_END;
	}
	void AHenrikGram_TestGameModeBase::StaticRegisterNativesAHenrikGram_TestGameModeBase()
	{
		UClass* Class = AHenrikGram_TestGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlayerDied", &AHenrikGram_TestGameModeBase::execPlayerDied },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHenrikGram_TestGameModeBase_PlayerDied_Statics
	{
		struct HenrikGram_TestGameModeBase_eventPlayerDied_Parms
		{
			ACharacter* Character;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHenrikGram_TestGameModeBase_PlayerDied_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HenrikGram_TestGameModeBase_eventPlayerDied_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHenrikGram_TestGameModeBase_PlayerDied_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHenrikGram_TestGameModeBase_PlayerDied_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHenrikGram_TestGameModeBase_PlayerDied_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Called when Player character has died.\n" },
		{ "ModuleRelativePath", "HenrikGram_TestGameModeBase.h" },
		{ "ToolTip", "Called when Player character has died." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHenrikGram_TestGameModeBase_PlayerDied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHenrikGram_TestGameModeBase, nullptr, "PlayerDied", nullptr, nullptr, sizeof(Z_Construct_UFunction_AHenrikGram_TestGameModeBase_PlayerDied_Statics::HenrikGram_TestGameModeBase_eventPlayerDied_Parms), Z_Construct_UFunction_AHenrikGram_TestGameModeBase_PlayerDied_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHenrikGram_TestGameModeBase_PlayerDied_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHenrikGram_TestGameModeBase_PlayerDied_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHenrikGram_TestGameModeBase_PlayerDied_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHenrikGram_TestGameModeBase_PlayerDied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHenrikGram_TestGameModeBase_PlayerDied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHenrikGram_TestGameModeBase);
	UClass* Z_Construct_UClass_AHenrikGram_TestGameModeBase_NoRegister()
	{
		return AHenrikGram_TestGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AHenrikGram_TestGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayerDied_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerDied;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHenrikGram_TestGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_HenrikGram_Test,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHenrikGram_TestGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHenrikGram_TestGameModeBase_PlayerDied, "PlayerDied" }, // 174255802
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHenrikGram_TestGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "HenrikGram_TestGameModeBase.h" },
		{ "ModuleRelativePath", "HenrikGram_TestGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHenrikGram_TestGameModeBase_Statics::NewProp_OnPlayerDied_MetaData[] = {
		{ "Comment", "//Signature to bind delegate. \n" },
		{ "ModuleRelativePath", "HenrikGram_TestGameModeBase.h" },
		{ "ToolTip", "Signature to bind delegate." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AHenrikGram_TestGameModeBase_Statics::NewProp_OnPlayerDied = { "OnPlayerDied", nullptr, (EPropertyFlags)0x0020080000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHenrikGram_TestGameModeBase, OnPlayerDied), Z_Construct_UDelegateFunction_HenrikGram_Test_OnPlayerDied__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AHenrikGram_TestGameModeBase_Statics::NewProp_OnPlayerDied_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHenrikGram_TestGameModeBase_Statics::NewProp_OnPlayerDied_MetaData)) }; // 3575277465
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHenrikGram_TestGameModeBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHenrikGram_TestGameModeBase_Statics::NewProp_OnPlayerDied,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHenrikGram_TestGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHenrikGram_TestGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHenrikGram_TestGameModeBase_Statics::ClassParams = {
		&AHenrikGram_TestGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHenrikGram_TestGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AHenrikGram_TestGameModeBase_Statics::PropPointers),
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
		{ Z_Construct_UClass_AHenrikGram_TestGameModeBase, AHenrikGram_TestGameModeBase::StaticClass, TEXT("AHenrikGram_TestGameModeBase"), &Z_Registration_Info_UClass_AHenrikGram_TestGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHenrikGram_TestGameModeBase), 3145937543U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HenrikGram_Test_Source_HenrikGram_Test_HenrikGram_TestGameModeBase_h_3088648303(TEXT("/Script/HenrikGram_Test"),
		Z_CompiledInDeferFile_FID_HenrikGram_Test_Source_HenrikGram_Test_HenrikGram_TestGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HenrikGram_Test_Source_HenrikGram_Test_HenrikGram_TestGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
