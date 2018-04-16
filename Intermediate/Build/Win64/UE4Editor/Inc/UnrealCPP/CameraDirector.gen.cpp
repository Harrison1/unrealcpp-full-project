// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "CameraDirector/CameraDirector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraDirector() {}
// Cross Module References
	UNREALCPP_API UClass* Z_Construct_UClass_ACameraDirector_NoRegister();
	UNREALCPP_API UClass* Z_Construct_UClass_ACameraDirector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnrealCPP();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ACameraDirector::StaticRegisterNativesACameraDirector()
	{
	}
	UClass* Z_Construct_UClass_ACameraDirector_NoRegister()
	{
		return ACameraDirector::StaticClass();
	}
	UClass* Z_Construct_UClass_ACameraDirector()
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
				{ "IncludePath", "CameraDirector/CameraDirector.h" },
				{ "ModuleRelativePath", "CameraDirector/CameraDirector.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraTwo_MetaData[] = {
				{ "Category", "CameraDirector" },
				{ "ModuleRelativePath", "CameraDirector/CameraDirector.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraTwo = { UE4CodeGen_Private::EPropertyClass::Object, "CameraTwo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ACameraDirector, CameraTwo), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_CameraTwo_MetaData, ARRAY_COUNT(NewProp_CameraTwo_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraOne_MetaData[] = {
				{ "Category", "CameraDirector" },
				{ "ModuleRelativePath", "CameraDirector/CameraDirector.h" },
				{ "ToolTip", "declare variables" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraOne = { UE4CodeGen_Private::EPropertyClass::Object, "CameraOne", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ACameraDirector, CameraOne), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_CameraOne_MetaData, ARRAY_COUNT(NewProp_CameraOne_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraTwo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraOne,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ACameraDirector>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ACameraDirector::StaticClass,
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
	IMPLEMENT_CLASS(ACameraDirector, 4080835875);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACameraDirector(Z_Construct_UClass_ACameraDirector, &ACameraDirector::StaticClass, TEXT("/Script/UnrealCPP"), TEXT("ACameraDirector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACameraDirector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
