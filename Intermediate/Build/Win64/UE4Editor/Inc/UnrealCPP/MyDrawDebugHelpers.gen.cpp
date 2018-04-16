// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MyDrawDebugHelpers/MyDrawDebugHelpers.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyDrawDebugHelpers() {}
// Cross Module References
	UNREALCPP_API UClass* Z_Construct_UClass_AMyDrawDebugHelpers_NoRegister();
	UNREALCPP_API UClass* Z_Construct_UClass_AMyDrawDebugHelpers();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnrealCPP();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void AMyDrawDebugHelpers::StaticRegisterNativesAMyDrawDebugHelpers()
	{
	}
	UClass* Z_Construct_UClass_AMyDrawDebugHelpers_NoRegister()
	{
		return AMyDrawDebugHelpers::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyDrawDebugHelpers()
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
				{ "IncludePath", "MyDrawDebugHelpers/MyDrawDebugHelpers.h" },
				{ "ModuleRelativePath", "MyDrawDebugHelpers/MyDrawDebugHelpers.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyTransform_MetaData[] = {
				{ "Category", "Locations" },
				{ "ModuleRelativePath", "MyDrawDebugHelpers/MyDrawDebugHelpers.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MyTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "MyTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AMyDrawDebugHelpers, MyTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(NewProp_MyTransform_MetaData, ARRAY_COUNT(NewProp_MyTransform_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyBox_MetaData[] = {
				{ "Category", "Locations" },
				{ "ModuleRelativePath", "MyDrawDebugHelpers/MyDrawDebugHelpers.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MyBox = { UE4CodeGen_Private::EPropertyClass::Struct, "MyBox", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AMyDrawDebugHelpers, MyBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(NewProp_MyBox_MetaData, ARRAY_COUNT(NewProp_MyBox_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CircleMatrix_MetaData[] = {
				{ "Category", "Locations" },
				{ "ModuleRelativePath", "MyDrawDebugHelpers/MyDrawDebugHelpers.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CircleMatrix = { UE4CodeGen_Private::EPropertyClass::Struct, "CircleMatrix", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AMyDrawDebugHelpers, CircleMatrix), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(NewProp_CircleMatrix_MetaData, ARRAY_COUNT(NewProp_CircleMatrix_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationFive_MetaData[] = {
				{ "Category", "Locations" },
				{ "ModuleRelativePath", "MyDrawDebugHelpers/MyDrawDebugHelpers.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocationFive = { UE4CodeGen_Private::EPropertyClass::Struct, "LocationFive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AMyDrawDebugHelpers, LocationFive), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_LocationFive_MetaData, ARRAY_COUNT(NewProp_LocationFive_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationFour_MetaData[] = {
				{ "Category", "Locations" },
				{ "ModuleRelativePath", "MyDrawDebugHelpers/MyDrawDebugHelpers.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocationFour = { UE4CodeGen_Private::EPropertyClass::Struct, "LocationFour", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AMyDrawDebugHelpers, LocationFour), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_LocationFour_MetaData, ARRAY_COUNT(NewProp_LocationFour_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationThree_MetaData[] = {
				{ "Category", "Locations" },
				{ "ModuleRelativePath", "MyDrawDebugHelpers/MyDrawDebugHelpers.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocationThree = { UE4CodeGen_Private::EPropertyClass::Struct, "LocationThree", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AMyDrawDebugHelpers, LocationThree), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_LocationThree_MetaData, ARRAY_COUNT(NewProp_LocationThree_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationTwo_MetaData[] = {
				{ "Category", "Locations" },
				{ "ModuleRelativePath", "MyDrawDebugHelpers/MyDrawDebugHelpers.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocationTwo = { UE4CodeGen_Private::EPropertyClass::Struct, "LocationTwo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AMyDrawDebugHelpers, LocationTwo), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_LocationTwo_MetaData, ARRAY_COUNT(NewProp_LocationTwo_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationOne_MetaData[] = {
				{ "Category", "Locations" },
				{ "ModuleRelativePath", "MyDrawDebugHelpers/MyDrawDebugHelpers.h" },
				{ "ToolTip", "declare location variables" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocationOne = { UE4CodeGen_Private::EPropertyClass::Struct, "LocationOne", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AMyDrawDebugHelpers, LocationOne), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_LocationOne_MetaData, ARRAY_COUNT(NewProp_LocationOne_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MyTransform,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MyBox,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CircleMatrix,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocationFive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocationFour,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocationThree,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocationTwo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocationOne,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AMyDrawDebugHelpers>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AMyDrawDebugHelpers::StaticClass,
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
	IMPLEMENT_CLASS(AMyDrawDebugHelpers, 3551473545);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyDrawDebugHelpers(Z_Construct_UClass_AMyDrawDebugHelpers, &AMyDrawDebugHelpers::StaticClass, TEXT("/Script/UnrealCPP"), TEXT("AMyDrawDebugHelpers"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyDrawDebugHelpers);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
