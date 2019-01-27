// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HomeIs/ZombieSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieSpawner() {}
// Cross Module References
	HOMEIS_API UClass* Z_Construct_UClass_AZombieSpawner_NoRegister();
	HOMEIS_API UClass* Z_Construct_UClass_AZombieSpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_HomeIs();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	HOMEIS_API UClass* Z_Construct_UClass_AZombieBase_NoRegister();
// End Cross Module References
	void AZombieSpawner::StaticRegisterNativesAZombieSpawner()
	{
	}
	UClass* Z_Construct_UClass_AZombieSpawner_NoRegister()
	{
		return AZombieSpawner::StaticClass();
	}
	struct Z_Construct_UClass_AZombieSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mySpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_mySpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cooldownBetweenSpawns_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_cooldownBetweenSpawns;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_timeSinceLastSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_timeSinceLastSpawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZombieSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HomeIs,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ZombieSpawner.h" },
		{ "ModuleRelativePath", "ZombieSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieSpawner_Statics::NewProp_mySpawn_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "ZombieSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AZombieSpawner_Statics::NewProp_mySpawn = { UE4CodeGen_Private::EPropertyClass::Class, "mySpawn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000001, 1, nullptr, STRUCT_OFFSET(AZombieSpawner, mySpawn), Z_Construct_UClass_AZombieBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AZombieSpawner_Statics::NewProp_mySpawn_MetaData, ARRAY_COUNT(Z_Construct_UClass_AZombieSpawner_Statics::NewProp_mySpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieSpawner_Statics::NewProp_cooldownBetweenSpawns_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "ZombieSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZombieSpawner_Statics::NewProp_cooldownBetweenSpawns = { UE4CodeGen_Private::EPropertyClass::Float, "cooldownBetweenSpawns", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AZombieSpawner, cooldownBetweenSpawns), METADATA_PARAMS(Z_Construct_UClass_AZombieSpawner_Statics::NewProp_cooldownBetweenSpawns_MetaData, ARRAY_COUNT(Z_Construct_UClass_AZombieSpawner_Statics::NewProp_cooldownBetweenSpawns_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieSpawner_Statics::NewProp_timeSinceLastSpawn_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "ZombieSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZombieSpawner_Statics::NewProp_timeSinceLastSpawn = { UE4CodeGen_Private::EPropertyClass::Float, "timeSinceLastSpawn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AZombieSpawner, timeSinceLastSpawn), METADATA_PARAMS(Z_Construct_UClass_AZombieSpawner_Statics::NewProp_timeSinceLastSpawn_MetaData, ARRAY_COUNT(Z_Construct_UClass_AZombieSpawner_Statics::NewProp_timeSinceLastSpawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AZombieSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieSpawner_Statics::NewProp_mySpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieSpawner_Statics::NewProp_cooldownBetweenSpawns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieSpawner_Statics::NewProp_timeSinceLastSpawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZombieSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombieSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AZombieSpawner_Statics::ClassParams = {
		&AZombieSpawner::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AZombieSpawner_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AZombieSpawner_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AZombieSpawner_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AZombieSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZombieSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AZombieSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZombieSpawner, 3399463358);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZombieSpawner(Z_Construct_UClass_AZombieSpawner, &AZombieSpawner::StaticClass, TEXT("/Script/HomeIs"), TEXT("AZombieSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombieSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
