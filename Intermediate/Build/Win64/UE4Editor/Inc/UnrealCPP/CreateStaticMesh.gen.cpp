// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCPP/CreateStaticMesh/CreateStaticMesh.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCreateStaticMesh() {}
// Cross Module References
	UNREALCPP_API UClass* Z_Construct_UClass_ACreateStaticMesh_NoRegister();
	UNREALCPP_API UClass* Z_Construct_UClass_ACreateStaticMesh();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnrealCPP();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ACreateStaticMesh::StaticRegisterNativesACreateStaticMesh()
	{
	}
	UClass* Z_Construct_UClass_ACreateStaticMesh_NoRegister()
	{
		return ACreateStaticMesh::StaticClass();
	}
	struct Z_Construct_UClass_ACreateStaticMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuperMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SuperMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACreateStaticMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACreateStaticMesh_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CreateStaticMesh/CreateStaticMesh.h" },
		{ "ModuleRelativePath", "CreateStaticMesh/CreateStaticMesh.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACreateStaticMesh_Statics::NewProp_SuperMesh_MetaData[] = {
		{ "Category", "CreateStaticMesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CreateStaticMesh/CreateStaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACreateStaticMesh_Statics::NewProp_SuperMesh = { UE4CodeGen_Private::EPropertyClass::Object, "SuperMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(ACreateStaticMesh, SuperMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACreateStaticMesh_Statics::NewProp_SuperMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACreateStaticMesh_Statics::NewProp_SuperMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACreateStaticMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACreateStaticMesh_Statics::NewProp_SuperMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACreateStaticMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACreateStaticMesh>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACreateStaticMesh_Statics::ClassParams = {
		&ACreateStaticMesh::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ACreateStaticMesh_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ACreateStaticMesh_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ACreateStaticMesh_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACreateStaticMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACreateStaticMesh()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACreateStaticMesh_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACreateStaticMesh, 2194929380);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACreateStaticMesh(Z_Construct_UClass_ACreateStaticMesh, &ACreateStaticMesh::StaticClass, TEXT("/Script/UnrealCPP"), TEXT("ACreateStaticMesh"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACreateStaticMesh);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
