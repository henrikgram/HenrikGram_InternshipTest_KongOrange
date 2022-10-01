// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacter;
#ifdef HENRIKGRAM_TEST_HenrikGram_TestGameModeBase_generated_h
#error "HenrikGram_TestGameModeBase.generated.h already included, missing '#pragma once' in HenrikGram_TestGameModeBase.h"
#endif
#define HENRIKGRAM_TEST_HenrikGram_TestGameModeBase_generated_h

#define FID_HenrikGram_Test_Source_HenrikGram_Test_HenrikGram_TestGameModeBase_h_13_DELEGATE \
struct _Script_HenrikGram_Test_eventOnPlayerDied_Parms \
{ \
	ACharacter* Character; \
}; \
static inline void FOnPlayerDied_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerDied, ACharacter* Character) \
{ \
	_Script_HenrikGram_Test_eventOnPlayerDied_Parms Parms; \
	Parms.Character=Character; \
	OnPlayerDied.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HenrikGram_Test_Source_HenrikGram_Test_HenrikGram_TestGameModeBase_h_18_SPARSE_DATA
#define FID_HenrikGram_Test_Source_HenrikGram_Test_HenrikGram_TestGameModeBase_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPlayerDied);


#define FID_HenrikGram_Test_Source_HenrikGram_Test_HenrikGram_TestGameModeBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPlayerDied);


#define FID_HenrikGram_Test_Source_HenrikGram_Test_HenrikGram_TestGameModeBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHenrikGram_TestGameModeBase(); \
	friend struct Z_Construct_UClass_AHenrikGram_TestGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AHenrikGram_TestGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/HenrikGram_Test"), NO_API) \
	DECLARE_SERIALIZER(AHenrikGram_TestGameModeBase)


#define FID_HenrikGram_Test_Source_HenrikGram_Test_HenrikGram_TestGameModeBase_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAHenrikGram_TestGameModeBase(); \
	friend struct Z_Construct_UClass_AHenrikGram_TestGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AHenrikGram_TestGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/HenrikGram_Test"), NO_API) \
	DECLARE_SERIALIZER(AHenrikGram_TestGameModeBase)


#define FID_HenrikGram_Test_Source_HenrikGram_Test_HenrikGram_TestGameModeBase_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHenrikGram_TestGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHenrikGram_TestGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHenrikGram_TestGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHenrikGram_TestGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHenrikGram_TestGameModeBase(AHenrikGram_TestGameModeBase&&); \
	NO_API AHenrikGram_TestGameModeBase(const AHenrikGram_TestGameModeBase&); \
public:


#define FID_HenrikGram_Test_Source_HenrikGram_Test_HenrikGram_TestGameModeBase_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHenrikGram_TestGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHenrikGram_TestGameModeBase(AHenrikGram_TestGameModeBase&&); \
	NO_API AHenrikGram_TestGameModeBase(const AHenrikGram_TestGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHenrikGram_TestGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHenrikGram_TestGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHenrikGram_TestGameModeBase)


#define FID_HenrikGram_Test_Source_HenrikGram_Test_HenrikGram_TestGameModeBase_h_15_PROLOG
#define FID_HenrikGram_Test_Source_HenrikGram_Test_HenrikGram_TestGameModeBase_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HenrikGram_Test_Source_HenrikGram_Test_HenrikGram_TestGameModeBase_h_18_SPARSE_DATA \
	FID_HenrikGram_Test_Source_HenrikGram_Test_HenrikGram_TestGameModeBase_h_18_RPC_WRAPPERS \
	FID_HenrikGram_Test_Source_HenrikGram_Test_HenrikGram_TestGameModeBase_h_18_INCLASS \
	FID_HenrikGram_Test_Source_HenrikGram_Test_HenrikGram_TestGameModeBase_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HenrikGram_Test_Source_HenrikGram_Test_HenrikGram_TestGameModeBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HenrikGram_Test_Source_HenrikGram_Test_HenrikGram_TestGameModeBase_h_18_SPARSE_DATA \
	FID_HenrikGram_Test_Source_HenrikGram_Test_HenrikGram_TestGameModeBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HenrikGram_Test_Source_HenrikGram_Test_HenrikGram_TestGameModeBase_h_18_INCLASS_NO_PURE_DECLS \
	FID_HenrikGram_Test_Source_HenrikGram_Test_HenrikGram_TestGameModeBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HENRIKGRAM_TEST_API UClass* StaticClass<class AHenrikGram_TestGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HenrikGram_Test_Source_HenrikGram_Test_HenrikGram_TestGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
