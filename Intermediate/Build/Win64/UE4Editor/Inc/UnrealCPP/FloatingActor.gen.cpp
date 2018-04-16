// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "FloatingActor/FloatingActor.h"
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
	UClass* Z_Construct_UClass_AFloatingActor()
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
				{ "IncludePath", "FloatingActor/FloatingActor.h" },
				{ "ModuleRelativePath", "FloatingActor/FloatingActor.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZValue_MetaData[] = {
				{ "Category", "Movement" },
				{ "ModuleRelativePath", "FloatingActor/FloatingActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZValue = { UE4CodeGen_Private::EPropertyClass::Float, "ZValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AFloatingActor, ZValue), METADATA_PARAMS(NewProp_ZValue_MetaData, ARRAY_COUNT(NewProp_ZValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YValue_MetaData[] = {
				{ "Category", "Movement" },
				{ "ModuleRelativePath", "FloatingActor/FloatingActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_YValue = { UE4CodeGen_Private::EPropertyClass::Float, "YValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AFloatingActor, YValue), METADATA_PARAMS(NewProp_YValue_MetaData, ARRAY_COUNT(NewProp_YValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XValue_MetaData[] = {
				{ "Category", "Movement" },
				{ "ModuleRelativePath", "FloatingActor/FloatingActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_XValue = { UE4CodeGen_Private::EPropertyClass::Float, "XValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AFloatingActor, XValue), METADATA_PARAMS(NewProp_XValue_MetaData, ARRAY_COUNT(NewProp_XValue_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ZValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_YValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_XValue,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AFloatingActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AFloatingActor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFloatingActor, 585397295);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFloatingActor(Z_Construct_UClass_AFloatingActor, &AFloatingActor::StaticClass, TEXT("/Script/UnrealCPP"), TEXT("AFloatingActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFloatingActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
