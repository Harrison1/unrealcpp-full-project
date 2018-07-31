// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCPP/ActorLineTrace/ActorLineTrace.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorLineTrace() {}
// Cross Module References
	UNREALCPP_API UClass* Z_Construct_UClass_AActorLineTrace_NoRegister();
	UNREALCPP_API UClass* Z_Construct_UClass_AActorLineTrace();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnrealCPP();
// End Cross Module References
	void AActorLineTrace::StaticRegisterNativesAActorLineTrace()
	{
	}
	UClass* Z_Construct_UClass_AActorLineTrace_NoRegister()
	{
		return AActorLineTrace::StaticClass();
	}
	struct Z_Construct_UClass_AActorLineTrace_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AActorLineTrace_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorLineTrace_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ActorLineTrace/ActorLineTrace.h" },
		{ "ModuleRelativePath", "ActorLineTrace/ActorLineTrace.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AActorLineTrace_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActorLineTrace>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AActorLineTrace_Statics::ClassParams = {
		&AActorLineTrace::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AActorLineTrace_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AActorLineTrace_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AActorLineTrace()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AActorLineTrace_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AActorLineTrace, 644271156);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AActorLineTrace(Z_Construct_UClass_AActorLineTrace, &AActorLineTrace::StaticClass, TEXT("/Script/UnrealCPP"), TEXT("AActorLineTrace"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AActorLineTrace);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
