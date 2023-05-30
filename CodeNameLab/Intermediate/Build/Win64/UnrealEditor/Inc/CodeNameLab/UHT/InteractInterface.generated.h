// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interface/InteractInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CODENAMELAB_InteractInterface_generated_h
#error "InteractInterface.generated.h already included, missing '#pragma once' in InteractInterface.h"
#endif
#define CODENAMELAB_InteractInterface_generated_h

#define FID_CodeNameLab_Source_CodeNameLab_Interface_InteractInterface_h_13_SPARSE_DATA
#define FID_CodeNameLab_Source_CodeNameLab_Interface_InteractInterface_h_13_RPC_WRAPPERS
#define FID_CodeNameLab_Source_CodeNameLab_Interface_InteractInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_CodeNameLab_Source_CodeNameLab_Interface_InteractInterface_h_13_ACCESSORS
#define FID_CodeNameLab_Source_CodeNameLab_Interface_InteractInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CODENAMELAB_API UInteractInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CODENAMELAB_API, UInteractInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	CODENAMELAB_API UInteractInterface(UInteractInterface&&); \
	CODENAMELAB_API UInteractInterface(const UInteractInterface&); \
public: \
	CODENAMELAB_API virtual ~UInteractInterface();


#define FID_CodeNameLab_Source_CodeNameLab_Interface_InteractInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CODENAMELAB_API UInteractInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	CODENAMELAB_API UInteractInterface(UInteractInterface&&); \
	CODENAMELAB_API UInteractInterface(const UInteractInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CODENAMELAB_API, UInteractInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractInterface) \
	CODENAMELAB_API virtual ~UInteractInterface();


#define FID_CodeNameLab_Source_CodeNameLab_Interface_InteractInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractInterface(); \
	friend struct Z_Construct_UClass_UInteractInterface_Statics; \
public: \
	DECLARE_CLASS(UInteractInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/CodeNameLab"), CODENAMELAB_API) \
	DECLARE_SERIALIZER(UInteractInterface)


#define FID_CodeNameLab_Source_CodeNameLab_Interface_InteractInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_CodeNameLab_Source_CodeNameLab_Interface_InteractInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_CodeNameLab_Source_CodeNameLab_Interface_InteractInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CodeNameLab_Source_CodeNameLab_Interface_InteractInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_CodeNameLab_Source_CodeNameLab_Interface_InteractInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_CodeNameLab_Source_CodeNameLab_Interface_InteractInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CodeNameLab_Source_CodeNameLab_Interface_InteractInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractInterface() {} \
public: \
	typedef UInteractInterface UClassType; \
	typedef IInteractInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_CodeNameLab_Source_CodeNameLab_Interface_InteractInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IInteractInterface() {} \
public: \
	typedef UInteractInterface UClassType; \
	typedef IInteractInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_CodeNameLab_Source_CodeNameLab_Interface_InteractInterface_h_10_PROLOG
#define FID_CodeNameLab_Source_CodeNameLab_Interface_InteractInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CodeNameLab_Source_CodeNameLab_Interface_InteractInterface_h_13_SPARSE_DATA \
	FID_CodeNameLab_Source_CodeNameLab_Interface_InteractInterface_h_13_RPC_WRAPPERS \
	FID_CodeNameLab_Source_CodeNameLab_Interface_InteractInterface_h_13_ACCESSORS \
	FID_CodeNameLab_Source_CodeNameLab_Interface_InteractInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CodeNameLab_Source_CodeNameLab_Interface_InteractInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CodeNameLab_Source_CodeNameLab_Interface_InteractInterface_h_13_SPARSE_DATA \
	FID_CodeNameLab_Source_CodeNameLab_Interface_InteractInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CodeNameLab_Source_CodeNameLab_Interface_InteractInterface_h_13_ACCESSORS \
	FID_CodeNameLab_Source_CodeNameLab_Interface_InteractInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CODENAMELAB_API UClass* StaticClass<class UInteractInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CodeNameLab_Source_CodeNameLab_Interface_InteractInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
