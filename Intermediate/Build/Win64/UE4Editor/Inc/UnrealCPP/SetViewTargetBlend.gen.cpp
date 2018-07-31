// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCPP/SetViewTargetBlend/SetViewTargetBlend.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSetViewTargetBlend() {}
// Cross Module References
	UNREALCPP_API UClass* Z_Construct_UClass_ASetViewTargetBlend_NoRegister();
	UNREALCPP_API UClass* Z_Construct_UClass_ASetViewTargetBlend();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnrealCPP();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ASetViewTargetBlend::StaticRegisterNativesASetViewTargetBlend()
	{
	}
	UClass* Z_Construct_UClass_ASetViewTargetBlend_NoRegister()
	{
		return ASetViewTargetBlend::StaticClass();
	}
	struct Z_Construct_UClass_ASetViewTargetBlend_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASetViewTargetBlend_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASetViewTargetBlend_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SetViewTargetBlend/SetViewTargetBlend.h" },
		{ "ModuleRelativePath", "SetViewTargetBlend/SetViewTargetBlend.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASetViewTargetBlend_Statics::NewProp_MyActor_MetaData[] = {
		{ "Category", "SetViewTargetBlend" },
		{ "ModuleRelativePath", "SetViewTargetBlend/SetViewTargetBlend.h" },
		{ "ToolTip", "declare variables" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASetViewTargetBlend_Statics::NewProp_MyActor = { UE4CodeGen_Private::EPropertyClass::Object, "MyActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ASetViewTargetBlend, MyActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASetViewTargetBlend_Statics::NewProp_MyActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASetViewTargetBlend_Statics::NewProp_MyActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASetViewTargetBlend_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASetViewTargetBlend_Statics::NewProp_MyActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASetViewTargetBlend_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASetViewTargetBlend>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASetViewTargetBlend_Statics::ClassParams = {
		&ASetViewTargetBlend::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ASetViewTargetBlend_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ASetViewTargetBlend_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ASetViewTargetBlend_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASetViewTargetBlend_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASetViewTargetBlend()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASetViewTargetBlend_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASetViewTargetBlend, 352346743);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASetViewTargetBlend(Z_Construct_UClass_ASetViewTargetBlend, &ASetViewTargetBlend::StaticClass, TEXT("/Script/UnrealCPP"), TEXT("ASetViewTargetBlend"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASetViewTargetBlend);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
