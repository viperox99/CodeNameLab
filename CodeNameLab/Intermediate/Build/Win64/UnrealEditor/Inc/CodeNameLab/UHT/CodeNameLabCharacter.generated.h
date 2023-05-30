// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CodeNameLabCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CODENAMELAB_CodeNameLabCharacter_generated_h
#error "CodeNameLabCharacter.generated.h already included, missing '#pragma once' in CodeNameLabCharacter.h"
#endif
#define CODENAMELAB_CodeNameLabCharacter_generated_h

#define FID_CodeNameLab_Source_CodeNameLab_CodeNameLabCharacter_h_20_SPARSE_DATA
#define FID_CodeNameLab_Source_CodeNameLab_CodeNameLabCharacter_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetHasRifle); \
	DECLARE_FUNCTION(execSetHasRifle);


#define FID_CodeNameLab_Source_CodeNameLab_CodeNameLabCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHasRifle); \
	DECLARE_FUNCTION(execSetHasRifle);


#define FID_CodeNameLab_Source_CodeNameLab_CodeNameLabCharacter_h_20_ACCESSORS
#define FID_CodeNameLab_Source_CodeNameLab_CodeNameLabCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACodeNameLabCharacter(); \
	friend struct Z_Construct_UClass_ACodeNameLabCharacter_Statics; \
public: \
	DECLARE_CLASS(ACodeNameLabCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CodeNameLab"), NO_API) \
	DECLARE_SERIALIZER(ACodeNameLabCharacter)


#define FID_CodeNameLab_Source_CodeNameLab_CodeNameLabCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesACodeNameLabCharacter(); \
	friend struct Z_Construct_UClass_ACodeNameLabCharacter_Statics; \
public: \
	DECLARE_CLASS(ACodeNameLabCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CodeNameLab"), NO_API) \
	DECLARE_SERIALIZER(ACodeNameLabCharacter)


#define FID_CodeNameLab_Source_CodeNameLab_CodeNameLabCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACodeNameLabCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACodeNameLabCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACodeNameLabCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACodeNameLabCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACodeNameLabCharacter(ACodeNameLabCharacter&&); \
	NO_API ACodeNameLabCharacter(const ACodeNameLabCharacter&); \
public: \
	NO_API virtual ~ACodeNameLabCharacter();


#define FID_CodeNameLab_Source_CodeNameLab_CodeNameLabCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACodeNameLabCharacter(ACodeNameLabCharacter&&); \
	NO_API ACodeNameLabCharacter(const ACodeNameLabCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACodeNameLabCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACodeNameLabCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACodeNameLabCharacter) \
	NO_API virtual ~ACodeNameLabCharacter();


#define FID_CodeNameLab_Source_CodeNameLab_CodeNameLabCharacter_h_17_PROLOG
#define FID_CodeNameLab_Source_CodeNameLab_CodeNameLabCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CodeNameLab_Source_CodeNameLab_CodeNameLabCharacter_h_20_SPARSE_DATA \
	FID_CodeNameLab_Source_CodeNameLab_CodeNameLabCharacter_h_20_RPC_WRAPPERS \
	FID_CodeNameLab_Source_CodeNameLab_CodeNameLabCharacter_h_20_ACCESSORS \
	FID_CodeNameLab_Source_CodeNameLab_CodeNameLabCharacter_h_20_INCLASS \
	FID_CodeNameLab_Source_CodeNameLab_CodeNameLabCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CodeNameLab_Source_CodeNameLab_CodeNameLabCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CodeNameLab_Source_CodeNameLab_CodeNameLabCharacter_h_20_SPARSE_DATA \
	FID_CodeNameLab_Source_CodeNameLab_CodeNameLabCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CodeNameLab_Source_CodeNameLab_CodeNameLabCharacter_h_20_ACCESSORS \
	FID_CodeNameLab_Source_CodeNameLab_CodeNameLabCharacter_h_20_INCLASS_NO_PURE_DECLS \
	FID_CodeNameLab_Source_CodeNameLab_CodeNameLabCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CODENAMELAB_API UClass* StaticClass<class ACodeNameLabCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CodeNameLab_Source_CodeNameLab_CodeNameLabCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
