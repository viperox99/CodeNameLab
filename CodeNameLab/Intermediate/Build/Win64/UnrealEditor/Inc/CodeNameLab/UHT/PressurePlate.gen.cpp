// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CodeNameLab/Actor/PressurePlate.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePressurePlate() {}
// Cross Module References
	CODENAMELAB_API UClass* Z_Construct_UClass_APressurePlate();
	CODENAMELAB_API UClass* Z_Construct_UClass_APressurePlate_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	UPackage* Z_Construct_UPackage__Script_CodeNameLab();
// End Cross Module References
	DEFINE_FUNCTION(APressurePlate::execCollisionHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CollisionHit(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void APressurePlate::StaticRegisterNativesAPressurePlate()
	{
		UClass* Class = APressurePlate::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CollisionHit", &APressurePlate::execCollisionHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APressurePlate_CollisionHit_Statics
	{
		struct PressurePlate_eventCollisionHit_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APressurePlate_CollisionHit_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APressurePlate_CollisionHit_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PressurePlate_eventCollisionHit_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APressurePlate_CollisionHit_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APressurePlate_CollisionHit_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APressurePlate_CollisionHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PressurePlate_eventCollisionHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APressurePlate_CollisionHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APressurePlate_CollisionHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PressurePlate_eventCollisionHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APressurePlate_CollisionHit_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APressurePlate_CollisionHit_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APressurePlate_CollisionHit_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PressurePlate_eventCollisionHit_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APressurePlate_CollisionHit_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((PressurePlate_eventCollisionHit_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APressurePlate_CollisionHit_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PressurePlate_eventCollisionHit_Parms), &Z_Construct_UFunction_APressurePlate_CollisionHit_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APressurePlate_CollisionHit_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APressurePlate_CollisionHit_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PressurePlate_eventCollisionHit_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_APressurePlate_CollisionHit_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APressurePlate_CollisionHit_Statics::NewProp_SweepResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APressurePlate_CollisionHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APressurePlate_CollisionHit_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APressurePlate_CollisionHit_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APressurePlate_CollisionHit_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APressurePlate_CollisionHit_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APressurePlate_CollisionHit_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APressurePlate_CollisionHit_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APressurePlate_CollisionHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actor/PressurePlate.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APressurePlate_CollisionHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APressurePlate, nullptr, "CollisionHit", nullptr, nullptr, sizeof(Z_Construct_UFunction_APressurePlate_CollisionHit_Statics::PressurePlate_eventCollisionHit_Parms), Z_Construct_UFunction_APressurePlate_CollisionHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APressurePlate_CollisionHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APressurePlate_CollisionHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APressurePlate_CollisionHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APressurePlate_CollisionHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APressurePlate_CollisionHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APressurePlate);
	UClass* Z_Construct_UClass_APressurePlate_NoRegister()
	{
		return APressurePlate::StaticClass();
	}
	struct Z_Construct_UClass_APressurePlate_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinWeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APressurePlate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CodeNameLab,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APressurePlate_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APressurePlate_CollisionHit, "CollisionHit" }, // 4113704631
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APressurePlate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/PressurePlate.h" },
		{ "ModuleRelativePath", "Actor/PressurePlate.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APressurePlate_Statics::NewProp_CollisionComp_MetaData[] = {
		{ "Category", "PressurePlate" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actor/PressurePlate.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APressurePlate_Statics::NewProp_CollisionComp = { "CollisionComp", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APressurePlate, CollisionComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APressurePlate_Statics::NewProp_CollisionComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APressurePlate_Statics::NewProp_CollisionComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APressurePlate_Statics::NewProp_MeshComp_MetaData[] = {
		{ "Category", "PressurePlate" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actor/PressurePlate.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APressurePlate_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APressurePlate, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APressurePlate_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APressurePlate_Statics::NewProp_MeshComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APressurePlate_Statics::NewProp_MinWeight_MetaData[] = {
		{ "Category", "Weight" },
		{ "ModuleRelativePath", "Actor/PressurePlate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APressurePlate_Statics::NewProp_MinWeight = { "MinWeight", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APressurePlate, MinWeight), METADATA_PARAMS(Z_Construct_UClass_APressurePlate_Statics::NewProp_MinWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APressurePlate_Statics::NewProp_MinWeight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APressurePlate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APressurePlate_Statics::NewProp_CollisionComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APressurePlate_Statics::NewProp_MeshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APressurePlate_Statics::NewProp_MinWeight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APressurePlate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APressurePlate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APressurePlate_Statics::ClassParams = {
		&APressurePlate::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APressurePlate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APressurePlate_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APressurePlate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APressurePlate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APressurePlate()
	{
		if (!Z_Registration_Info_UClass_APressurePlate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APressurePlate.OuterSingleton, Z_Construct_UClass_APressurePlate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APressurePlate.OuterSingleton;
	}
	template<> CODENAMELAB_API UClass* StaticClass<APressurePlate>()
	{
		return APressurePlate::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APressurePlate);
	APressurePlate::~APressurePlate() {}
	struct Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Actor_PressurePlate_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Actor_PressurePlate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APressurePlate, APressurePlate::StaticClass, TEXT("APressurePlate"), &Z_Registration_Info_UClass_APressurePlate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APressurePlate), 1260100741U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Actor_PressurePlate_h_176276048(TEXT("/Script/CodeNameLab"),
		Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Actor_PressurePlate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CodeNameLab_Source_CodeNameLab_Actor_PressurePlate_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
