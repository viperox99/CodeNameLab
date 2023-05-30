// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CodeNameLab/Interface/WeightInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeightInterface() {}
// Cross Module References
	CODENAMELAB_API UClass* Z_Construct_UClass_UWeightInterface();
	CODENAMELAB_API UClass* Z_Construct_UClass_UWeightInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_CodeNameLab();
// End Cross Module References
	void UWeightInterface::StaticRegisterNativesUWeightInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWeightInterface);
	UClass* Z_Construct_UClass_UWeightInterface_NoRegister()
	{
		return UWeightInterface::StaticClass();
	}
	struct Z_Construct_UClass_UWeightInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWeightInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CodeNameLab,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeightInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface/WeightInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWeightInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IWeightInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeightInterface_Statics::ClassParams = {
		&UWeightInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWeightInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWeightInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWeightInterface()
	{
		if (!Z_Registration_Info_UClass_UWeightInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeightInterface.OuterSingleton, Z_Construct_UClass_UWeightInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWeightInterface.OuterSingleton;
	}
	template<> CODENAMELAB_API UClass* StaticClass<UWeightInterface>()
	{
		return UWeightInterface::StaticClass();
	}
	UWeightInterface::UWeightInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWeightInterface);
	UWeightInterface::~UWeightInterface() {}
	struct Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Interface_WeightInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Interface_WeightInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWeightInterface, UWeightInterface::StaticClass, TEXT("UWeightInterface"), &Z_Registration_Info_UClass_UWeightInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeightInterface), 3990923260U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Interface_WeightInterface_h_4206173347(TEXT("/Script/CodeNameLab"),
		Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Interface_WeightInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Interface_WeightInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
