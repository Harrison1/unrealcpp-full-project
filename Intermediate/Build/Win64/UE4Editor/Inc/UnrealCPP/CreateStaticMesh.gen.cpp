// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "CreateStaticMesh/CreateStaticMesh.h"
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
	UClass* Z_Construct_UClass_ACreateStaticMesh()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_UnrealCPP,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "CreateStaticMesh/CreateStaticMesh.h" },
				{ "ModuleRelativePath", "CreateStaticMesh/CreateStaticMesh.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuperMesh_MetaData[] = {
				{ "Category", "CreateStaticMesh" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "CreateStaticMesh/CreateStaticMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SuperMesh = { UE4CodeGen_Private::EPropertyClass::Object, "SuperMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(ACreateStaticMesh, SuperMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_SuperMesh_MetaData, ARRAY_COUNT(NewProp_SuperMesh_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SuperMesh,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ACreateStaticMesh>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ACreateStaticMesh::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(ACreateStaticMesh, 1856947474);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACreateStaticMesh(Z_Construct_UClass_ACreateStaticMesh, &ACreateStaticMesh::StaticClass, TEXT("/Script/UnrealCPP"), TEXT("ACreateStaticMesh"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACreateStaticMesh);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
