// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interface/PuzzleInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CODENAMELAB_PuzzleInterface_generated_h
#error "PuzzleInterface.generated.h already included, missing '#pragma once' in PuzzleInterface.h"
#endif
#define CODENAMELAB_PuzzleInterface_generated_h

#define FID_CodeNameLab_Source_CodeNameLab_Interface_PuzzleInterface_h_13_SPARSE_DATA
#define FID_CodeNameLab_Source_CodeNameLab_Interface_PuzzleInterface_h_13_RPC_WRAPPERS
#define FID_CodeNameLab_Source_CodeNameLab_Interface_PuzzleInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_CodeNameLab_Source_CodeNameLab_Interface_PuzzleInterface_h_13_ACCESSORS
#define FID_CodeNameLab_Source_CodeNameLab_Interface_PuzzleInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CODENAMELAB_API UPuzzleInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPuzzleInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CODENAMELAB_API, UPuzzleInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPuzzleInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	CODENAMELAB_API UPuzzleInterface(UPuzzleInterface&&); \
	CODENAMELAB_API UPuzzleInterface(const UPuzzleInterface&); \
public: \
	CODENAMELAB_API virtual ~UPuzzleInterface();


#define FID_CodeNameLab_Source_CodeNameLab_Interface_PuzzleInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CODENAMELAB_API UPuzzleInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	CODENAMELAB_API UPuzzleInterface(UPuzzleInterface&&); \
	CODENAMELAB_API UPuzzleInterface(const UPuzzleInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CODENAMELAB_API, UPuzzleInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPuzzleInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPuzzleInterface) \
	CODENAMELAB_API virtual ~UPuzzleInterface();


#define FID_CodeNameLab_Source_CodeNameLab_Interface_PuzzleInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPuzzleInterface(); \
	friend struct Z_Construct_UClass_UPuzzleInterface_Statics; \
public: \
	DECLARE_CLASS(UPuzzleInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/CodeNameLab"), CODENAMELAB_API) \
	DECLARE_SERIALIZER(UPuzzleInterface)


#define FID_CodeNameLab_Source_CodeNameLab_Interface_PuzzleInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_CodeNameLab_Source_CodeNameLab_Interface_PuzzleInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_CodeNameLab_Source_CodeNameLab_Interface_PuzzleInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CodeNameLab_Source_CodeNameLab_Interface_PuzzleInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_CodeNameLab_Source_CodeNameLab_Interface_PuzzleInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_CodeNameLab_Source_CodeNameLab_Interface_PuzzleInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CodeNameLab_Source_CodeNameLab_Interface_PuzzleInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPuzzleInterface() {} \
public: \
	typedef UPuzzleInterface UClassType; \
	typedef IPuzzleInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_CodeNameLab_Source_CodeNameLab_Interface_PuzzleInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IPuzzleInterface() {} \
public: \
	typedef UPuzzleInterface UClassType; \
	typedef IPuzzleInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_CodeNameLab_Source_CodeNameLab_Interface_PuzzleInterface_h_10_PROLOG
#define FID_CodeNameLab_Source_CodeNameLab_Interface_PuzzleInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CodeNameLab_Source_CodeNameLab_Interface_PuzzleInterface_h_13_SPARSE_DATA \
	FID_CodeNameLab_Source_CodeNameLab_Interface_PuzzleInterface_h_13_RPC_WRAPPERS \
	FID_CodeNameLab_Source_CodeNameLab_Interface_PuzzleInterface_h_13_ACCESSORS \
	FID_CodeNameLab_Source_CodeNameLab_Interface_PuzzleInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CodeNameLab_Source_CodeNameLab_Interface_PuzzleInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CodeNameLab_Source_CodeNameLab_Interface_PuzzleInterface_h_13_SPARSE_DATA \
	FID_CodeNameLab_Source_CodeNameLab_Interface_PuzzleInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CodeNameLab_Source_CodeNameLab_Interface_PuzzleInterface_h_13_ACCESSORS \
	FID_CodeNameLab_Source_CodeNameLab_Interface_PuzzleInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CODENAMELAB_API UClass* StaticClass<class UPuzzleInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CodeNameLab_Source_CodeNameLab_Interface_PuzzleInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
