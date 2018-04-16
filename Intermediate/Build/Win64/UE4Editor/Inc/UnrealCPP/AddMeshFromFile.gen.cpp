// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "AddMeshFromFile/AddMeshFromFile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAddMeshFromFile() {}
// Cross Module References
	UNREALCPP_API UClass* Z_Construct_UClass_AAddMeshFromFile_NoRegister();
	UNREALCPP_API UClass* Z_Construct_UClass_AAddMeshFromFile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnrealCPP();
// End Cross Module References
	void AAddMeshFromFile::StaticRegisterNativesAAddMeshFromFile()
	{
	}
	UClass* Z_Construct_UClass_AAddMeshFromFile_NoRegister()
	{
		return AAddMeshFromFile::StaticClass();
	}
	UClass* Z_Construct_UClass_AAddMeshFromFile()
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
				{ "IncludePath", "AddMeshFromFile/AddMeshFromFile.h" },
				{ "ModuleRelativePath", "AddMeshFromFile/AddMeshFromFile.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AAddMeshFromFile>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AAddMeshFromFile::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAddMeshFromFile, 2076184385);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAddMeshFromFile(Z_Construct_UClass_AAddMeshFromFile, &AAddMeshFromFile::StaticClass, TEXT("/Script/UnrealCPP"), TEXT("AAddMeshFromFile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAddMeshFromFile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
