// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCPP/HideActor/HideActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHideActor() {}
// Cross Module References
	UNREALCPP_API UClass* Z_Construct_UClass_AHideActor_NoRegister();
	UNREALCPP_API UClass* Z_Construct_UClass_AHideActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnrealCPP();
	UNREALCPP_API UFunction* Z_Construct_UFunction_AHideActor_DisableActor();
// End Cross Module References
	void AHideActor::StaticRegisterNativesAHideActor()
	{
		UClass* Class = AHideActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisableActor", &AHideActor::execDisableActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHideActor_DisableActor_Statics
	{
		struct HideActor_eventDisableActor_Parms
		{
			bool toHide;
		};
		static void NewProp_toHide_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_toHide;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AHideActor_DisableActor_Statics::NewProp_toHide_SetBit(void* Obj)
	{
		((HideActor_eventDisableActor_Parms*)Obj)->toHide = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHideActor_DisableActor_Statics::NewProp_toHide = { UE4CodeGen_Private::EPropertyClass::Bool, "toHide", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(HideActor_eventDisableActor_Parms), &Z_Construct_UFunction_AHideActor_DisableActor_Statics::NewProp_toHide_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHideActor_DisableActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHideActor_DisableActor_Statics::NewProp_toHide,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHideActor_DisableActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Disable" },
		{ "ModuleRelativePath", "HideActor/HideActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHideActor_DisableActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHideActor, "DisableActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(HideActor_eventDisableActor_Parms), Z_Construct_UFunction_AHideActor_DisableActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AHideActor_DisableActor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHideActor_DisableActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AHideActor_DisableActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHideActor_DisableActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHideActor_DisableActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHideActor_NoRegister()
	{
		return AHideActor::StaticClass();
	}
	struct Z_Construct_UClass_AHideActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HideInGame_MetaData[];
#endif
		static void NewProp_HideInGame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HideInGame;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHideActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCPP,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHideActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHideActor_DisableActor, "DisableActor" }, // 2969561065
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHideActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HideActor/HideActor.h" },
		{ "ModuleRelativePath", "HideActor/HideActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHideActor_Statics::NewProp_HideInGame_MetaData[] = {
		{ "Category", "Disable" },
		{ "ModuleRelativePath", "HideActor/HideActor.h" },
	};
#endif
	void Z_Construct_UClass_AHideActor_Statics::NewProp_HideInGame_SetBit(void* Obj)
	{
		((AHideActor*)Obj)->HideInGame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHideActor_Statics::NewProp_HideInGame = { UE4CodeGen_Private::EPropertyClass::Bool, "HideInGame", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AHideActor), &Z_Construct_UClass_AHideActor_Statics::NewProp_HideInGame_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHideActor_Statics::NewProp_HideInGame_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHideActor_Statics::NewProp_HideInGame_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHideActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHideActor_Statics::NewProp_HideInGame,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHideActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHideActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHideActor_Statics::ClassParams = {
		&AHideActor::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AHideActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AHideActor_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AHideActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AHideActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHideActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHideActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHideActor, 1511618266);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHideActor(Z_Construct_UClass_AHideActor, &AHideActor::StaticClass, TEXT("/Script/UnrealCPP"), TEXT("AHideActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHideActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
