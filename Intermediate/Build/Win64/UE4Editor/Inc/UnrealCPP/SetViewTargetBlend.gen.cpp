// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "SetViewTargetBlend/SetViewTargetBlend.h"
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
	UClass* Z_Construct_UClass_ASetViewTargetBlend()
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
				{ "IncludePath", "SetViewTargetBlend/SetViewTargetBlend.h" },
				{ "ModuleRelativePath", "SetViewTargetBlend/SetViewTargetBlend.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyActor_MetaData[] = {
				{ "Category", "SetViewTargetBlend" },
				{ "ModuleRelativePath", "SetViewTargetBlend/SetViewTargetBlend.h" },
				{ "ToolTip", "declare variables" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyActor = { UE4CodeGen_Private::EPropertyClass::Object, "MyActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ASetViewTargetBlend, MyActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_MyActor_MetaData, ARRAY_COUNT(NewProp_MyActor_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MyActor,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASetViewTargetBlend>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASetViewTargetBlend::StaticClass,
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
	IMPLEMENT_CLASS(ASetViewTargetBlend, 3040495823);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASetViewTargetBlend(Z_Construct_UClass_ASetViewTargetBlend, &ASetViewTargetBlend::StaticClass, TEXT("/Script/UnrealCPP"), TEXT("ASetViewTargetBlend"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASetViewTargetBlend);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
