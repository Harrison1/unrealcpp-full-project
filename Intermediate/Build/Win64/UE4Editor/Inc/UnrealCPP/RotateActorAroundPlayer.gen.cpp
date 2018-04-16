// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "RotateActorAroundPlayer/RotateActorAroundPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRotateActorAroundPlayer() {}
// Cross Module References
	UNREALCPP_API UClass* Z_Construct_UClass_ARotateActorAroundPlayer_NoRegister();
	UNREALCPP_API UClass* Z_Construct_UClass_ARotateActorAroundPlayer();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnrealCPP();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void ARotateActorAroundPlayer::StaticRegisterNativesARotateActorAroundPlayer()
	{
	}
	UClass* Z_Construct_UClass_ARotateActorAroundPlayer_NoRegister()
	{
		return ARotateActorAroundPlayer::StaticClass();
	}
	UClass* Z_Construct_UClass_ARotateActorAroundPlayer()
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
				{ "IncludePath", "RotateActorAroundPlayer/RotateActorAroundPlayer.h" },
				{ "ModuleRelativePath", "RotateActorAroundPlayer/RotateActorAroundPlayer.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Multiplier_MetaData[] = {
				{ "Category", "Movement" },
				{ "ModuleRelativePath", "RotateActorAroundPlayer/RotateActorAroundPlayer.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Multiplier = { UE4CodeGen_Private::EPropertyClass::Float, "Multiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ARotateActorAroundPlayer, Multiplier), METADATA_PARAMS(NewProp_Multiplier_MetaData, ARRAY_COUNT(NewProp_Multiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisVector_MetaData[] = {
				{ "Category", "Movement" },
				{ "ModuleRelativePath", "RotateActorAroundPlayer/RotateActorAroundPlayer.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AxisVector = { UE4CodeGen_Private::EPropertyClass::Struct, "AxisVector", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ARotateActorAroundPlayer, AxisVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_AxisVector_MetaData, ARRAY_COUNT(NewProp_AxisVector_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dimensions_MetaData[] = {
				{ "Category", "Movement" },
				{ "ModuleRelativePath", "RotateActorAroundPlayer/RotateActorAroundPlayer.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Dimensions = { UE4CodeGen_Private::EPropertyClass::Struct, "Dimensions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ARotateActorAroundPlayer, Dimensions), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Dimensions_MetaData, ARRAY_COUNT(NewProp_Dimensions_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngleAxis_MetaData[] = {
				{ "Category", "Movement" },
				{ "ModuleRelativePath", "RotateActorAroundPlayer/RotateActorAroundPlayer.h" },
				{ "ToolTip", "declare our float variables" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngleAxis = { UE4CodeGen_Private::EPropertyClass::Float, "AngleAxis", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ARotateActorAroundPlayer, AngleAxis), METADATA_PARAMS(NewProp_AngleAxis_MetaData, ARRAY_COUNT(NewProp_AngleAxis_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Multiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AxisVector,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Dimensions,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AngleAxis,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ARotateActorAroundPlayer>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ARotateActorAroundPlayer::StaticClass,
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
	IMPLEMENT_CLASS(ARotateActorAroundPlayer, 2466980828);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARotateActorAroundPlayer(Z_Construct_UClass_ARotateActorAroundPlayer, &ARotateActorAroundPlayer::StaticClass, TEXT("/Script/UnrealCPP"), TEXT("ARotateActorAroundPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARotateActorAroundPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
