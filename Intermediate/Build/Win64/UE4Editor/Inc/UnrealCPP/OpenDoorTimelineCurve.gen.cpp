// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "OpenDoorTimelineCurve/OpenDoorTimelineCurve.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenDoorTimelineCurve() {}
// Cross Module References
	UNREALCPP_API UClass* Z_Construct_UClass_AOpenDoorTimelineCurve_NoRegister();
	UNREALCPP_API UClass* Z_Construct_UClass_AOpenDoorTimelineCurve();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnrealCPP();
	UNREALCPP_API UFunction* Z_Construct_UFunction_AOpenDoorTimelineCurve_ControlDoor();
	UNREALCPP_API UFunction* Z_Construct_UFunction_AOpenDoorTimelineCurve_SetState();
	UNREALCPP_API UFunction* Z_Construct_UFunction_AOpenDoorTimelineCurve_ToggleDoor();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AOpenDoorTimelineCurve::StaticRegisterNativesAOpenDoorTimelineCurve()
	{
		UClass* Class = AOpenDoorTimelineCurve::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ControlDoor", &AOpenDoorTimelineCurve::execControlDoor },
			{ "SetState", &AOpenDoorTimelineCurve::execSetState },
			{ "ToggleDoor", &AOpenDoorTimelineCurve::execToggleDoor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AOpenDoorTimelineCurve_ControlDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "OpenDoorTimelineCurve/OpenDoorTimelineCurve.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AOpenDoorTimelineCurve, "ControlDoor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AOpenDoorTimelineCurve_SetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "OpenDoorTimelineCurve/OpenDoorTimelineCurve.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AOpenDoorTimelineCurve, "SetState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AOpenDoorTimelineCurve_ToggleDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "OpenDoorTimelineCurve/OpenDoorTimelineCurve.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AOpenDoorTimelineCurve, "ToggleDoor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AOpenDoorTimelineCurve_NoRegister()
	{
		return AOpenDoorTimelineCurve::StaticClass();
	}
	UClass* Z_Construct_UClass_AOpenDoorTimelineCurve()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_UnrealCPP,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AOpenDoorTimelineCurve_ControlDoor, "ControlDoor" }, // 3157826175
				{ &Z_Construct_UFunction_AOpenDoorTimelineCurve_SetState, "SetState" }, // 635653188
				{ &Z_Construct_UFunction_AOpenDoorTimelineCurve_ToggleDoor, "ToggleDoor" }, // 4115520619
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "OpenDoorTimelineCurve/OpenDoorTimelineCurve.h" },
				{ "ModuleRelativePath", "OpenDoorTimelineCurve/OpenDoorTimelineCurve.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorCurve_MetaData[] = {
				{ "Category", "OpenDoorTimelineCurve" },
				{ "ModuleRelativePath", "OpenDoorTimelineCurve/OpenDoorTimelineCurve.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DoorCurve = { UE4CodeGen_Private::EPropertyClass::Object, "DoorCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AOpenDoorTimelineCurve, DoorCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(NewProp_DoorCurve_MetaData, ARRAY_COUNT(NewProp_DoorCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorFrame_MetaData[] = {
				{ "Category", "OpenDoorTimelineCurve" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "OpenDoorTimelineCurve/OpenDoorTimelineCurve.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DoorFrame = { UE4CodeGen_Private::EPropertyClass::Object, "DoorFrame", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(AOpenDoorTimelineCurve, DoorFrame), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_DoorFrame_MetaData, ARRAY_COUNT(NewProp_DoorFrame_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Door_MetaData[] = {
				{ "Category", "OpenDoorTimelineCurve" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "OpenDoorTimelineCurve/OpenDoorTimelineCurve.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Door = { UE4CodeGen_Private::EPropertyClass::Object, "Door", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(AOpenDoorTimelineCurve, Door), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_Door_MetaData, ARRAY_COUNT(NewProp_Door_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DoorCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DoorFrame,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Door,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AOpenDoorTimelineCurve>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AOpenDoorTimelineCurve::StaticClass,
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
	IMPLEMENT_CLASS(AOpenDoorTimelineCurve, 1075728573);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOpenDoorTimelineCurve(Z_Construct_UClass_AOpenDoorTimelineCurve, &AOpenDoorTimelineCurve::StaticClass, TEXT("/Script/UnrealCPP"), TEXT("AOpenDoorTimelineCurve"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOpenDoorTimelineCurve);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
