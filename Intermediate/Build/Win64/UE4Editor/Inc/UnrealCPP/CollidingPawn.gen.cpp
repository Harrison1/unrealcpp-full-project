// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "CollidingPawn/CollidingPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollidingPawn() {}
// Cross Module References
	UNREALCPP_API UClass* Z_Construct_UClass_ACollidingPawn_NoRegister();
	UNREALCPP_API UClass* Z_Construct_UClass_ACollidingPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_UnrealCPP();
// End Cross Module References
	void ACollidingPawn::StaticRegisterNativesACollidingPawn()
	{
	}
	UClass* Z_Construct_UClass_ACollidingPawn_NoRegister()
	{
		return ACollidingPawn::StaticClass();
	}
	UClass* Z_Construct_UClass_ACollidingPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APawn,
				(UObject* (*)())Z_Construct_UPackage__Script_UnrealCPP,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "CollidingPawn/CollidingPawn.h" },
				{ "ModuleRelativePath", "CollidingPawn/CollidingPawn.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ACollidingPawn>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ACollidingPawn::StaticClass,
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
	IMPLEMENT_CLASS(ACollidingPawn, 739970233);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACollidingPawn(Z_Construct_UClass_ACollidingPawn, &ACollidingPawn::StaticClass, TEXT("/Script/UnrealCPP"), TEXT("ACollidingPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACollidingPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
