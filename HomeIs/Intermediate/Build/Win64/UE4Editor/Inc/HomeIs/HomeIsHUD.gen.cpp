// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HomeIs/HomeIsHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHomeIsHUD() {}
// Cross Module References
	HOMEIS_API UClass* Z_Construct_UClass_AHomeIsHUD_NoRegister();
	HOMEIS_API UClass* Z_Construct_UClass_AHomeIsHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_HomeIs();
// End Cross Module References
	void AHomeIsHUD::StaticRegisterNativesAHomeIsHUD()
	{
	}
	UClass* Z_Construct_UClass_AHomeIsHUD_NoRegister()
	{
		return AHomeIsHUD::StaticClass();
	}
	struct Z_Construct_UClass_AHomeIsHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHomeIsHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_HomeIs,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHomeIsHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "HomeIsHUD.h" },
		{ "ModuleRelativePath", "HomeIsHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHomeIsHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHomeIsHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHomeIsHUD_Statics::ClassParams = {
		&AHomeIsHUD::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008002ACu,
		nullptr, 0,
		nullptr, 0,
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AHomeIsHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AHomeIsHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHomeIsHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHomeIsHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHomeIsHUD, 4211687470);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHomeIsHUD(Z_Construct_UClass_AHomeIsHUD, &AHomeIsHUD::StaticClass, TEXT("/Script/HomeIs"), TEXT("AHomeIsHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHomeIsHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
