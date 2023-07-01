// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CodeNameLab/Actor/DamageType/HealingDamageType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealingDamageType() {}
// Cross Module References
	CODENAMELAB_API UClass* Z_Construct_UClass_UHealingDamageType();
	CODENAMELAB_API UClass* Z_Construct_UClass_UHealingDamageType_NoRegister();
	CODENAMELAB_API UEnum* Z_Construct_UEnum_CodeNameLab_EDamageType();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType();
	UPackage* Z_Construct_UPackage__Script_CodeNameLab();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDamageType;
	static UEnum* EDamageType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDamageType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDamageType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CodeNameLab_EDamageType, (UObject*)Z_Construct_UPackage__Script_CodeNameLab(), TEXT("EDamageType"));
		}
		return Z_Registration_Info_UEnum_EDamageType.OuterSingleton;
	}
	template<> CODENAMELAB_API UEnum* StaticEnum<EDamageType>()
	{
		return EDamageType_StaticEnum();
	}
	struct Z_Construct_UEnum_CodeNameLab_EDamageType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CodeNameLab_EDamageType_Statics::Enumerators[] = {
		{ "VE_Healing", (int64)VE_Healing },
		{ "VE_Damage", (int64)VE_Damage },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CodeNameLab_EDamageType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Actor/DamageType/HealingDamageType.h" },
		{ "VE_Damage.Name", "VE_Damage" },
		{ "VE_Healing.Name", "VE_Healing" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CodeNameLab_EDamageType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CodeNameLab,
		nullptr,
		"EDamageType",
		"EDamageType",
		Z_Construct_UEnum_CodeNameLab_EDamageType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CodeNameLab_EDamageType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_CodeNameLab_EDamageType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CodeNameLab_EDamageType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CodeNameLab_EDamageType()
	{
		if (!Z_Registration_Info_UEnum_EDamageType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDamageType.InnerSingleton, Z_Construct_UEnum_CodeNameLab_EDamageType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDamageType.InnerSingleton;
	}
	void UHealingDamageType::StaticRegisterNativesUHealingDamageType()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHealingDamageType);
	UClass* Z_Construct_UClass_UHealingDamageType_NoRegister()
	{
		return UHealingDamageType::StaticClass();
	}
	struct Z_Construct_UClass_UHealingDamageType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AffectOnActor_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AffectOnActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHealingDamageType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDamageType,
		(UObject* (*)())Z_Construct_UPackage__Script_CodeNameLab,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealingDamageType_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Actor/DamageType/HealingDamageType.h" },
		{ "ModuleRelativePath", "Actor/DamageType/HealingDamageType.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealingDamageType_Statics::NewProp_AffectOnActor_MetaData[] = {
		{ "ModuleRelativePath", "Actor/DamageType/HealingDamageType.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHealingDamageType_Statics::NewProp_AffectOnActor = { "AffectOnActor", nullptr, (EPropertyFlags)0x0040000000000010, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHealingDamageType, AffectOnActor), Z_Construct_UEnum_CodeNameLab_EDamageType, METADATA_PARAMS(Z_Construct_UClass_UHealingDamageType_Statics::NewProp_AffectOnActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHealingDamageType_Statics::NewProp_AffectOnActor_MetaData)) }; // 1841042454
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHealingDamageType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealingDamageType_Statics::NewProp_AffectOnActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHealingDamageType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHealingDamageType>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHealingDamageType_Statics::ClassParams = {
		&UHealingDamageType::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHealingDamageType_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHealingDamageType_Statics::PropPointers),
		0,
		0x001100A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHealingDamageType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHealingDamageType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHealingDamageType()
	{
		if (!Z_Registration_Info_UClass_UHealingDamageType.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHealingDamageType.OuterSingleton, Z_Construct_UClass_UHealingDamageType_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHealingDamageType.OuterSingleton;
	}
	template<> CODENAMELAB_API UClass* StaticClass<UHealingDamageType>()
	{
		return UHealingDamageType::StaticClass();
	}
	UHealingDamageType::UHealingDamageType(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHealingDamageType);
	UHealingDamageType::~UHealingDamageType() {}
	struct Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Actor_DamageType_HealingDamageType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Actor_DamageType_HealingDamageType_h_Statics::EnumInfo[] = {
		{ EDamageType_StaticEnum, TEXT("EDamageType"), &Z_Registration_Info_UEnum_EDamageType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1841042454U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Actor_DamageType_HealingDamageType_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHealingDamageType, UHealingDamageType::StaticClass, TEXT("UHealingDamageType"), &Z_Registration_Info_UClass_UHealingDamageType, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHealingDamageType), 1247251845U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Actor_DamageType_HealingDamageType_h_1441395560(TEXT("/Script/CodeNameLab"),
		Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Actor_DamageType_HealingDamageType_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Actor_DamageType_HealingDamageType_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Actor_DamageType_HealingDamageType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Actor_DamageType_HealingDamageType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
