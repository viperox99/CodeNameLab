// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actor/PressurePlate.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef CODENAMELAB_PressurePlate_generated_h
#error "PressurePlate.generated.h already included, missing '#pragma once' in PressurePlate.h"
#endif
#define CODENAMELAB_PressurePlate_generated_h

#define FID_CodeNameLab_Source_CodeNameLab_Actor_PressurePlate_h_12_SPARSE_DATA
#define FID_CodeNameLab_Source_CodeNameLab_Actor_PressurePlate_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCollisionHit);


#define FID_CodeNameLab_Source_CodeNameLab_Actor_PressurePlate_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCollisionHit);


#define FID_CodeNameLab_Source_CodeNameLab_Actor_PressurePlate_h_12_ACCESSORS
#define FID_CodeNameLab_Source_CodeNameLab_Actor_PressurePlate_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPressurePlate(); \
	friend struct Z_Construct_UClass_APressurePlate_Statics; \
public: \
	DECLARE_CLASS(APressurePlate, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CodeNameLab"), NO_API) \
	DECLARE_SERIALIZER(APressurePlate)


#define FID_CodeNameLab_Source_CodeNameLab_Actor_PressurePlate_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPressurePlate(); \
	friend struct Z_Construct_UClass_APressurePlate_Statics; \
public: \
	DECLARE_CLASS(APressurePlate, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CodeNameLab"), NO_API) \
	DECLARE_SERIALIZER(APressurePlate)


#define FID_CodeNameLab_Source_CodeNameLab_Actor_PressurePlate_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APressurePlate(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APressurePlate) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APressurePlate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APressurePlate); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APressurePlate(APressurePlate&&); \
	NO_API APressurePlate(const APressurePlate&); \
public: \
	NO_API virtual ~APressurePlate();


#define FID_CodeNameLab_Source_CodeNameLab_Actor_PressurePlate_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APressurePlate(APressurePlate&&); \
	NO_API APressurePlate(const APressurePlate&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APressurePlate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APressurePlate); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APressurePlate) \
	NO_API virtual ~APressurePlate();


#define FID_CodeNameLab_Source_CodeNameLab_Actor_PressurePlate_h_9_PROLOG
#define FID_CodeNameLab_Source_CodeNameLab_Actor_PressurePlate_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CodeNameLab_Source_CodeNameLab_Actor_PressurePlate_h_12_SPARSE_DATA \
	FID_CodeNameLab_Source_CodeNameLab_Actor_PressurePlate_h_12_RPC_WRAPPERS \
	FID_CodeNameLab_Source_CodeNameLab_Actor_PressurePlate_h_12_ACCESSORS \
	FID_CodeNameLab_Source_CodeNameLab_Actor_PressurePlate_h_12_INCLASS \
	FID_CodeNameLab_Source_CodeNameLab_Actor_PressurePlate_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CodeNameLab_Source_CodeNameLab_Actor_PressurePlate_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CodeNameLab_Source_CodeNameLab_Actor_PressurePlate_h_12_SPARSE_DATA \
	FID_CodeNameLab_Source_CodeNameLab_Actor_PressurePlate_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CodeNameLab_Source_CodeNameLab_Actor_PressurePlate_h_12_ACCESSORS \
	FID_CodeNameLab_Source_CodeNameLab_Actor_PressurePlate_h_12_INCLASS_NO_PURE_DECLS \
	FID_CodeNameLab_Source_CodeNameLab_Actor_PressurePlate_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CODENAMELAB_API UClass* StaticClass<class APressurePlate>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CodeNameLab_Source_CodeNameLab_Actor_PressurePlate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
