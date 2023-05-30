// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CodeNameLabProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef CODENAMELAB_CodeNameLabProjectile_generated_h
#error "CodeNameLabProjectile.generated.h already included, missing '#pragma once' in CodeNameLabProjectile.h"
#endif
#define CODENAMELAB_CodeNameLabProjectile_generated_h

#define FID_CodeNameLab_Source_CodeNameLab_CodeNameLabProjectile_h_15_SPARSE_DATA
#define FID_CodeNameLab_Source_CodeNameLab_CodeNameLabProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_CodeNameLab_Source_CodeNameLab_CodeNameLabProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_CodeNameLab_Source_CodeNameLab_CodeNameLabProjectile_h_15_ACCESSORS
#define FID_CodeNameLab_Source_CodeNameLab_CodeNameLabProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACodeNameLabProjectile(); \
	friend struct Z_Construct_UClass_ACodeNameLabProjectile_Statics; \
public: \
	DECLARE_CLASS(ACodeNameLabProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CodeNameLab"), NO_API) \
	DECLARE_SERIALIZER(ACodeNameLabProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_CodeNameLab_Source_CodeNameLab_CodeNameLabProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesACodeNameLabProjectile(); \
	friend struct Z_Construct_UClass_ACodeNameLabProjectile_Statics; \
public: \
	DECLARE_CLASS(ACodeNameLabProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CodeNameLab"), NO_API) \
	DECLARE_SERIALIZER(ACodeNameLabProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_CodeNameLab_Source_CodeNameLab_CodeNameLabProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACodeNameLabProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACodeNameLabProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACodeNameLabProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACodeNameLabProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACodeNameLabProjectile(ACodeNameLabProjectile&&); \
	NO_API ACodeNameLabProjectile(const ACodeNameLabProjectile&); \
public: \
	NO_API virtual ~ACodeNameLabProjectile();


#define FID_CodeNameLab_Source_CodeNameLab_CodeNameLabProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACodeNameLabProjectile(ACodeNameLabProjectile&&); \
	NO_API ACodeNameLabProjectile(const ACodeNameLabProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACodeNameLabProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACodeNameLabProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACodeNameLabProjectile) \
	NO_API virtual ~ACodeNameLabProjectile();


#define FID_CodeNameLab_Source_CodeNameLab_CodeNameLabProjectile_h_12_PROLOG
#define FID_CodeNameLab_Source_CodeNameLab_CodeNameLabProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CodeNameLab_Source_CodeNameLab_CodeNameLabProjectile_h_15_SPARSE_DATA \
	FID_CodeNameLab_Source_CodeNameLab_CodeNameLabProjectile_h_15_RPC_WRAPPERS \
	FID_CodeNameLab_Source_CodeNameLab_CodeNameLabProjectile_h_15_ACCESSORS \
	FID_CodeNameLab_Source_CodeNameLab_CodeNameLabProjectile_h_15_INCLASS \
	FID_CodeNameLab_Source_CodeNameLab_CodeNameLabProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CodeNameLab_Source_CodeNameLab_CodeNameLabProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CodeNameLab_Source_CodeNameLab_CodeNameLabProjectile_h_15_SPARSE_DATA \
	FID_CodeNameLab_Source_CodeNameLab_CodeNameLabProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CodeNameLab_Source_CodeNameLab_CodeNameLabProjectile_h_15_ACCESSORS \
	FID_CodeNameLab_Source_CodeNameLab_CodeNameLabProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_CodeNameLab_Source_CodeNameLab_CodeNameLabProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CODENAMELAB_API UClass* StaticClass<class ACodeNameLabProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CodeNameLab_Source_CodeNameLab_CodeNameLabProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
