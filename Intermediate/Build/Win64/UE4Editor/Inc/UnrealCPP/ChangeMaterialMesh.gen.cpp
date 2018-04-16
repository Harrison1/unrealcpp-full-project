// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "ChangeMaterialMesh/ChangeMaterialMesh.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChangeMaterialMesh() {}
// Cross Module References
	UNREALCPP_API UClass* Z_Construct_UClass_AChangeMaterialMesh_NoRegister();
	UNREALCPP_API UClass* Z_Construct_UClass_AChangeMaterialMesh();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnrealCPP();
	UNREALCPP_API UFunction* Z_Construct_UFunction_AChangeMaterialMesh_OnOverlapBegin();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AChangeMaterialMesh::StaticRegisterNativesAChangeMaterialMesh()
	{
		UClass* Class = AChangeMaterialMesh::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapBegin", &AChangeMaterialMesh::execOnOverlapBegin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AChangeMaterialMesh_OnOverlapBegin()
	{
		struct ChangeMaterialMesh_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult = { UE4CodeGen_Private::EPropertyClass::Struct, "SweepResult", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(ChangeMaterialMesh_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(NewProp_SweepResult_MetaData, ARRAY_COUNT(NewProp_SweepResult_MetaData)) };
			auto NewProp_bFromSweep_SetBit = [](void* Obj){ ((ChangeMaterialMesh_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep = { UE4CodeGen_Private::EPropertyClass::Bool, "bFromSweep", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ChangeMaterialMesh_eventOnOverlapBegin_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bFromSweep_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ChangeMaterialMesh_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(ChangeMaterialMesh_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_OtherComp_MetaData, ARRAY_COUNT(NewProp_OtherComp_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ChangeMaterialMesh_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(ChangeMaterialMesh_eventOnOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_OverlappedComp_MetaData, ARRAY_COUNT(NewProp_OverlappedComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SweepResult,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bFromSweep,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherBodyIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OverlappedComp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "ChangeMaterialMesh/ChangeMaterialMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AChangeMaterialMesh, "OnOverlapBegin", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00420401, sizeof(ChangeMaterialMesh_eventOnOverlapBegin_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AChangeMaterialMesh_NoRegister()
	{
		return AChangeMaterialMesh::StaticClass();
	}
	UClass* Z_Construct_UClass_AChangeMaterialMesh()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_UnrealCPP,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AChangeMaterialMesh_OnOverlapBegin, "OnOverlapBegin" }, // 3442434542
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "ChangeMaterialMesh/ChangeMaterialMesh.h" },
				{ "ModuleRelativePath", "ChangeMaterialMesh/ChangeMaterialMesh.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyBoxComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "ChangeMaterialMesh/ChangeMaterialMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyBoxComponent = { UE4CodeGen_Private::EPropertyClass::Object, "MyBoxComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080008, 1, nullptr, STRUCT_OFFSET(AChangeMaterialMesh, MyBoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(NewProp_MyBoxComponent_MetaData, ARRAY_COUNT(NewProp_MyBoxComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffMaterial_MetaData[] = {
				{ "Category", "ChangeMaterialMesh" },
				{ "ModuleRelativePath", "ChangeMaterialMesh/ChangeMaterialMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OffMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "OffMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AChangeMaterialMesh, OffMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(NewProp_OffMaterial_MetaData, ARRAY_COUNT(NewProp_OffMaterial_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMaterial_MetaData[] = {
				{ "Category", "ChangeMaterialMesh" },
				{ "ModuleRelativePath", "ChangeMaterialMesh/ChangeMaterialMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "OnMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AChangeMaterialMesh, OnMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(NewProp_OnMaterial_MetaData, ARRAY_COUNT(NewProp_OnMaterial_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyMesh_MetaData[] = {
				{ "Category", "ChangeMaterialMesh" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "ChangeMaterialMesh/ChangeMaterialMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyMesh = { UE4CodeGen_Private::EPropertyClass::Object, "MyMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(AChangeMaterialMesh, MyMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_MyMesh_MetaData, ARRAY_COUNT(NewProp_MyMesh_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MyBoxComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OffMaterial,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnMaterial,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MyMesh,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AChangeMaterialMesh>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AChangeMaterialMesh::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AChangeMaterialMesh, 3914601223);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AChangeMaterialMesh(Z_Construct_UClass_AChangeMaterialMesh, &AChangeMaterialMesh::StaticClass, TEXT("/Script/UnrealCPP"), TEXT("AChangeMaterialMesh"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChangeMaterialMesh);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
