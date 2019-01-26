// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HomeIs/Barricade.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBarricade() {}
// Cross Module References
	HOMEIS_API UClass* Z_Construct_UClass_ABarricade_NoRegister();
	HOMEIS_API UClass* Z_Construct_UClass_ABarricade();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_HomeIs();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	HOMEIS_API UClass* Z_Construct_UClass_UIAttackable_NoRegister();
	HOMEIS_API UClass* Z_Construct_UClass_UIInteractable_NoRegister();
// End Cross Module References
	void ABarricade::StaticRegisterNativesABarricade()
	{
	}
	UClass* Z_Construct_UClass_ABarricade_NoRegister()
	{
		return ABarricade::StaticClass();
	}
	struct Z_Construct_UClass_ABarricade_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__myRaycastCollider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__myRaycastCollider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp__maxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__health_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp__health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__repairCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__repairCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__timeSinceRepair_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__timeSinceRepair;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABarricade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HomeIs,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABarricade_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Barricade.h" },
		{ "ModuleRelativePath", "Barricade.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABarricade_Statics::NewProp__myRaycastCollider_MetaData[] = {
		{ "Category", "stats" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Barricade.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABarricade_Statics::NewProp__myRaycastCollider = { UE4CodeGen_Private::EPropertyClass::Object, "_myRaycastCollider", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x002008000008000d, 1, nullptr, STRUCT_OFFSET(ABarricade, _myRaycastCollider), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABarricade_Statics::NewProp__myRaycastCollider_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABarricade_Statics::NewProp__myRaycastCollider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABarricade_Statics::NewProp__maxHealth_MetaData[] = {
		{ "Category", "stats" },
		{ "ModuleRelativePath", "Barricade.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABarricade_Statics::NewProp__maxHealth = { UE4CodeGen_Private::EPropertyClass::Int, "_maxHealth", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(ABarricade, _maxHealth), METADATA_PARAMS(Z_Construct_UClass_ABarricade_Statics::NewProp__maxHealth_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABarricade_Statics::NewProp__maxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABarricade_Statics::NewProp__health_MetaData[] = {
		{ "Category", "stats" },
		{ "ModuleRelativePath", "Barricade.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABarricade_Statics::NewProp__health = { UE4CodeGen_Private::EPropertyClass::Int, "_health", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(ABarricade, _health), METADATA_PARAMS(Z_Construct_UClass_ABarricade_Statics::NewProp__health_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABarricade_Statics::NewProp__health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABarricade_Statics::NewProp__repairCooldown_MetaData[] = {
		{ "Category", "stats" },
		{ "ModuleRelativePath", "Barricade.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABarricade_Statics::NewProp__repairCooldown = { UE4CodeGen_Private::EPropertyClass::Float, "_repairCooldown", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(ABarricade, _repairCooldown), METADATA_PARAMS(Z_Construct_UClass_ABarricade_Statics::NewProp__repairCooldown_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABarricade_Statics::NewProp__repairCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABarricade_Statics::NewProp__timeSinceRepair_MetaData[] = {
		{ "Category", "stats" },
		{ "ModuleRelativePath", "Barricade.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABarricade_Statics::NewProp__timeSinceRepair = { UE4CodeGen_Private::EPropertyClass::Float, "_timeSinceRepair", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(ABarricade, _timeSinceRepair), METADATA_PARAMS(Z_Construct_UClass_ABarricade_Statics::NewProp__timeSinceRepair_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABarricade_Statics::NewProp__timeSinceRepair_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABarricade_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABarricade_Statics::NewProp__myRaycastCollider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABarricade_Statics::NewProp__maxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABarricade_Statics::NewProp__health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABarricade_Statics::NewProp__repairCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABarricade_Statics::NewProp__timeSinceRepair,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABarricade_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIAttackable_NoRegister, (int32)VTABLE_OFFSET(ABarricade, IIAttackable), false },
			{ Z_Construct_UClass_UIInteractable_NoRegister, (int32)VTABLE_OFFSET(ABarricade, IIInteractable), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABarricade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABarricade>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABarricade_Statics::ClassParams = {
		&ABarricade::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ABarricade_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ABarricade_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_ABarricade_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABarricade_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABarricade()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABarricade_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABarricade, 1939018356);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABarricade(Z_Construct_UClass_ABarricade, &ABarricade::StaticClass, TEXT("/Script/HomeIs"), TEXT("ABarricade"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABarricade);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
