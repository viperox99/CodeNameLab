// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CodeNameLab/Actor/BaseGunWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseGunWeapon() {}
// Cross Module References
	CODENAMELAB_API UClass* Z_Construct_UClass_ABaseGunWeapon();
	CODENAMELAB_API UClass* Z_Construct_UClass_ABaseGunWeapon_NoRegister();
	CODENAMELAB_API UClass* Z_Construct_UClass_UInteractInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CodeNameLab();
// End Cross Module References
	void ABaseGunWeapon::StaticRegisterNativesABaseGunWeapon()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseGunWeapon);
	UClass* Z_Construct_UClass_ABaseGunWeapon_NoRegister()
	{
		return ABaseGunWeapon::StaticClass();
	}
	struct Z_Construct_UClass_ABaseGunWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleLocation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MuzzleLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Range;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseGunWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CodeNameLab,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGunWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/BaseGunWeapon.h" },
		{ "ModuleRelativePath", "Actor/BaseGunWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGunWeapon_Statics::NewProp_MeshComp_MetaData[] = {
		{ "Category", "BaseGunWeapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actor/BaseGunWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseGunWeapon_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseGunWeapon, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseGunWeapon_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGunWeapon_Statics::NewProp_MeshComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGunWeapon_Statics::NewProp_MuzzleLocation_MetaData[] = {
		{ "Category", "BaseGunWeapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actor/BaseGunWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseGunWeapon_Statics::NewProp_MuzzleLocation = { "MuzzleLocation", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseGunWeapon, MuzzleLocation), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseGunWeapon_Statics::NewProp_MuzzleLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGunWeapon_Statics::NewProp_MuzzleLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGunWeapon_Statics::NewProp_Range_MetaData[] = {
		{ "Category", "LineTrace" },
		{ "ModuleRelativePath", "Actor/BaseGunWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseGunWeapon_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseGunWeapon, Range), METADATA_PARAMS(Z_Construct_UClass_ABaseGunWeapon_Statics::NewProp_Range_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGunWeapon_Statics::NewProp_Range_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseGunWeapon_Statics::NewProp_Sound_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Actor/BaseGunWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseGunWeapon_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseGunWeapon, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseGunWeapon_Statics::NewProp_Sound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGunWeapon_Statics::NewProp_Sound_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseGunWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGunWeapon_Statics::NewProp_MeshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGunWeapon_Statics::NewProp_MuzzleLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGunWeapon_Statics::NewProp_Range,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseGunWeapon_Statics::NewProp_Sound,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABaseGunWeapon_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractInterface_NoRegister, (int32)VTABLE_OFFSET(ABaseGunWeapon, IInteractInterface), false },  // 2766265639
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseGunWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseGunWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseGunWeapon_Statics::ClassParams = {
		&ABaseGunWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABaseGunWeapon_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGunWeapon_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseGunWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseGunWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseGunWeapon()
	{
		if (!Z_Registration_Info_UClass_ABaseGunWeapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseGunWeapon.OuterSingleton, Z_Construct_UClass_ABaseGunWeapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABaseGunWeapon.OuterSingleton;
	}
	template<> CODENAMELAB_API UClass* StaticClass<ABaseGunWeapon>()
	{
		return ABaseGunWeapon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseGunWeapon);
	ABaseGunWeapon::~ABaseGunWeapon() {}
	struct Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Actor_BaseGunWeapon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Actor_BaseGunWeapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABaseGunWeapon, ABaseGunWeapon::StaticClass, TEXT("ABaseGunWeapon"), &Z_Registration_Info_UClass_ABaseGunWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseGunWeapon), 190787317U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Actor_BaseGunWeapon_h_2404248269(TEXT("/Script/CodeNameLab"),
		Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Actor_BaseGunWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Actor_BaseGunWeapon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
