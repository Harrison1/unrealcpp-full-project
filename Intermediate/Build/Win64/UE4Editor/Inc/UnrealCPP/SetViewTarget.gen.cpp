// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCPP/SetViewTarget/SetViewTarget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSetViewTarget() {}
// Cross Module References
	UNREALCPP_API UClass* Z_Construct_UClass_ASetViewTarget_NoRegister();
	UNREALCPP_API UClass* Z_Construct_UClass_ASetViewTarget();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnrealCPP();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ASetViewTarget::StaticRegisterNativesASetViewTarget()
	{
	}
	UClass* Z_Construct_UClass_ASetViewTarget_NoRegister()
	{
		return ASetViewTarget::StaticClass();
	}
	struct Z_Construct_UClass_ASetViewTarget_Statics
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
	UObject* (*const Z_Construct_UClass_ASetViewTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASetViewTarget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SetViewTarget/SetViewTarget.h" },
		{ "ModuleRelativePath", "SetViewTarget/SetViewTarget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASetViewTarget_Statics::NewProp_MyActor_MetaData[] = {
		{ "Category", "SetViewTarget" },
		{ "ModuleRelativePath", "SetViewTarget/SetViewTarget.h" },
		{ "ToolTip", "declare variables" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASetViewTarget_Statics::NewProp_MyActor = { UE4CodeGen_Private::EPropertyClass::Object, "MyActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ASetViewTarget, MyActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASetViewTarget_Statics::NewProp_MyActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASetViewTarget_Statics::NewProp_MyActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASetViewTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASetViewTarget_Statics::NewProp_MyActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASetViewTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASetViewTarget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASetViewTarget_Statics::ClassParams = {
		&ASetViewTarget::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ASetViewTarget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ASetViewTarget_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ASetViewTarget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASetViewTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASetViewTarget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASetViewTarget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASetViewTarget, 3424552557);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASetViewTarget(Z_Construct_UClass_ASetViewTarget, &ASetViewTarget::StaticClass, TEXT("/Script/UnrealCPP"), TEXT("ASetViewTarget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASetViewTarget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
