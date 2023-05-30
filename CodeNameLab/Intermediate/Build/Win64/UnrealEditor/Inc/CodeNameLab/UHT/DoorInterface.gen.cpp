// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CodeNameLab/Interface/DoorInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoorInterface() {}
// Cross Module References
	CODENAMELAB_API UClass* Z_Construct_UClass_UDoorInterface();
	CODENAMELAB_API UClass* Z_Construct_UClass_UDoorInterface_NoRegister();
	CODENAMELAB_API UEnum* Z_Construct_UEnum_CodeNameLab_ELockType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_CodeNameLab();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELockType;
	static UEnum* ELockType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELockType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELockType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CodeNameLab_ELockType, (UObject*)Z_Construct_UPackage__Script_CodeNameLab(), TEXT("ELockType"));
		}
		return Z_Registration_Info_UEnum_ELockType.OuterSingleton;
	}
	template<> CODENAMELAB_API UEnum* StaticEnum<ELockType>()
	{
		return ELockType_StaticEnum();
	}
	struct Z_Construct_UEnum_CodeNameLab_ELockType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CodeNameLab_ELockType_Statics::Enumerators[] = {
		{ "VE_None", (int64)VE_None },
		{ "VE_Never", (int64)VE_Never },
		{ "VE_Key", (int64)VE_Key },
		{ "VE_KeyCard", (int64)VE_KeyCard },
		{ "VE_Number", (int64)VE_Number },
		{ "VE_DeadBolt", (int64)VE_DeadBolt },
		{ "VE_Finger", (int64)VE_Finger },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CodeNameLab_ELockType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Interface/DoorInterface.h" },
		{ "VE_DeadBolt.DisplayName", "Dead bolt Lock" },
		{ "VE_DeadBolt.Name", "VE_DeadBolt" },
		{ "VE_Finger.DisplayName", "Finger Print Lock" },
		{ "VE_Finger.Name", "VE_Finger" },
		{ "VE_Key.DisplayName", "Key Lock" },
		{ "VE_Key.Name", "VE_Key" },
		{ "VE_KeyCard.DisplayName", "KeyCard Lock" },
		{ "VE_KeyCard.Name", "VE_KeyCard" },
		{ "VE_Never.DisplayName", "Never Opens" },
		{ "VE_Never.Name", "VE_Never" },
		{ "VE_None.DisplayName", "No Lock" },
		{ "VE_None.Name", "VE_None" },
		{ "VE_Number.DisplayName", "Number Lock" },
		{ "VE_Number.Name", "VE_Number" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CodeNameLab_ELockType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CodeNameLab,
		nullptr,
		"ELockType",
		"ELockType",
		Z_Construct_UEnum_CodeNameLab_ELockType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CodeNameLab_ELockType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_CodeNameLab_ELockType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CodeNameLab_ELockType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CodeNameLab_ELockType()
	{
		if (!Z_Registration_Info_UEnum_ELockType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELockType.InnerSingleton, Z_Construct_UEnum_CodeNameLab_ELockType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELockType.InnerSingleton;
	}
	void UDoorInterface::StaticRegisterNativesUDoorInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDoorInterface);
	UClass* Z_Construct_UClass_UDoorInterface_NoRegister()
	{
		return UDoorInterface::StaticClass();
	}
	struct Z_Construct_UClass_UDoorInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDoorInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CodeNameLab,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface/DoorInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDoorInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDoorInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDoorInterface_Statics::ClassParams = {
		&UDoorInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDoorInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDoorInterface()
	{
		if (!Z_Registration_Info_UClass_UDoorInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDoorInterface.OuterSingleton, Z_Construct_UClass_UDoorInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDoorInterface.OuterSingleton;
	}
	template<> CODENAMELAB_API UClass* StaticClass<UDoorInterface>()
	{
		return UDoorInterface::StaticClass();
	}
	UDoorInterface::UDoorInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDoorInterface);
	UDoorInterface::~UDoorInterface() {}
	struct Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Interface_DoorInterface_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Interface_DoorInterface_h_Statics::EnumInfo[] = {
		{ ELockType_StaticEnum, TEXT("ELockType"), &Z_Registration_Info_UEnum_ELockType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 613784444U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Interface_DoorInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDoorInterface, UDoorInterface::StaticClass, TEXT("UDoorInterface"), &Z_Registration_Info_UClass_UDoorInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDoorInterface), 1552722530U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Interface_DoorInterface_h_731902150(TEXT("/Script/CodeNameLab"),
		Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Interface_DoorInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Interface_DoorInterface_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Interface_DoorInterface_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Interface_DoorInterface_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
