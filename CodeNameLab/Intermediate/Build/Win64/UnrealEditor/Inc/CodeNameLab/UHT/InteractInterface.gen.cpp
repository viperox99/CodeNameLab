// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CodeNameLab/Interface/InteractInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractInterface() {}
// Cross Module References
	CODENAMELAB_API UClass* Z_Construct_UClass_UInteractInterface();
	CODENAMELAB_API UClass* Z_Construct_UClass_UInteractInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_CodeNameLab();
// End Cross Module References
	void UInteractInterface::StaticRegisterNativesUInteractInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractInterface);
	UClass* Z_Construct_UClass_UInteractInterface_NoRegister()
	{
		return UInteractInterface::StaticClass();
	}
	struct Z_Construct_UClass_UInteractInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CodeNameLab,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface/InteractInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractInterface_Statics::ClassParams = {
		&UInteractInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInteractInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractInterface()
	{
		if (!Z_Registration_Info_UClass_UInteractInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractInterface.OuterSingleton, Z_Construct_UClass_UInteractInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInteractInterface.OuterSingleton;
	}
	template<> CODENAMELAB_API UClass* StaticClass<UInteractInterface>()
	{
		return UInteractInterface::StaticClass();
	}
	UInteractInterface::UInteractInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractInterface);
	UInteractInterface::~UInteractInterface() {}
	struct Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Interface_InteractInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Interface_InteractInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInteractInterface, UInteractInterface::StaticClass, TEXT("UInteractInterface"), &Z_Registration_Info_UClass_UInteractInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractInterface), 2766265639U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Interface_InteractInterface_h_3975374632(TEXT("/Script/CodeNameLab"),
		Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Interface_InteractInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Interface_InteractInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
