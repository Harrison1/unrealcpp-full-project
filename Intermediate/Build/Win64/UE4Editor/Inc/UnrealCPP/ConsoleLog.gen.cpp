// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "ConsoleLog/ConsoleLog.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConsoleLog() {}
// Cross Module References
	UNREALCPP_API UClass* Z_Construct_UClass_AConsoleLog_NoRegister();
	UNREALCPP_API UClass* Z_Construct_UClass_AConsoleLog();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnrealCPP();
// End Cross Module References
	void AConsoleLog::StaticRegisterNativesAConsoleLog()
	{
	}
	UClass* Z_Construct_UClass_AConsoleLog_NoRegister()
	{
		return AConsoleLog::StaticClass();
	}
	UClass* Z_Construct_UClass_AConsoleLog()
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
				{ "IncludePath", "ConsoleLog/ConsoleLog.h" },
				{ "ModuleRelativePath", "ConsoleLog/ConsoleLog.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AConsoleLog>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AConsoleLog::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(AConsoleLog, 2735259001);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AConsoleLog(Z_Construct_UClass_AConsoleLog, &AConsoleLog::StaticClass, TEXT("/Script/UnrealCPP"), TEXT("AConsoleLog"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AConsoleLog);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
