// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCPP/CameraShake/MyCameraShake.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCameraShake() {}
// Cross Module References
	UNREALCPP_API UClass* Z_Construct_UClass_UMyCameraShake_NoRegister();
	UNREALCPP_API UClass* Z_Construct_UClass_UMyCameraShake();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShake();
	UPackage* Z_Construct_UPackage__Script_UnrealCPP();
// End Cross Module References
	void UMyCameraShake::StaticRegisterNativesUMyCameraShake()
	{
	}
	UClass* Z_Construct_UClass_UMyCameraShake_NoRegister()
	{
		return UMyCameraShake::StaticClass();
	}
	struct Z_Construct_UClass_UMyCameraShake_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyCameraShake_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraShake,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyCameraShake_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CameraShake/MyCameraShake.h" },
		{ "ModuleRelativePath", "CameraShake/MyCameraShake.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyCameraShake_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyCameraShake>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyCameraShake_Statics::ClassParams = {
		&UMyCameraShake::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001010A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMyCameraShake_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMyCameraShake_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyCameraShake()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyCameraShake_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyCameraShake, 1361042897);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyCameraShake(Z_Construct_UClass_UMyCameraShake, &UMyCameraShake::StaticClass, TEXT("/Script/UnrealCPP"), TEXT("UMyCameraShake"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyCameraShake);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
