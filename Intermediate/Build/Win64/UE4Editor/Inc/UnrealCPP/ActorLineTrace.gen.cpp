// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "ActorLineTrace/ActorLineTrace.h"
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
	UClass* Z_Construct_UClass_AActorLineTrace()
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
				{ "IncludePath", "ActorLineTrace/ActorLineTrace.h" },
				{ "ModuleRelativePath", "ActorLineTrace/ActorLineTrace.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AActorLineTrace>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AActorLineTrace::StaticClass,
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
	IMPLEMENT_CLASS(AActorLineTrace, 1552098930);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AActorLineTrace(Z_Construct_UClass_AActorLineTrace, &AActorLineTrace::StaticClass, TEXT("/Script/UnrealCPP"), TEXT("AActorLineTrace"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AActorLineTrace);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
