// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "HideActor/HideActor.h"
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
	UFunction* Z_Construct_UFunction_AHideActor_DisableActor()
	{
		struct HideActor_eventDisableActor_Parms
		{
			bool toHide;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_toHide_SetBit = [](void* Obj){ ((HideActor_eventDisableActor_Parms*)Obj)->toHide = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_toHide = { UE4CodeGen_Private::EPropertyClass::Bool, "toHide", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(HideActor_eventDisableActor_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_toHide_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_toHide,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Disable" },
				{ "ModuleRelativePath", "HideActor/HideActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHideActor, "DisableActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(HideActor_eventDisableActor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHideActor_NoRegister()
	{
		return AHideActor::StaticClass();
	}
	UClass* Z_Construct_UClass_AHideActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_UnrealCPP,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AHideActor_DisableActor, "DisableActor" }, // 81026658
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "HideActor/HideActor.h" },
				{ "ModuleRelativePath", "HideActor/HideActor.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HideInGame_MetaData[] = {
				{ "Category", "Disable" },
				{ "ModuleRelativePath", "HideActor/HideActor.h" },
			};
#endif
			auto NewProp_HideInGame_SetBit = [](void* Obj){ ((AHideActor*)Obj)->HideInGame = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HideInGame = { UE4CodeGen_Private::EPropertyClass::Bool, "HideInGame", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AHideActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_HideInGame_SetBit)>::SetBit, METADATA_PARAMS(NewProp_HideInGame_MetaData, ARRAY_COUNT(NewProp_HideInGame_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HideInGame,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AHideActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AHideActor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(AHideActor, 2363265034);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHideActor(Z_Construct_UClass_AHideActor, &AHideActor::StaticClass, TEXT("/Script/UnrealCPP"), TEXT("AHideActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHideActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
