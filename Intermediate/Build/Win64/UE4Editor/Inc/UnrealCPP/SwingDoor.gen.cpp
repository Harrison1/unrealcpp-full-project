// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "SwingDoor/SwingDoor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSwingDoor() {}
// Cross Module References
	UNREALCPP_API UClass* Z_Construct_UClass_ASwingDoor_NoRegister();
	UNREALCPP_API UClass* Z_Construct_UClass_ASwingDoor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnrealCPP();
	UNREALCPP_API UFunction* Z_Construct_UFunction_ASwingDoor_CloseDoor();
	UNREALCPP_API UFunction* Z_Construct_UFunction_ASwingDoor_OpenDoor();
	UNREALCPP_API UFunction* Z_Construct_UFunction_ASwingDoor_ToggleDoor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void ASwingDoor::StaticRegisterNativesASwingDoor()
	{
		UClass* Class = ASwingDoor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseDoor", &ASwingDoor::execCloseDoor },
			{ "OpenDoor", &ASwingDoor::execOpenDoor },
			{ "ToggleDoor", &ASwingDoor::execToggleDoor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ASwingDoor_CloseDoor()
	{
		struct SwingDoor_eventCloseDoor_Parms
		{
			float dt;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_dt = { UE4CodeGen_Private::EPropertyClass::Float, "dt", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SwingDoor_eventCloseDoor_Parms, dt), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_dt,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "SwingDoor/SwingDoor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASwingDoor, "CloseDoor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(SwingDoor_eventCloseDoor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASwingDoor_OpenDoor()
	{
		struct SwingDoor_eventOpenDoor_Parms
		{
			float dt;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_dt = { UE4CodeGen_Private::EPropertyClass::Float, "dt", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SwingDoor_eventOpenDoor_Parms, dt), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_dt,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "SwingDoor/SwingDoor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASwingDoor, "OpenDoor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(SwingDoor_eventOpenDoor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASwingDoor_ToggleDoor()
	{
		struct SwingDoor_eventToggleDoor_Parms
		{
			FVector ForwardVector;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForwardVector = { UE4CodeGen_Private::EPropertyClass::Struct, "ForwardVector", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SwingDoor_eventToggleDoor_Parms, ForwardVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForwardVector,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "SwingDoor/SwingDoor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASwingDoor, "ToggleDoor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00820401, sizeof(SwingDoor_eventToggleDoor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASwingDoor_NoRegister()
	{
		return ASwingDoor::StaticClass();
	}
	UClass* Z_Construct_UClass_ASwingDoor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_UnrealCPP,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ASwingDoor_CloseDoor, "CloseDoor" }, // 486153219
				{ &Z_Construct_UFunction_ASwingDoor_OpenDoor, "OpenDoor" }, // 1415869423
				{ &Z_Construct_UFunction_ASwingDoor_ToggleDoor, "ToggleDoor" }, // 539589268
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "SwingDoor/SwingDoor.h" },
				{ "ModuleRelativePath", "SwingDoor/SwingDoor.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxComp_MetaData[] = {
				{ "Category", "BoxComp" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "SwingDoor/SwingDoor.h" },
				{ "ToolTip", "declare sphere comp" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxComp = { UE4CodeGen_Private::EPropertyClass::Object, "BoxComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(ASwingDoor, BoxComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(NewProp_BoxComp_MetaData, ARRAY_COUNT(NewProp_BoxComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoxComp,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASwingDoor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASwingDoor::StaticClass,
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
	IMPLEMENT_CLASS(ASwingDoor, 2018821646);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASwingDoor(Z_Construct_UClass_ASwingDoor, &ASwingDoor::StaticClass, TEXT("/Script/UnrealCPP"), TEXT("ASwingDoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASwingDoor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
