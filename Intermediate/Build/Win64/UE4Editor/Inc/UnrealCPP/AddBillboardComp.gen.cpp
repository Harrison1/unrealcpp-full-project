// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "AddBillboardComp/AddBillboardComp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAddBillboardComp() {}
// Cross Module References
	UNREALCPP_API UClass* Z_Construct_UClass_AAddBillboardComp_NoRegister();
	UNREALCPP_API UClass* Z_Construct_UClass_AAddBillboardComp();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnrealCPP();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
// End Cross Module References
	void AAddBillboardComp::StaticRegisterNativesAAddBillboardComp()
	{
	}
	UClass* Z_Construct_UClass_AAddBillboardComp_NoRegister()
	{
		return AAddBillboardComp::StaticClass();
	}
	UClass* Z_Construct_UClass_AAddBillboardComp()
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
				{ "IncludePath", "AddBillboardComp/AddBillboardComp.h" },
				{ "ModuleRelativePath", "AddBillboardComp/AddBillboardComp.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyBillboardComp_MetaData[] = {
				{ "Category", "AddBillboardComp" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "AddBillboardComp/AddBillboardComp.h" },
				{ "ToolTip", "declare point light comp" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyBillboardComp = { UE4CodeGen_Private::EPropertyClass::Object, "MyBillboardComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(AAddBillboardComp, MyBillboardComp), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(NewProp_MyBillboardComp_MetaData, ARRAY_COUNT(NewProp_MyBillboardComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MyBillboardComp,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AAddBillboardComp>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AAddBillboardComp::StaticClass,
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
	IMPLEMENT_CLASS(AAddBillboardComp, 903469417);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAddBillboardComp(Z_Construct_UClass_AAddBillboardComp, &AAddBillboardComp::StaticClass, TEXT("/Script/UnrealCPP"), TEXT("AAddBillboardComp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAddBillboardComp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
