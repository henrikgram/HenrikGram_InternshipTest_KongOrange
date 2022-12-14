// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef HENRIKGRAM_TEST_PlayerCharacter_generated_h
#error "PlayerCharacter.generated.h already included, missing '#pragma once' in PlayerCharacter.h"
#endif
#define HENRIKGRAM_TEST_PlayerCharacter_generated_h

#define FID_HenrikGram_Test_Source_HenrikGram_Test_PlayerCharacter_h_16_SPARSE_DATA
#define FID_HenrikGram_Test_Source_HenrikGram_Test_PlayerCharacter_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBeginOverlap);


#define FID_HenrikGram_Test_Source_HenrikGram_Test_PlayerCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBeginOverlap);


#define FID_HenrikGram_Test_Source_HenrikGram_Test_PlayerCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HenrikGram_Test"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define FID_HenrikGram_Test_Source_HenrikGram_Test_PlayerCharacter_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HenrikGram_Test"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define FID_HenrikGram_Test_Source_HenrikGram_Test_PlayerCharacter_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public:


#define FID_HenrikGram_Test_Source_HenrikGram_Test_PlayerCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCharacter)


#define FID_HenrikGram_Test_Source_HenrikGram_Test_PlayerCharacter_h_10_PROLOG
#define FID_HenrikGram_Test_Source_HenrikGram_Test_PlayerCharacter_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HenrikGram_Test_Source_HenrikGram_Test_PlayerCharacter_h_16_SPARSE_DATA \
	FID_HenrikGram_Test_Source_HenrikGram_Test_PlayerCharacter_h_16_RPC_WRAPPERS \
	FID_HenrikGram_Test_Source_HenrikGram_Test_PlayerCharacter_h_16_INCLASS \
	FID_HenrikGram_Test_Source_HenrikGram_Test_PlayerCharacter_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HenrikGram_Test_Source_HenrikGram_Test_PlayerCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HenrikGram_Test_Source_HenrikGram_Test_PlayerCharacter_h_16_SPARSE_DATA \
	FID_HenrikGram_Test_Source_HenrikGram_Test_PlayerCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HenrikGram_Test_Source_HenrikGram_Test_PlayerCharacter_h_16_INCLASS_NO_PURE_DECLS \
	FID_HenrikGram_Test_Source_HenrikGram_Test_PlayerCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HENRIKGRAM_TEST_API UClass* StaticClass<class APlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HenrikGram_Test_Source_HenrikGram_Test_PlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
