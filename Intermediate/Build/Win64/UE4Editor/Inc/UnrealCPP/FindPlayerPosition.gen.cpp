// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCPP/FindPlayerPosition/FindPlayerPosition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFindPlayerPosition() {}
// Cross Module References
	UNREALCPP_API UClass* Z_Construct_UClass_AFindPlayerPosition_NoRegister();
	UNREALCPP_API UClass* Z_Construct_UClass_AFindPlayerPosition();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnrealCPP();
// End Cross Module References
	void AFindPlayerPosition::StaticRegisterNativesAFindPlayerPosition()
	{
	}
	UClass* Z_Construct_UClass_AFindPlayerPosition_NoRegister()
	{
		return AFindPlayerPosition::StaticClass();
	}
	struct Z_Construct_UClass_AFindPlayerPosition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFindPlayerPosition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFindPlayerPosition_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FindPlayerPosition/FindPlayerPosition.h" },
		{ "ModuleRelativePath", "FindPlayerPosition/FindPlayerPosition.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFindPlayerPosition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFindPlayerPosition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFindPlayerPosition_Statics::ClassParams = {
		&AFindPlayerPosition::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFindPlayerPosition_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFindPlayerPosition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFindPlayerPosition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFindPlayerPosition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFindPlayerPosition, 901751979);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFindPlayerPosition(Z_Construct_UClass_AFindPlayerPosition, &AFindPlayerPosition::StaticClass, TEXT("/Script/UnrealCPP"), TEXT("AFindPlayerPosition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFindPlayerPosition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
