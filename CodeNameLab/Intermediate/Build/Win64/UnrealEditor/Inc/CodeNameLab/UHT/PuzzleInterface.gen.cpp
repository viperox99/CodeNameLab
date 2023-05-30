// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CodeNameLab/Interface/PuzzleInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuzzleInterface() {}
// Cross Module References
	CODENAMELAB_API UClass* Z_Construct_UClass_UPuzzleInterface();
	CODENAMELAB_API UClass* Z_Construct_UClass_UPuzzleInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_CodeNameLab();
// End Cross Module References
	void UPuzzleInterface::StaticRegisterNativesUPuzzleInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPuzzleInterface);
	UClass* Z_Construct_UClass_UPuzzleInterface_NoRegister()
	{
		return UPuzzleInterface::StaticClass();
	}
	struct Z_Construct_UClass_UPuzzleInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPuzzleInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CodeNameLab,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPuzzleInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface/PuzzleInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPuzzleInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPuzzleInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPuzzleInterface_Statics::ClassParams = {
		&UPuzzleInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPuzzleInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzleInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPuzzleInterface()
	{
		if (!Z_Registration_Info_UClass_UPuzzleInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPuzzleInterface.OuterSingleton, Z_Construct_UClass_UPuzzleInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPuzzleInterface.OuterSingleton;
	}
	template<> CODENAMELAB_API UClass* StaticClass<UPuzzleInterface>()
	{
		return UPuzzleInterface::StaticClass();
	}
	UPuzzleInterface::UPuzzleInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPuzzleInterface);
	UPuzzleInterface::~UPuzzleInterface() {}
	struct Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Interface_PuzzleInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Interface_PuzzleInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPuzzleInterface, UPuzzleInterface::StaticClass, TEXT("UPuzzleInterface"), &Z_Registration_Info_UClass_UPuzzleInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPuzzleInterface), 3530547163U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Interface_PuzzleInterface_h_1210057620(TEXT("/Script/CodeNameLab"),
		Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Interface_PuzzleInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Interface_PuzzleInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
