// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "UnrealCPPGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealCPPGameMode() {}
// Cross Module References
	UNREALCPP_API UEnum* Z_Construct_UEnum_UnrealCPP_EGamePlayState();
	UPackage* Z_Construct_UPackage__Script_UnrealCPP();
	UNREALCPP_API UClass* Z_Construct_UClass_AUnrealCPPGameMode_NoRegister();
	UNREALCPP_API UClass* Z_Construct_UClass_AUnrealCPPGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UNREALCPP_API UFunction* Z_Construct_UFunction_AUnrealCPPGameMode_GetCurrentState();
// End Cross Module References
	static UEnum* EGamePlayState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealCPP_EGamePlayState, Z_Construct_UPackage__Script_UnrealCPP(), TEXT("EGamePlayState"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGamePlayState(EGamePlayState_StaticEnum, TEXT("/Script/UnrealCPP"), TEXT("EGamePlayState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealCPP_EGamePlayState_CRC() { return 4255709172U; }
	UEnum* Z_Construct_UEnum_UnrealCPP_EGamePlayState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealCPP();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGamePlayState"), 0, Get_Z_Construct_UEnum_UnrealCPP_EGamePlayState_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGamePlayState::EPlaying", (int64)EGamePlayState::EPlaying },
				{ "EGamePlayState::EGameOver", (int64)EGamePlayState::EGameOver },
				{ "EGamePlayState::EUnknown", (int64)EGamePlayState::EUnknown },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "UnrealCPPGameMode.h" },
				{ "ToolTip", "enum to store the current state of gameplay" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealCPP,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EGamePlayState",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EGamePlayState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void AUnrealCPPGameMode::StaticRegisterNativesAUnrealCPPGameMode()
	{
		UClass* Class = AUnrealCPPGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentState", &AUnrealCPPGameMode::execGetCurrentState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AUnrealCPPGameMode_GetCurrentState()
	{
		struct UnrealCPPGameMode_eventGetCurrentState_Parms
		{
			EGamePlayState ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(UnrealCPPGameMode_eventGetCurrentState_Parms, ReturnValue), Z_Construct_UEnum_UnrealCPP_EGamePlayState, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Int, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Health" },
				{ "ModuleRelativePath", "UnrealCPPGameMode.h" },
				{ "ToolTip", "Returns the current playing state" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnrealCPPGameMode, "GetCurrentState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(UnrealCPPGameMode_eventGetCurrentState_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AUnrealCPPGameMode_NoRegister()
	{
		return AUnrealCPPGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AUnrealCPPGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_UnrealCPP,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AUnrealCPPGameMode_GetCurrentState, "GetCurrentState" }, // 2203592585
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "UnrealCPPGameMode.h" },
				{ "ModuleRelativePath", "UnrealCPPGameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AUnrealCPPGameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AUnrealCPPGameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnrealCPPGameMode, 1112496958);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnrealCPPGameMode(Z_Construct_UClass_AUnrealCPPGameMode, &AUnrealCPPGameMode::StaticClass, TEXT("/Script/UnrealCPP"), TEXT("AUnrealCPPGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnrealCPPGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
