// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interface/KeyInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CODENAMELAB_KeyInterface_generated_h
#error "KeyInterface.generated.h already included, missing '#pragma once' in KeyInterface.h"
#endif
#define CODENAMELAB_KeyInterface_generated_h

#define FID_CodeNameLab_Source_CodeNameLab_Interface_KeyInterface_h_22_SPARSE_DATA
#define FID_CodeNameLab_Source_CodeNameLab_Interface_KeyInterface_h_22_RPC_WRAPPERS
#define FID_CodeNameLab_Source_CodeNameLab_Interface_KeyInterface_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_CodeNameLab_Source_CodeNameLab_Interface_KeyInterface_h_22_ACCESSORS
#define FID_CodeNameLab_Source_CodeNameLab_Interface_KeyInterface_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CODENAMELAB_API UKeyInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKeyInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CODENAMELAB_API, UKeyInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKeyInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	CODENAMELAB_API UKeyInterface(UKeyInterface&&); \
	CODENAMELAB_API UKeyInterface(const UKeyInterface&); \
public: \
	CODENAMELAB_API virtual ~UKeyInterface();


#define FID_CodeNameLab_Source_CodeNameLab_Interface_KeyInterface_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CODENAMELAB_API UKeyInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	CODENAMELAB_API UKeyInterface(UKeyInterface&&); \
	CODENAMELAB_API UKeyInterface(const UKeyInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CODENAMELAB_API, UKeyInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKeyInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKeyInterface) \
	CODENAMELAB_API virtual ~UKeyInterface();


#define FID_CodeNameLab_Source_CodeNameLab_Interface_KeyInterface_h_22_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUKeyInterface(); \
	friend struct Z_Construct_UClass_UKeyInterface_Statics; \
public: \
	DECLARE_CLASS(UKeyInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/CodeNameLab"), CODENAMELAB_API) \
	DECLARE_SERIALIZER(UKeyInterface)


#define FID_CodeNameLab_Source_CodeNameLab_Interface_KeyInterface_h_22_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_CodeNameLab_Source_CodeNameLab_Interface_KeyInterface_h_22_GENERATED_UINTERFACE_BODY() \
	FID_CodeNameLab_Source_CodeNameLab_Interface_KeyInterface_h_22_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CodeNameLab_Source_CodeNameLab_Interface_KeyInterface_h_22_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_CodeNameLab_Source_CodeNameLab_Interface_KeyInterface_h_22_GENERATED_UINTERFACE_BODY() \
	FID_CodeNameLab_Source_CodeNameLab_Interface_KeyInterface_h_22_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CodeNameLab_Source_CodeNameLab_Interface_KeyInterface_h_22_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IKeyInterface() {} \
public: \
	typedef UKeyInterface UClassType; \
	typedef IKeyInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_CodeNameLab_Source_CodeNameLab_Interface_KeyInterface_h_22_INCLASS_IINTERFACE \
protected: \
	virtual ~IKeyInterface() {} \
public: \
	typedef UKeyInterface UClassType; \
	typedef IKeyInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_CodeNameLab_Source_CodeNameLab_Interface_KeyInterface_h_19_PROLOG
#define FID_CodeNameLab_Source_CodeNameLab_Interface_KeyInterface_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CodeNameLab_Source_CodeNameLab_Interface_KeyInterface_h_22_SPARSE_DATA \
	FID_CodeNameLab_Source_CodeNameLab_Interface_KeyInterface_h_22_RPC_WRAPPERS \
	FID_CodeNameLab_Source_CodeNameLab_Interface_KeyInterface_h_22_ACCESSORS \
	FID_CodeNameLab_Source_CodeNameLab_Interface_KeyInterface_h_22_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CodeNameLab_Source_CodeNameLab_Interface_KeyInterface_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CodeNameLab_Source_CodeNameLab_Interface_KeyInterface_h_22_SPARSE_DATA \
	FID_CodeNameLab_Source_CodeNameLab_Interface_KeyInterface_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CodeNameLab_Source_CodeNameLab_Interface_KeyInterface_h_22_ACCESSORS \
	FID_CodeNameLab_Source_CodeNameLab_Interface_KeyInterface_h_22_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CODENAMELAB_API UClass* StaticClass<class UKeyInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CodeNameLab_Source_CodeNameLab_Interface_KeyInterface_h


#define FOREACH_ENUM_EKEYTYPE(op) \
	op(VE_NumberKey) \
	op(VE_Physical) \
	op(VE_Keycard) \
	op(VE_NoKey) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
