// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCPP/UnrealCPPGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealCPPGameMode() {}
// Cross Module References
	UNREALCPP_API UClass* Z_Construct_UClass_AUnrealCPPGameMode_NoRegister();
	UNREALCPP_API UClass* Z_Construct_UClass_AUnrealCPPGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UnrealCPP();
// End Cross Module References
	void AUnrealCPPGameMode::StaticRegisterNativesAUnrealCPPGameMode()
	{
	}
	UClass* Z_Construct_UClass_AUnrealCPPGameMode_NoRegister()
	{
		return AUnrealCPPGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AUnrealCPPGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnrealCPPGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealCPPGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UnrealCPPGameMode.h" },
		{ "ModuleRelativePath", "UnrealCPPGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnrealCPPGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnrealCPPGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnrealCPPGameMode_Statics::ClassParams = {
		&AUnrealCPPGameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008802A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AUnrealCPPGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AUnrealCPPGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnrealCPPGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUnrealCPPGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnrealCPPGameMode, 1456550944);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnrealCPPGameMode(Z_Construct_UClass_AUnrealCPPGameMode, &AUnrealCPPGameMode::StaticClass, TEXT("/Script/UnrealCPP"), TEXT("AUnrealCPPGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnrealCPPGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
