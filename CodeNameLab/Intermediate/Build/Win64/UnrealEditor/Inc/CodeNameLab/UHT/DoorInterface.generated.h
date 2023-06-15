// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interface/DoorInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CODENAMELAB_DoorInterface_generated_h
#error "DoorInterface.generated.h already included, missing '#pragma once' in DoorInterface.h"
#endif
#define CODENAMELAB_DoorInterface_generated_h

#define FID_CodeNameLab_Source_CodeNameLab_Interface_DoorInterface_h_23_SPARSE_DATA
#define FID_CodeNameLab_Source_CodeNameLab_Interface_DoorInterface_h_23_RPC_WRAPPERS
#define FID_CodeNameLab_Source_CodeNameLab_Interface_DoorInterface_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_CodeNameLab_Source_CodeNameLab_Interface_DoorInterface_h_23_ACCESSORS
#define FID_CodeNameLab_Source_CodeNameLab_Interface_DoorInterface_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CODENAMELAB_API UDoorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDoorInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CODENAMELAB_API, UDoorInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDoorInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	CODENAMELAB_API UDoorInterface(UDoorInterface&&); \
	CODENAMELAB_API UDoorInterface(const UDoorInterface&); \
public: \
	CODENAMELAB_API virtual ~UDoorInterface();


#define FID_CodeNameLab_Source_CodeNameLab_Interface_DoorInterface_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CODENAMELAB_API UDoorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	CODENAMELAB_API UDoorInterface(UDoorInterface&&); \
	CODENAMELAB_API UDoorInterface(const UDoorInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CODENAMELAB_API, UDoorInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDoorInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDoorInterface) \
	CODENAMELAB_API virtual ~UDoorInterface();


#define FID_CodeNameLab_Source_CodeNameLab_Interface_DoorInterface_h_23_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDoorInterface(); \
	friend struct Z_Construct_UClass_UDoorInterface_Statics; \
public: \
	DECLARE_CLASS(UDoorInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/CodeNameLab"), CODENAMELAB_API) \
	DECLARE_SERIALIZER(UDoorInterface)


#define FID_CodeNameLab_Source_CodeNameLab_Interface_DoorInterface_h_23_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_CodeNameLab_Source_CodeNameLab_Interface_DoorInterface_h_23_GENERATED_UINTERFACE_BODY() \
	FID_CodeNameLab_Source_CodeNameLab_Interface_DoorInterface_h_23_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CodeNameLab_Source_CodeNameLab_Interface_DoorInterface_h_23_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_CodeNameLab_Source_CodeNameLab_Interface_DoorInterface_h_23_GENERATED_UINTERFACE_BODY() \
	FID_CodeNameLab_Source_CodeNameLab_Interface_DoorInterface_h_23_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CodeNameLab_Source_CodeNameLab_Interface_DoorInterface_h_23_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDoorInterface() {} \
public: \
	typedef UDoorInterface UClassType; \
	typedef IDoorInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_CodeNameLab_Source_CodeNameLab_Interface_DoorInterface_h_23_INCLASS_IINTERFACE \
protected: \
	virtual ~IDoorInterface() {} \
public: \
	typedef UDoorInterface UClassType; \
	typedef IDoorInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_CodeNameLab_Source_CodeNameLab_Interface_DoorInterface_h_20_PROLOG
#define FID_CodeNameLab_Source_CodeNameLab_Interface_DoorInterface_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CodeNameLab_Source_CodeNameLab_Interface_DoorInterface_h_23_SPARSE_DATA \
	FID_CodeNameLab_Source_CodeNameLab_Interface_DoorInterface_h_23_RPC_WRAPPERS \
	FID_CodeNameLab_Source_CodeNameLab_Interface_DoorInterface_h_23_ACCESSORS \
	FID_CodeNameLab_Source_CodeNameLab_Interface_DoorInterface_h_23_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CodeNameLab_Source_CodeNameLab_Interface_DoorInterface_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CodeNameLab_Source_CodeNameLab_Interface_DoorInterface_h_23_SPARSE_DATA \
	FID_CodeNameLab_Source_CodeNameLab_Interface_DoorInterface_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CodeNameLab_Source_CodeNameLab_Interface_DoorInterface_h_23_ACCESSORS \
	FID_CodeNameLab_Source_CodeNameLab_Interface_DoorInterface_h_23_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CODENAMELAB_API UClass* StaticClass<class UDoorInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CodeNameLab_Source_CodeNameLab_Interface_DoorInterface_h


#define FOREACH_ENUM_ELOCKTYPE(op) \
	op(VE_None) \
	op(VE_Never) \
	op(VE_Key) \
	op(VE_KeyCard) \
	op(VE_Number) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
