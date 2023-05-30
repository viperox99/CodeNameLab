// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CodeNameLab/CodeNameLabGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCodeNameLabGameMode() {}
// Cross Module References
	CODENAMELAB_API UClass* Z_Construct_UClass_ACodeNameLabGameMode();
	CODENAMELAB_API UClass* Z_Construct_UClass_ACodeNameLabGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CodeNameLab();
// End Cross Module References
	void ACodeNameLabGameMode::StaticRegisterNativesACodeNameLabGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACodeNameLabGameMode);
	UClass* Z_Construct_UClass_ACodeNameLabGameMode_NoRegister()
	{
		return ACodeNameLabGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACodeNameLabGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACodeNameLabGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CodeNameLab,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACodeNameLabGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CodeNameLabGameMode.h" },
		{ "ModuleRelativePath", "CodeNameLabGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACodeNameLabGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACodeNameLabGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACodeNameLabGameMode_Statics::ClassParams = {
		&ACodeNameLabGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACodeNameLabGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACodeNameLabGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACodeNameLabGameMode()
	{
		if (!Z_Registration_Info_UClass_ACodeNameLabGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACodeNameLabGameMode.OuterSingleton, Z_Construct_UClass_ACodeNameLabGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACodeNameLabGameMode.OuterSingleton;
	}
	template<> CODENAMELAB_API UClass* StaticClass<ACodeNameLabGameMode>()
	{
		return ACodeNameLabGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACodeNameLabGameMode);
	ACodeNameLabGameMode::~ACodeNameLabGameMode() {}
	struct Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_CodeNameLabGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_CodeNameLabGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACodeNameLabGameMode, ACodeNameLabGameMode::StaticClass, TEXT("ACodeNameLabGameMode"), &Z_Registration_Info_UClass_ACodeNameLabGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACodeNameLabGameMode), 1112522109U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_CodeNameLabGameMode_h_1692093877(TEXT("/Script/CodeNameLab"),
		Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_CodeNameLabGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_CodeNameLabGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
