// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CodeNameLab/Actor/DoorActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoorActor() {}
// Cross Module References
	CODENAMELAB_API UClass* Z_Construct_UClass_ADoorActor();
	CODENAMELAB_API UClass* Z_Construct_UClass_ADoorActor_NoRegister();
	CODENAMELAB_API UClass* Z_Construct_UClass_UDoorInterface_NoRegister();
	CODENAMELAB_API UClass* Z_Construct_UClass_UInteractInterface_NoRegister();
	CODENAMELAB_API UEnum* Z_Construct_UEnum_CodeNameLab_EDoorOpen();
	CODENAMELAB_API UEnum* Z_Construct_UEnum_CodeNameLab_ELockType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CodeNameLab();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDoorOpen;
	static UEnum* EDoorOpen_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDoorOpen.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDoorOpen.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CodeNameLab_EDoorOpen, (UObject*)Z_Construct_UPackage__Script_CodeNameLab(), TEXT("EDoorOpen"));
		}
		return Z_Registration_Info_UEnum_EDoorOpen.OuterSingleton;
	}
	template<> CODENAMELAB_API UEnum* StaticEnum<EDoorOpen>()
	{
		return EDoorOpen_StaticEnum();
	}
	struct Z_Construct_UEnum_CodeNameLab_EDoorOpen_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CodeNameLab_EDoorOpen_Statics::Enumerators[] = {
		{ "VE_Rotation", (int64)VE_Rotation },
		{ "VE_Location", (int64)VE_Location },
		{ "VE_NotOpen", (int64)VE_NotOpen },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CodeNameLab_EDoorOpen_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Actor/DoorActor.h" },
		{ "VE_Location.DisplayName", "Moves" },
		{ "VE_Location.Name", "VE_Location" },
		{ "VE_NotOpen.DisplayName", "Doesn't Open" },
		{ "VE_NotOpen.Name", "VE_NotOpen" },
		{ "VE_Rotation.DisplayName", "Rotates" },
		{ "VE_Rotation.Name", "VE_Rotation" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CodeNameLab_EDoorOpen_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CodeNameLab,
		nullptr,
		"EDoorOpen",
		"EDoorOpen",
		Z_Construct_UEnum_CodeNameLab_EDoorOpen_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CodeNameLab_EDoorOpen_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_CodeNameLab_EDoorOpen_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CodeNameLab_EDoorOpen_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CodeNameLab_EDoorOpen()
	{
		if (!Z_Registration_Info_UEnum_EDoorOpen.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDoorOpen.InnerSingleton, Z_Construct_UEnum_CodeNameLab_EDoorOpen_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDoorOpen.InnerSingleton;
	}
	void ADoorActor::StaticRegisterNativesADoorActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADoorActor);
	UClass* Z_Construct_UClass_ADoorActor_NoRegister()
	{
		return ADoorActor::StaticClass();
	}
	struct Z_Construct_UClass_ADoorActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LockEnum_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LockEnum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LockEnumOriginal_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LockEnumOriginal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoorOpeningEnum_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DoorOpeningEnum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartYaw_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartYaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndYaw_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EndYaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADoorActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CodeNameLab,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/DoorActor.h" },
		{ "ModuleRelativePath", "Actor/DoorActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorActor_Statics::NewProp_LockEnum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DoorType" },
		{ "ModuleRelativePath", "Actor/DoorActor.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADoorActor_Statics::NewProp_LockEnum = { "LockEnum", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADoorActor, LockEnum), Z_Construct_UEnum_CodeNameLab_ELockType, METADATA_PARAMS(Z_Construct_UClass_ADoorActor_Statics::NewProp_LockEnum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoorActor_Statics::NewProp_LockEnum_MetaData)) }; // 613784444
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorActor_Statics::NewProp_LockEnumOriginal_MetaData[] = {
		{ "ModuleRelativePath", "Actor/DoorActor.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADoorActor_Statics::NewProp_LockEnumOriginal = { "LockEnumOriginal", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADoorActor, LockEnumOriginal), Z_Construct_UEnum_CodeNameLab_ELockType, METADATA_PARAMS(Z_Construct_UClass_ADoorActor_Statics::NewProp_LockEnumOriginal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoorActor_Statics::NewProp_LockEnumOriginal_MetaData)) }; // 613784444
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorActor_Statics::NewProp_MeshComp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StaticMeshComp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actor/DoorActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoorActor_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADoorActor, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADoorActor_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoorActor_Statics::NewProp_MeshComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorActor_Statics::NewProp_DoorOpeningEnum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DoorOpening" },
		{ "ModuleRelativePath", "Actor/DoorActor.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADoorActor_Statics::NewProp_DoorOpeningEnum = { "DoorOpeningEnum", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADoorActor, DoorOpeningEnum), Z_Construct_UEnum_CodeNameLab_EDoorOpen, METADATA_PARAMS(Z_Construct_UClass_ADoorActor_Statics::NewProp_DoorOpeningEnum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoorActor_Statics::NewProp_DoorOpeningEnum_MetaData)) }; // 2779083258
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorActor_Statics::NewProp_StartLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DoorOpening" },
		{ "EditCondition", "DoorOpeningEnum == EDoorType::VE_Location" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Actor/DoorActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADoorActor_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADoorActor, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ADoorActor_Statics::NewProp_StartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoorActor_Statics::NewProp_StartLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorActor_Statics::NewProp_EndLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DoorOpening" },
		{ "EditCondition", "DoorOpeningEnum == EDoorType::VE_Location" },
		{ "EditConditionHides", "" },
		{ "MakeEditWidget", "" },
		{ "ModuleRelativePath", "Actor/DoorActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADoorActor_Statics::NewProp_EndLocation = { "EndLocation", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADoorActor, EndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ADoorActor_Statics::NewProp_EndLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoorActor_Statics::NewProp_EndLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorActor_Statics::NewProp_StartYaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DoorOpening" },
		{ "EditCondition", "DoorOpeningEnum == EDoorType::VE_Rotation" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Actor/DoorActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADoorActor_Statics::NewProp_StartYaw = { "StartYaw", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADoorActor, StartYaw), METADATA_PARAMS(Z_Construct_UClass_ADoorActor_Statics::NewProp_StartYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoorActor_Statics::NewProp_StartYaw_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorActor_Statics::NewProp_EndYaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DoorOpening" },
		{ "EditCondition", "DoorOpeningEnum == EDoorType::VE_Rotation" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Actor/DoorActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADoorActor_Statics::NewProp_EndYaw = { "EndYaw", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADoorActor, EndYaw), METADATA_PARAMS(Z_Construct_UClass_ADoorActor_Statics::NewProp_EndYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoorActor_Statics::NewProp_EndYaw_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorActor_Statics::NewProp_MoveTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DoorOpening" },
		{ "ModuleRelativePath", "Actor/DoorActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADoorActor_Statics::NewProp_MoveTime = { "MoveTime", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADoorActor, MoveTime), METADATA_PARAMS(Z_Construct_UClass_ADoorActor_Statics::NewProp_MoveTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoorActor_Statics::NewProp_MoveTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADoorActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorActor_Statics::NewProp_LockEnum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorActor_Statics::NewProp_LockEnumOriginal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorActor_Statics::NewProp_MeshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorActor_Statics::NewProp_DoorOpeningEnum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorActor_Statics::NewProp_StartLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorActor_Statics::NewProp_EndLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorActor_Statics::NewProp_StartYaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorActor_Statics::NewProp_EndYaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorActor_Statics::NewProp_MoveTime,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ADoorActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractInterface_NoRegister, (int32)VTABLE_OFFSET(ADoorActor, IInteractInterface), false },  // 2766265639
			{ Z_Construct_UClass_UDoorInterface_NoRegister, (int32)VTABLE_OFFSET(ADoorActor, IDoorInterface), false },  // 1552722530
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADoorActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADoorActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADoorActor_Statics::ClassParams = {
		&ADoorActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADoorActor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADoorActor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADoorActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADoorActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADoorActor()
	{
		if (!Z_Registration_Info_UClass_ADoorActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADoorActor.OuterSingleton, Z_Construct_UClass_ADoorActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADoorActor.OuterSingleton;
	}
	template<> CODENAMELAB_API UClass* StaticClass<ADoorActor>()
	{
		return ADoorActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADoorActor);
	ADoorActor::~ADoorActor() {}
	struct Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Actor_DoorActor_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Actor_DoorActor_h_Statics::EnumInfo[] = {
		{ EDoorOpen_StaticEnum, TEXT("EDoorOpen"), &Z_Registration_Info_UEnum_EDoorOpen, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2779083258U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Actor_DoorActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADoorActor, ADoorActor::StaticClass, TEXT("ADoorActor"), &Z_Registration_Info_UClass_ADoorActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADoorActor), 601885914U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Actor_DoorActor_h_3245074555(TEXT("/Script/CodeNameLab"),
		Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Actor_DoorActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Actor_DoorActor_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Actor_DoorActor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Actor_DoorActor_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
