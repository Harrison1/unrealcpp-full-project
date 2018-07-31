// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCPP/FloatingActor/FloatingActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloatingActor() {}
// Cross Module References
	UNREALCPP_API UClass* Z_Construct_UClass_AFloatingActor_NoRegister();
	UNREALCPP_API UClass* Z_Construct_UClass_AFloatingActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnrealCPP();
// End Cross Module References
	void AFloatingActor::StaticRegisterNativesAFloatingActor()
	{
	}
	UClass* Z_Construct_UClass_AFloatingActor_NoRegister()
	{
		return AFloatingActor::StaticClass();
	}
	struct Z_Construct_UClass_AFloatingActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_YValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_XValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFloatingActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloatingActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FloatingActor/FloatingActor.h" },
		{ "ModuleRelativePath", "FloatingActor/FloatingActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloatingActor_Statics::NewProp_ZValue_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "FloatingActor/FloatingActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFloatingActor_Statics::NewProp_ZValue = { UE4CodeGen_Private::EPropertyClass::Float, "ZValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AFloatingActor, ZValue), METADATA_PARAMS(Z_Construct_UClass_AFloatingActor_Statics::NewProp_ZValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFloatingActor_Statics::NewProp_ZValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloatingActor_Statics::NewProp_YValue_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "FloatingActor/FloatingActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFloatingActor_Statics::NewProp_YValue = { UE4CodeGen_Private::EPropertyClass::Float, "YValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AFloatingActor, YValue), METADATA_PARAMS(Z_Construct_UClass_AFloatingActor_Statics::NewProp_YValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFloatingActor_Statics::NewProp_YValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloatingActor_Statics::NewProp_XValue_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "FloatingActor/FloatingActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFloatingActor_Statics::NewProp_XValue = { UE4CodeGen_Private::EPropertyClass::Float, "XValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AFloatingActor, XValue), METADATA_PARAMS(Z_Construct_UClass_AFloatingActor_Statics::NewProp_XValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFloatingActor_Statics::NewProp_XValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFloatingActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloatingActor_Statics::NewProp_ZValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloatingActor_Statics::NewProp_YValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloatingActor_Statics::NewProp_XValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFloatingActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFloatingActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFloatingActor_Statics::ClassParams = {
		&AFloatingActor::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AFloatingActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFloatingActor_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFloatingActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFloatingActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFloatingActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFloatingActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFloatingActor, 1536700390);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFloatingActor(Z_Construct_UClass_AFloatingActor, &AFloatingActor::StaticClass, TEXT("/Script/UnrealCPP"), TEXT("AFloatingActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFloatingActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
