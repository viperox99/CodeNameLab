// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CodeNameLab/Interface/KeyInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKeyInterface() {}
// Cross Module References
	CODENAMELAB_API UClass* Z_Construct_UClass_UKeyInterface();
	CODENAMELAB_API UClass* Z_Construct_UClass_UKeyInterface_NoRegister();
	CODENAMELAB_API UEnum* Z_Construct_UEnum_CodeNameLab_EKeyType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_CodeNameLab();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EKeyType;
	static UEnum* EKeyType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EKeyType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EKeyType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CodeNameLab_EKeyType, (UObject*)Z_Construct_UPackage__Script_CodeNameLab(), TEXT("EKeyType"));
		}
		return Z_Registration_Info_UEnum_EKeyType.OuterSingleton;
	}
	template<> CODENAMELAB_API UEnum* StaticEnum<EKeyType>()
	{
		return EKeyType_StaticEnum();
	}
	struct Z_Construct_UEnum_CodeNameLab_EKeyType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CodeNameLab_EKeyType_Statics::Enumerators[] = {
		{ "VE_NumberKey", (int64)VE_NumberKey },
		{ "VE_Physical", (int64)VE_Physical },
		{ "VE_Keycard", (int64)VE_Keycard },
		{ "VE_NoKey", (int64)VE_NoKey },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CodeNameLab_EKeyType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Interface/KeyInterface.h" },
		{ "VE_Keycard.DisplayName", "Keycard" },
		{ "VE_Keycard.Name", "VE_Keycard" },
		{ "VE_NoKey.DisplayName", "Not A Key" },
		{ "VE_NoKey.Name", "VE_NoKey" },
		{ "VE_NumberKey.DisplayName", "Number Key" },
		{ "VE_NumberKey.Name", "VE_NumberKey" },
		{ "VE_Physical.DisplayName", "Key" },
		{ "VE_Physical.Name", "VE_Physical" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CodeNameLab_EKeyType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CodeNameLab,
		nullptr,
		"EKeyType",
		"EKeyType",
		Z_Construct_UEnum_CodeNameLab_EKeyType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CodeNameLab_EKeyType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_CodeNameLab_EKeyType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CodeNameLab_EKeyType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CodeNameLab_EKeyType()
	{
		if (!Z_Registration_Info_UEnum_EKeyType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EKeyType.InnerSingleton, Z_Construct_UEnum_CodeNameLab_EKeyType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EKeyType.InnerSingleton;
	}
	void UKeyInterface::StaticRegisterNativesUKeyInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKeyInterface);
	UClass* Z_Construct_UClass_UKeyInterface_NoRegister()
	{
		return UKeyInterface::StaticClass();
	}
	struct Z_Construct_UClass_UKeyInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKeyInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CodeNameLab,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKeyInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface/KeyInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKeyInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IKeyInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UKeyInterface_Statics::ClassParams = {
		&UKeyInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UKeyInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKeyInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKeyInterface()
	{
		if (!Z_Registration_Info_UClass_UKeyInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKeyInterface.OuterSingleton, Z_Construct_UClass_UKeyInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UKeyInterface.OuterSingleton;
	}
	template<> CODENAMELAB_API UClass* StaticClass<UKeyInterface>()
	{
		return UKeyInterface::StaticClass();
	}
	UKeyInterface::UKeyInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKeyInterface);
	UKeyInterface::~UKeyInterface() {}
	struct Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Interface_KeyInterface_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Interface_KeyInterface_h_Statics::EnumInfo[] = {
		{ EKeyType_StaticEnum, TEXT("EKeyType"), &Z_Registration_Info_UEnum_EKeyType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2813849708U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Interface_KeyInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UKeyInterface, UKeyInterface::StaticClass, TEXT("UKeyInterface"), &Z_Registration_Info_UClass_UKeyInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKeyInterface), 2465064289U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Interface_KeyInterface_h_2257085027(TEXT("/Script/CodeNameLab"),
		Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Interface_KeyInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Interface_KeyInterface_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Interface_KeyInterface_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Interface_KeyInterface_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
