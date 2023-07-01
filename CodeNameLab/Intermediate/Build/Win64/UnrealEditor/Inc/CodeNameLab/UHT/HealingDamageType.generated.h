// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actor/DamageType/HealingDamageType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CODENAMELAB_HealingDamageType_generated_h
#error "HealingDamageType.generated.h already included, missing '#pragma once' in HealingDamageType.h"
#endif
#define CODENAMELAB_HealingDamageType_generated_h

#define FID_CodeNameLab_Source_CodeNameLab_Actor_DamageType_HealingDamageType_h_22_SPARSE_DATA
#define FID_CodeNameLab_Source_CodeNameLab_Actor_DamageType_HealingDamageType_h_22_RPC_WRAPPERS
#define FID_CodeNameLab_Source_CodeNameLab_Actor_DamageType_HealingDamageType_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_CodeNameLab_Source_CodeNameLab_Actor_DamageType_HealingDamageType_h_22_ACCESSORS
#define FID_CodeNameLab_Source_CodeNameLab_Actor_DamageType_HealingDamageType_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHealingDamageType(); \
	friend struct Z_Construct_UClass_UHealingDamageType_Statics; \
public: \
	DECLARE_CLASS(UHealingDamageType, UDamageType, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CodeNameLab"), NO_API) \
	DECLARE_SERIALIZER(UHealingDamageType)


#define FID_CodeNameLab_Source_CodeNameLab_Actor_DamageType_HealingDamageType_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUHealingDamageType(); \
	friend struct Z_Construct_UClass_UHealingDamageType_Statics; \
public: \
	DECLARE_CLASS(UHealingDamageType, UDamageType, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CodeNameLab"), NO_API) \
	DECLARE_SERIALIZER(UHealingDamageType)


#define FID_CodeNameLab_Source_CodeNameLab_Actor_DamageType_HealingDamageType_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHealingDamageType(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHealingDamageType) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealingDamageType); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealingDamageType); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealingDamageType(UHealingDamageType&&); \
	NO_API UHealingDamageType(const UHealingDamageType&); \
public: \
	NO_API virtual ~UHealingDamageType();


#define FID_CodeNameLab_Source_CodeNameLab_Actor_DamageType_HealingDamageType_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHealingDamageType(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealingDamageType(UHealingDamageType&&); \
	NO_API UHealingDamageType(const UHealingDamageType&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealingDamageType); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealingDamageType); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHealingDamageType) \
	NO_API virtual ~UHealingDamageType();


#define FID_CodeNameLab_Source_CodeNameLab_Actor_DamageType_HealingDamageType_h_19_PROLOG
#define FID_CodeNameLab_Source_CodeNameLab_Actor_DamageType_HealingDamageType_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CodeNameLab_Source_CodeNameLab_Actor_DamageType_HealingDamageType_h_22_SPARSE_DATA \
	FID_CodeNameLab_Source_CodeNameLab_Actor_DamageType_HealingDamageType_h_22_RPC_WRAPPERS \
	FID_CodeNameLab_Source_CodeNameLab_Actor_DamageType_HealingDamageType_h_22_ACCESSORS \
	FID_CodeNameLab_Source_CodeNameLab_Actor_DamageType_HealingDamageType_h_22_INCLASS \
	FID_CodeNameLab_Source_CodeNameLab_Actor_DamageType_HealingDamageType_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CodeNameLab_Source_CodeNameLab_Actor_DamageType_HealingDamageType_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CodeNameLab_Source_CodeNameLab_Actor_DamageType_HealingDamageType_h_22_SPARSE_DATA \
	FID_CodeNameLab_Source_CodeNameLab_Actor_DamageType_HealingDamageType_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CodeNameLab_Source_CodeNameLab_Actor_DamageType_HealingDamageType_h_22_ACCESSORS \
	FID_CodeNameLab_Source_CodeNameLab_Actor_DamageType_HealingDamageType_h_22_INCLASS_NO_PURE_DECLS \
	FID_CodeNameLab_Source_CodeNameLab_Actor_DamageType_HealingDamageType_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CODENAMELAB_API UClass* StaticClass<class UHealingDamageType>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CodeNameLab_Source_CodeNameLab_Actor_DamageType_HealingDamageType_h


#define FOREACH_ENUM_EDAMAGETYPE(op) \
	op(VE_Healing) \
	op(VE_Damage) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
