// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "UnrealCPPCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealCPPCharacter() {}
// Cross Module References
	UNREALCPP_API UClass* Z_Construct_UClass_AUnrealCPPCharacter_NoRegister();
	UNREALCPP_API UClass* Z_Construct_UClass_AUnrealCPPCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_UnrealCPP();
	UNREALCPP_API UFunction* Z_Construct_UFunction_AUnrealCPPCharacter_DamageTimer();
	UNREALCPP_API UFunction* Z_Construct_UFunction_AUnrealCPPCharacter_GetHealth();
	UNREALCPP_API UFunction* Z_Construct_UFunction_AUnrealCPPCharacter_GetHealthIntText();
	UNREALCPP_API UFunction* Z_Construct_UFunction_AUnrealCPPCharacter_GetMagic();
	UNREALCPP_API UFunction* Z_Construct_UFunction_AUnrealCPPCharacter_GetMagicIntText();
	UNREALCPP_API UFunction* Z_Construct_UFunction_AUnrealCPPCharacter_PlayFlash();
	UNREALCPP_API UFunction* Z_Construct_UFunction_AUnrealCPPCharacter_ReceivePointDamage();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	UNREALCPP_API UFunction* Z_Construct_UFunction_AUnrealCPPCharacter_SetDamageState();
	UNREALCPP_API UFunction* Z_Construct_UFunction_AUnrealCPPCharacter_SetMagicState();
	UNREALCPP_API UFunction* Z_Construct_UFunction_AUnrealCPPCharacter_SetMagicValue();
	UNREALCPP_API UFunction* Z_Construct_UFunction_AUnrealCPPCharacter_UpdateHealth();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UNREALCPP_API UClass* Z_Construct_UClass_AUnrealCPPProjectile_NoRegister();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void AUnrealCPPCharacter::StaticRegisterNativesAUnrealCPPCharacter()
	{
		UClass* Class = AUnrealCPPCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DamageTimer", &AUnrealCPPCharacter::execDamageTimer },
			{ "GetHealth", &AUnrealCPPCharacter::execGetHealth },
			{ "GetHealthIntText", &AUnrealCPPCharacter::execGetHealthIntText },
			{ "GetMagic", &AUnrealCPPCharacter::execGetMagic },
			{ "GetMagicIntText", &AUnrealCPPCharacter::execGetMagicIntText },
			{ "PlayFlash", &AUnrealCPPCharacter::execPlayFlash },
			{ "ReceivePointDamage", &AUnrealCPPCharacter::execReceivePointDamage },
			{ "SetDamageState", &AUnrealCPPCharacter::execSetDamageState },
			{ "SetMagicState", &AUnrealCPPCharacter::execSetMagicState },
			{ "SetMagicValue", &AUnrealCPPCharacter::execSetMagicValue },
			{ "UpdateHealth", &AUnrealCPPCharacter::execUpdateHealth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AUnrealCPPCharacter_DamageTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "UnrealCPPCharacter.h" },
				{ "ToolTip", "Damage Timer" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnrealCPPCharacter, "DamageTimer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AUnrealCPPCharacter_GetHealth()
	{
		struct UnrealCPPCharacter_eventGetHealth_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(UnrealCPPCharacter_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Health" },
				{ "ModuleRelativePath", "UnrealCPPCharacter.h" },
				{ "ToolTip", "Get Health" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnrealCPPCharacter, "GetHealth", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(UnrealCPPCharacter_eventGetHealth_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AUnrealCPPCharacter_GetHealthIntText()
	{
		struct UnrealCPPCharacter_eventGetHealthIntText_Parms
		{
			FText ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(UnrealCPPCharacter_eventGetHealthIntText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Health" },
				{ "ModuleRelativePath", "UnrealCPPCharacter.h" },
				{ "ToolTip", "Get Health Text" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnrealCPPCharacter, "GetHealthIntText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(UnrealCPPCharacter_eventGetHealthIntText_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AUnrealCPPCharacter_GetMagic()
	{
		struct UnrealCPPCharacter_eventGetMagic_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(UnrealCPPCharacter_eventGetMagic_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Health" },
				{ "ModuleRelativePath", "UnrealCPPCharacter.h" },
				{ "ToolTip", "Get Health" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnrealCPPCharacter, "GetMagic", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(UnrealCPPCharacter_eventGetMagic_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AUnrealCPPCharacter_GetMagicIntText()
	{
		struct UnrealCPPCharacter_eventGetMagicIntText_Parms
		{
			FText ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(UnrealCPPCharacter_eventGetMagicIntText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Magic" },
				{ "ModuleRelativePath", "UnrealCPPCharacter.h" },
				{ "ToolTip", "Get Magic Text" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnrealCPPCharacter, "GetMagicIntText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(UnrealCPPCharacter_eventGetMagicIntText_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AUnrealCPPCharacter_PlayFlash()
	{
		struct UnrealCPPCharacter_eventPlayFlash_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((UnrealCPPCharacter_eventPlayFlash_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UnrealCPPCharacter_eventPlayFlash_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Health" },
				{ "ModuleRelativePath", "UnrealCPPCharacter.h" },
				{ "ToolTip", "Play Flash" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnrealCPPCharacter, "PlayFlash", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(UnrealCPPCharacter_eventPlayFlash_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AUnrealCPPCharacter_ReceivePointDamage()
	{
		struct UnrealCPPCharacter_eventReceivePointDamage_Parms
		{
			float Damage;
			const UDamageType* DamageType;
			FVector HitLocation;
			FVector HitNormal;
			UPrimitiveComponent* HitComponent;
			FName BoneName;
			FVector ShotFromDirection;
			AController* InstigatedBy;
			AActor* DamageCauser;
			FHitResult HitInfo;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitInfo_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitInfo = { UE4CodeGen_Private::EPropertyClass::Struct, "HitInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(UnrealCPPCharacter_eventReceivePointDamage_Parms, HitInfo), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(NewProp_HitInfo_MetaData, ARRAY_COUNT(NewProp_HitInfo_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser = { UE4CodeGen_Private::EPropertyClass::Object, "DamageCauser", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UnrealCPPCharacter_eventReceivePointDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy = { UE4CodeGen_Private::EPropertyClass::Object, "InstigatedBy", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UnrealCPPCharacter_eventReceivePointDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShotFromDirection = { UE4CodeGen_Private::EPropertyClass::Struct, "ShotFromDirection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UnrealCPPCharacter_eventReceivePointDamage_Parms, ShotFromDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName = { UE4CodeGen_Private::EPropertyClass::Name, "BoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UnrealCPPCharacter_eventReceivePointDamage_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComponent = { UE4CodeGen_Private::EPropertyClass::Object, "HitComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(UnrealCPPCharacter_eventReceivePointDamage_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_HitComponent_MetaData, ARRAY_COUNT(NewProp_HitComponent_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitNormal = { UE4CodeGen_Private::EPropertyClass::Struct, "HitNormal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UnrealCPPCharacter_eventReceivePointDamage_Parms, HitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "HitLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UnrealCPPCharacter_eventReceivePointDamage_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageType = { UE4CodeGen_Private::EPropertyClass::Object, "DamageType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(UnrealCPPCharacter_eventReceivePointDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(NewProp_DamageType_MetaData, ARRAY_COUNT(NewProp_DamageType_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage = { UE4CodeGen_Private::EPropertyClass::Float, "Damage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UnrealCPPCharacter_eventReceivePointDamage_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HitInfo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DamageCauser,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InstigatedBy,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShotFromDirection,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HitComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HitNormal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HitLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DamageType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Damage,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "UnrealCPPCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnrealCPPCharacter, "ReceivePointDamage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00C20401, sizeof(UnrealCPPCharacter_eventReceivePointDamage_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AUnrealCPPCharacter_SetDamageState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "UnrealCPPCharacter.h" },
				{ "ToolTip", "Set Damage State" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnrealCPPCharacter, "SetDamageState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AUnrealCPPCharacter_SetMagicState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "UnrealCPPCharacter.h" },
				{ "ToolTip", "Set Damage State" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnrealCPPCharacter, "SetMagicState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AUnrealCPPCharacter_SetMagicValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "UnrealCPPCharacter.h" },
				{ "ToolTip", "Set Magic Value" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnrealCPPCharacter, "SetMagicValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AUnrealCPPCharacter_UpdateHealth()
	{
		struct UnrealCPPCharacter_eventUpdateHealth_Parms
		{
			float HealthChange;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthChange = { UE4CodeGen_Private::EPropertyClass::Float, "HealthChange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UnrealCPPCharacter_eventUpdateHealth_Parms, HealthChange), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HealthChange,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Power" },
				{ "ModuleRelativePath", "UnrealCPPCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AUnrealCPPCharacter, "UpdateHealth", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(UnrealCPPCharacter_eventUpdateHealth_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AUnrealCPPCharacter_NoRegister()
	{
		return AUnrealCPPCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AUnrealCPPCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_UnrealCPP,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AUnrealCPPCharacter_DamageTimer, "DamageTimer" }, // 2917780145
				{ &Z_Construct_UFunction_AUnrealCPPCharacter_GetHealth, "GetHealth" }, // 2617765578
				{ &Z_Construct_UFunction_AUnrealCPPCharacter_GetHealthIntText, "GetHealthIntText" }, // 662683509
				{ &Z_Construct_UFunction_AUnrealCPPCharacter_GetMagic, "GetMagic" }, // 4049737757
				{ &Z_Construct_UFunction_AUnrealCPPCharacter_GetMagicIntText, "GetMagicIntText" }, // 2539877593
				{ &Z_Construct_UFunction_AUnrealCPPCharacter_PlayFlash, "PlayFlash" }, // 517973654
				{ &Z_Construct_UFunction_AUnrealCPPCharacter_ReceivePointDamage, "ReceivePointDamage" }, // 1062761891
				{ &Z_Construct_UFunction_AUnrealCPPCharacter_SetDamageState, "SetDamageState" }, // 1464698168
				{ &Z_Construct_UFunction_AUnrealCPPCharacter_SetMagicState, "SetMagicState" }, // 2939536851
				{ &Z_Construct_UFunction_AUnrealCPPCharacter_SetMagicValue, "SetMagicValue" }, // 2277391685
				{ &Z_Construct_UFunction_AUnrealCPPCharacter_UpdateHealth, "UpdateHealth" }, // 916929438
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "UnrealCPPCharacter.h" },
				{ "ModuleRelativePath", "UnrealCPPCharacter.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagicCurve_MetaData[] = {
				{ "Category", "Health" },
				{ "ModuleRelativePath", "UnrealCPPCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MagicCurve = { UE4CodeGen_Private::EPropertyClass::Object, "MagicCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AUnrealCPPCharacter, MagicCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(NewProp_MagicCurve_MetaData, ARRAY_COUNT(NewProp_MagicCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_redFlash_MetaData[] = {
				{ "Category", "Health" },
				{ "ModuleRelativePath", "UnrealCPPCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_redFlash = { UE4CodeGen_Private::EPropertyClass::Float, "redFlash", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AUnrealCPPCharacter, redFlash), METADATA_PARAMS(NewProp_redFlash_MetaData, ARRAY_COUNT(NewProp_redFlash_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagicValue_MetaData[] = {
				{ "Category", "Health" },
				{ "ModuleRelativePath", "UnrealCPPCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MagicValue = { UE4CodeGen_Private::EPropertyClass::Float, "MagicValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AUnrealCPPCharacter, MagicValue), METADATA_PARAMS(NewProp_MagicValue_MetaData, ARRAY_COUNT(NewProp_MagicValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousMagic_MetaData[] = {
				{ "Category", "Health" },
				{ "ModuleRelativePath", "UnrealCPPCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PreviousMagic = { UE4CodeGen_Private::EPropertyClass::Float, "PreviousMagic", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AUnrealCPPCharacter, PreviousMagic), METADATA_PARAMS(NewProp_PreviousMagic_MetaData, ARRAY_COUNT(NewProp_PreviousMagic_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagicPercentage_MetaData[] = {
				{ "Category", "Health" },
				{ "ModuleRelativePath", "UnrealCPPCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MagicPercentage = { UE4CodeGen_Private::EPropertyClass::Float, "MagicPercentage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AUnrealCPPCharacter, MagicPercentage), METADATA_PARAMS(NewProp_MagicPercentage_MetaData, ARRAY_COUNT(NewProp_MagicPercentage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Magic_MetaData[] = {
				{ "Category", "Health" },
				{ "ModuleRelativePath", "UnrealCPPCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Magic = { UE4CodeGen_Private::EPropertyClass::Float, "Magic", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AUnrealCPPCharacter, Magic), METADATA_PARAMS(NewProp_Magic_MetaData, ARRAY_COUNT(NewProp_Magic_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullMagic_MetaData[] = {
				{ "Category", "Health" },
				{ "ModuleRelativePath", "UnrealCPPCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FullMagic = { UE4CodeGen_Private::EPropertyClass::Float, "FullMagic", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AUnrealCPPCharacter, FullMagic), METADATA_PARAMS(NewProp_FullMagic_MetaData, ARRAY_COUNT(NewProp_FullMagic_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousHealth_MetaData[] = {
				{ "Category", "Health" },
				{ "ModuleRelativePath", "UnrealCPPCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PreviousHealth = { UE4CodeGen_Private::EPropertyClass::Float, "PreviousHealth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AUnrealCPPCharacter, PreviousHealth), METADATA_PARAMS(NewProp_PreviousHealth_MetaData, ARRAY_COUNT(NewProp_PreviousHealth_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthPercentage_MetaData[] = {
				{ "Category", "Health" },
				{ "ModuleRelativePath", "UnrealCPPCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthPercentage = { UE4CodeGen_Private::EPropertyClass::Float, "HealthPercentage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AUnrealCPPCharacter, HealthPercentage), METADATA_PARAMS(NewProp_HealthPercentage_MetaData, ARRAY_COUNT(NewProp_HealthPercentage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
				{ "Category", "Health" },
				{ "ModuleRelativePath", "UnrealCPPCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health = { UE4CodeGen_Private::EPropertyClass::Float, "Health", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AUnrealCPPCharacter, Health), METADATA_PARAMS(NewProp_Health_MetaData, ARRAY_COUNT(NewProp_Health_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullHealth_MetaData[] = {
				{ "Category", "Health" },
				{ "ModuleRelativePath", "UnrealCPPCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FullHealth = { UE4CodeGen_Private::EPropertyClass::Float, "FullHealth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AUnrealCPPCharacter, FullHealth), METADATA_PARAMS(NewProp_FullHealth_MetaData, ARRAY_COUNT(NewProp_FullHealth_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsingMotionControllers_MetaData[] = {
				{ "Category", "Gameplay" },
				{ "ModuleRelativePath", "UnrealCPPCharacter.h" },
				{ "ToolTip", "Whether to use motion controller location for aiming." },
			};
#endif
			auto NewProp_bUsingMotionControllers_SetBit = [](void* Obj){ ((AUnrealCPPCharacter*)Obj)->bUsingMotionControllers = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsingMotionControllers = { UE4CodeGen_Private::EPropertyClass::Bool, "bUsingMotionControllers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AUnrealCPPCharacter), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUsingMotionControllers_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUsingMotionControllers_MetaData, ARRAY_COUNT(NewProp_bUsingMotionControllers_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireAnimation_MetaData[] = {
				{ "Category", "Gameplay" },
				{ "ModuleRelativePath", "UnrealCPPCharacter.h" },
				{ "ToolTip", "AnimMontage to play each time we fire" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireAnimation = { UE4CodeGen_Private::EPropertyClass::Object, "FireAnimation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AUnrealCPPCharacter, FireAnimation), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(NewProp_FireAnimation_MetaData, ARRAY_COUNT(NewProp_FireAnimation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[] = {
				{ "Category", "Gameplay" },
				{ "ModuleRelativePath", "UnrealCPPCharacter.h" },
				{ "ToolTip", "Sound to play each time we fire" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireSound = { UE4CodeGen_Private::EPropertyClass::Object, "FireSound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AUnrealCPPCharacter, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(NewProp_FireSound_MetaData, ARRAY_COUNT(NewProp_FireSound_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
				{ "Category", "Projectile" },
				{ "ModuleRelativePath", "UnrealCPPCharacter.h" },
				{ "ToolTip", "Projectile class to spawn" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass = { UE4CodeGen_Private::EPropertyClass::Class, "ProjectileClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000010001, 1, nullptr, STRUCT_OFFSET(AUnrealCPPCharacter, ProjectileClass), Z_Construct_UClass_AUnrealCPPProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_ProjectileClass_MetaData, ARRAY_COUNT(NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunOffset_MetaData[] = {
				{ "Category", "Gameplay" },
				{ "ModuleRelativePath", "UnrealCPPCharacter.h" },
				{ "ToolTip", "Gun muzzle's offset from the characters location" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GunOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "GunOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AUnrealCPPCharacter, GunOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_GunOffset_MetaData, ARRAY_COUNT(NewProp_GunOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "UnrealCPPCharacter.h" },
				{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate = { UE4CodeGen_Private::EPropertyClass::Float, "BaseLookUpRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(AUnrealCPPCharacter, BaseLookUpRate), METADATA_PARAMS(NewProp_BaseLookUpRate_MetaData, ARRAY_COUNT(NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "UnrealCPPCharacter.h" },
				{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate = { UE4CodeGen_Private::EPropertyClass::Float, "BaseTurnRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(AUnrealCPPCharacter, BaseTurnRate), METADATA_PARAMS(NewProp_BaseTurnRate_MetaData, ARRAY_COUNT(NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_L_MotionController_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "UnrealCPPCharacter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "UnrealCPPCharacter.h" },
				{ "ToolTip", "Motion controller (left hand)" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_L_MotionController = { UE4CodeGen_Private::EPropertyClass::Object, "L_MotionController", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AUnrealCPPCharacter, L_MotionController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(NewProp_L_MotionController_MetaData, ARRAY_COUNT(NewProp_L_MotionController_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_R_MotionController_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "UnrealCPPCharacter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "UnrealCPPCharacter.h" },
				{ "ToolTip", "Motion controller (right hand)" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_R_MotionController = { UE4CodeGen_Private::EPropertyClass::Object, "R_MotionController", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AUnrealCPPCharacter, R_MotionController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(NewProp_R_MotionController_MetaData, ARRAY_COUNT(NewProp_R_MotionController_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Camera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "UnrealCPPCharacter.h" },
				{ "ToolTip", "First person camera" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent = { UE4CodeGen_Private::EPropertyClass::Object, "FirstPersonCameraComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AUnrealCPPCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(NewProp_FirstPersonCameraComponent_MetaData, ARRAY_COUNT(NewProp_FirstPersonCameraComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VR_MuzzleLocation_MetaData[] = {
				{ "Category", "Mesh" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "UnrealCPPCharacter.h" },
				{ "ToolTip", "Location on VR gun mesh where projectiles should spawn." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VR_MuzzleLocation = { UE4CodeGen_Private::EPropertyClass::Object, "VR_MuzzleLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000b0009, 1, nullptr, STRUCT_OFFSET(AUnrealCPPCharacter, VR_MuzzleLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_VR_MuzzleLocation_MetaData, ARRAY_COUNT(NewProp_VR_MuzzleLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VR_Gun_MetaData[] = {
				{ "Category", "Mesh" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "UnrealCPPCharacter.h" },
				{ "ToolTip", "Gun mesh: VR view (attached to the VR controller directly, no arm, just the actual gun)" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VR_Gun = { UE4CodeGen_Private::EPropertyClass::Object, "VR_Gun", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000b0009, 1, nullptr, STRUCT_OFFSET(AUnrealCPPCharacter, VR_Gun), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(NewProp_VR_Gun_MetaData, ARRAY_COUNT(NewProp_VR_Gun_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FP_MuzzleLocation_MetaData[] = {
				{ "Category", "Mesh" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "UnrealCPPCharacter.h" },
				{ "ToolTip", "Location on gun mesh where projectiles should spawn." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FP_MuzzleLocation = { UE4CodeGen_Private::EPropertyClass::Object, "FP_MuzzleLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000b0009, 1, nullptr, STRUCT_OFFSET(AUnrealCPPCharacter, FP_MuzzleLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_FP_MuzzleLocation_MetaData, ARRAY_COUNT(NewProp_FP_MuzzleLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FP_Gun_MetaData[] = {
				{ "Category", "Mesh" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "UnrealCPPCharacter.h" },
				{ "ToolTip", "Gun mesh: 1st person view (seen only by self)" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FP_Gun = { UE4CodeGen_Private::EPropertyClass::Object, "FP_Gun", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000b0009, 1, nullptr, STRUCT_OFFSET(AUnrealCPPCharacter, FP_Gun), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(NewProp_FP_Gun_MetaData, ARRAY_COUNT(NewProp_FP_Gun_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[] = {
				{ "Category", "Mesh" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "UnrealCPPCharacter.h" },
				{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh1P = { UE4CodeGen_Private::EPropertyClass::Object, "Mesh1P", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000b0009, 1, nullptr, STRUCT_OFFSET(AUnrealCPPCharacter, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(NewProp_Mesh1P_MetaData, ARRAY_COUNT(NewProp_Mesh1P_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MagicCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_redFlash,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MagicValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreviousMagic,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MagicPercentage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Magic,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FullMagic,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreviousHealth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HealthPercentage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Health,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FullHealth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUsingMotionControllers,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FireAnimation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FireSound,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProjectileClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GunOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BaseLookUpRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BaseTurnRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_L_MotionController,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_R_MotionController,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FirstPersonCameraComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VR_MuzzleLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VR_Gun,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FP_MuzzleLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FP_Gun,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Mesh1P,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AUnrealCPPCharacter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AUnrealCPPCharacter::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnrealCPPCharacter, 1832139813);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnrealCPPCharacter(Z_Construct_UClass_AUnrealCPPCharacter, &AUnrealCPPCharacter::StaticClass, TEXT("/Script/UnrealCPP"), TEXT("AUnrealCPPCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnrealCPPCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
