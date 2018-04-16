// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "LightSwitchPushButton/LightSwitchPushButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightSwitchPushButton() {}
// Cross Module References
	UNREALCPP_API UClass* Z_Construct_UClass_ALightSwitchPushButton_NoRegister();
	UNREALCPP_API UClass* Z_Construct_UClass_ALightSwitchPushButton();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnrealCPP();
	UNREALCPP_API UFunction* Z_Construct_UFunction_ALightSwitchPushButton_ToggleLight();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
// End Cross Module References
	void ALightSwitchPushButton::StaticRegisterNativesALightSwitchPushButton()
	{
		UClass* Class = ALightSwitchPushButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ToggleLight", &ALightSwitchPushButton::execToggleLight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ALightSwitchPushButton_ToggleLight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Light Switch" },
				{ "ModuleRelativePath", "LightSwitchPushButton/LightSwitchPushButton.h" },
				{ "ToolTip", "declare ToggleLight function" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ALightSwitchPushButton, "ToggleLight", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALightSwitchPushButton_NoRegister()
	{
		return ALightSwitchPushButton::StaticClass();
	}
	UClass* Z_Construct_UClass_ALightSwitchPushButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_UnrealCPP,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ALightSwitchPushButton_ToggleLight, "ToggleLight" }, // 1975856571
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "LightSwitchPushButton/LightSwitchPushButton.h" },
				{ "ModuleRelativePath", "LightSwitchPushButton/LightSwitchPushButton.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightIntensity_MetaData[] = {
				{ "Category", "Light Switch" },
				{ "ModuleRelativePath", "LightSwitchPushButton/LightSwitchPushButton.h" },
				{ "ToolTip", "declare light intensity variable" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LightIntensity = { UE4CodeGen_Private::EPropertyClass::Float, "LightIntensity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020001, 1, nullptr, STRUCT_OFFSET(ALightSwitchPushButton, LightIntensity), METADATA_PARAMS(NewProp_LightIntensity_MetaData, ARRAY_COUNT(NewProp_LightIntensity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightSphere_MetaData[] = {
				{ "Category", "Light Switch" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "LightSwitchPushButton/LightSwitchPushButton.h" },
				{ "ToolTip", "declare sphere comp" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LightSphere = { UE4CodeGen_Private::EPropertyClass::Object, "LightSphere", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(ALightSwitchPushButton, LightSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(NewProp_LightSphere_MetaData, ARRAY_COUNT(NewProp_LightSphere_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointLight_MetaData[] = {
				{ "Category", "Light Switch" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "LightSwitchPushButton/LightSwitchPushButton.h" },
				{ "ToolTip", "declare point light comp" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PointLight = { UE4CodeGen_Private::EPropertyClass::Object, "PointLight", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(ALightSwitchPushButton, PointLight), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(NewProp_PointLight_MetaData, ARRAY_COUNT(NewProp_PointLight_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LightIntensity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LightSphere,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PointLight,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ALightSwitchPushButton>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ALightSwitchPushButton::StaticClass,
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
	IMPLEMENT_CLASS(ALightSwitchPushButton, 1757453903);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALightSwitchPushButton(Z_Construct_UClass_ALightSwitchPushButton, &ALightSwitchPushButton::StaticClass, TEXT("/Script/UnrealCPP"), TEXT("ALightSwitchPushButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALightSwitchPushButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
