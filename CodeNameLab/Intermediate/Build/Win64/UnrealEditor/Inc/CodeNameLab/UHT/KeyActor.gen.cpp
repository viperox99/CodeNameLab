// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CodeNameLab/Actor/KeyActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKeyActor() {}
// Cross Module References
	CODENAMELAB_API UClass* Z_Construct_UClass_AKeyActor();
	CODENAMELAB_API UClass* Z_Construct_UClass_AKeyActor_NoRegister();
	CODENAMELAB_API UClass* Z_Construct_UClass_UInteractInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CodeNameLab();
// End Cross Module References
	void AKeyActor::StaticRegisterNativesAKeyActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AKeyActor);
	UClass* Z_Construct_UClass_AKeyActor_NoRegister()
	{
		return AKeyActor::StaticClass();
	}
	struct Z_Construct_UClass_AKeyActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKeyActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CodeNameLab,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKeyActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/KeyActor.h" },
		{ "ModuleRelativePath", "Actor/KeyActor.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AKeyActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractInterface_NoRegister, (int32)VTABLE_OFFSET(AKeyActor, IInteractInterface), false },  // 2766265639
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKeyActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKeyActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AKeyActor_Statics::ClassParams = {
		&AKeyActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AKeyActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AKeyActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKeyActor()
	{
		if (!Z_Registration_Info_UClass_AKeyActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKeyActor.OuterSingleton, Z_Construct_UClass_AKeyActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AKeyActor.OuterSingleton;
	}
	template<> CODENAMELAB_API UClass* StaticClass<AKeyActor>()
	{
		return AKeyActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKeyActor);
	AKeyActor::~AKeyActor() {}
	struct Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Actor_KeyActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Actor_KeyActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AKeyActor, AKeyActor::StaticClass, TEXT("AKeyActor"), &Z_Registration_Info_UClass_AKeyActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKeyActor), 1918528547U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Actor_KeyActor_h_2435988008(TEXT("/Script/CodeNameLab"),
		Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Actor_KeyActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Actor_KeyActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
