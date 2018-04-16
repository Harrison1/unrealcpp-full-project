// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "RotateAroundVector/RotateAroundVector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRotateAroundVector() {}
// Cross Module References
	UNREALCPP_API UClass* Z_Construct_UClass_ARotateAroundVector_NoRegister();
	UNREALCPP_API UClass* Z_Construct_UClass_ARotateAroundVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnrealCPP();
// End Cross Module References
	void ARotateAroundVector::StaticRegisterNativesARotateAroundVector()
	{
	}
	UClass* Z_Construct_UClass_ARotateAroundVector_NoRegister()
	{
		return ARotateAroundVector::StaticClass();
	}
	UClass* Z_Construct_UClass_ARotateAroundVector()
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
				{ "IncludePath", "RotateAroundVector/RotateAroundVector.h" },
				{ "ModuleRelativePath", "RotateAroundVector/RotateAroundVector.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ARotateAroundVector>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ARotateAroundVector::StaticClass,
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
	IMPLEMENT_CLASS(ARotateAroundVector, 2114965309);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARotateAroundVector(Z_Construct_UClass_ARotateAroundVector, &ARotateAroundVector::StaticClass, TEXT("/Script/UnrealCPP"), TEXT("ARotateAroundVector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARotateAroundVector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
