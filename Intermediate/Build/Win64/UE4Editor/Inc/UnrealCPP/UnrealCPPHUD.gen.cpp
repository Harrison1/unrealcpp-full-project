// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCPP/UnrealCPPHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealCPPHUD() {}
// Cross Module References
	UNREALCPP_API UClass* Z_Construct_UClass_AUnrealCPPHUD_NoRegister();
	UNREALCPP_API UClass* Z_Construct_UClass_AUnrealCPPHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_UnrealCPP();
// End Cross Module References
	void AUnrealCPPHUD::StaticRegisterNativesAUnrealCPPHUD()
	{
	}
	UClass* Z_Construct_UClass_AUnrealCPPHUD_NoRegister()
	{
		return AUnrealCPPHUD::StaticClass();
	}
	struct Z_Construct_UClass_AUnrealCPPHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnrealCPPHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealCPPHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UnrealCPPHUD.h" },
		{ "ModuleRelativePath", "UnrealCPPHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnrealCPPHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnrealCPPHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnrealCPPHUD_Statics::ClassParams = {
		&AUnrealCPPHUD::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008002ACu,
		nullptr, 0,
		nullptr, 0,
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AUnrealCPPHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AUnrealCPPHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnrealCPPHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUnrealCPPHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnrealCPPHUD, 2499827292);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnrealCPPHUD(Z_Construct_UClass_AUnrealCPPHUD, &AUnrealCPPHUD::StaticClass, TEXT("/Script/UnrealCPP"), TEXT("AUnrealCPPHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnrealCPPHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
