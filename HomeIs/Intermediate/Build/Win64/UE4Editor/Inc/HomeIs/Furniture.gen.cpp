// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HomeIs/Public/Furniture.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFurniture() {}
// Cross Module References
	HOMEIS_API UClass* Z_Construct_UClass_AFurniture_NoRegister();
	HOMEIS_API UClass* Z_Construct_UClass_AFurniture();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_HomeIs();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	HOMEIS_API UClass* Z_Construct_UClass_UIInteractable_NoRegister();
// End Cross Module References
	void AFurniture::StaticRegisterNativesAFurniture()
	{
	}
	UClass* Z_Construct_UClass_AFurniture_NoRegister()
	{
		return AFurniture::StaticClass();
	}
	struct Z_Construct_UClass_AFurniture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bookcase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bookcase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sofa_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sofa;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bed_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__furnitureType_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp__furnitureType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__myRaycastCollider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__myRaycastCollider;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFurniture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HomeIs,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFurniture_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Furniture.h" },
		{ "ModuleRelativePath", "Public/Furniture.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFurniture_Statics::NewProp_bookcase_MetaData[] = {
		{ "Category", "FurnitureTypes" },
		{ "ModuleRelativePath", "Public/Furniture.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFurniture_Statics::NewProp_bookcase = { UE4CodeGen_Private::EPropertyClass::Object, "bookcase", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010015, 1, nullptr, STRUCT_OFFSET(AFurniture, bookcase), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFurniture_Statics::NewProp_bookcase_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFurniture_Statics::NewProp_bookcase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFurniture_Statics::NewProp_sofa_MetaData[] = {
		{ "Category", "FurnitureTypes" },
		{ "ModuleRelativePath", "Public/Furniture.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFurniture_Statics::NewProp_sofa = { UE4CodeGen_Private::EPropertyClass::Object, "sofa", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010015, 1, nullptr, STRUCT_OFFSET(AFurniture, sofa), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFurniture_Statics::NewProp_sofa_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFurniture_Statics::NewProp_sofa_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFurniture_Statics::NewProp_bed_MetaData[] = {
		{ "Category", "FurnitureTypes" },
		{ "ModuleRelativePath", "Public/Furniture.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFurniture_Statics::NewProp_bed = { UE4CodeGen_Private::EPropertyClass::Object, "bed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000010015, 1, nullptr, STRUCT_OFFSET(AFurniture, bed), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFurniture_Statics::NewProp_bed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFurniture_Statics::NewProp_bed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFurniture_Statics::NewProp__furnitureType_MetaData[] = {
		{ "Category", "Type" },
		{ "ModuleRelativePath", "Public/Furniture.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AFurniture_Statics::NewProp__furnitureType = { UE4CodeGen_Private::EPropertyClass::Int, "_furnitureType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFurniture, _furnitureType), METADATA_PARAMS(Z_Construct_UClass_AFurniture_Statics::NewProp__furnitureType_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFurniture_Statics::NewProp__furnitureType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFurniture_Statics::NewProp__myRaycastCollider_MetaData[] = {
		{ "Category", "stats" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Furniture.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFurniture_Statics::NewProp__myRaycastCollider = { UE4CodeGen_Private::EPropertyClass::Object, "_myRaycastCollider", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x002008000008000d, 1, nullptr, STRUCT_OFFSET(AFurniture, _myRaycastCollider), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFurniture_Statics::NewProp__myRaycastCollider_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFurniture_Statics::NewProp__myRaycastCollider_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFurniture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFurniture_Statics::NewProp_bookcase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFurniture_Statics::NewProp_sofa,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFurniture_Statics::NewProp_bed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFurniture_Statics::NewProp__furnitureType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFurniture_Statics::NewProp__myRaycastCollider,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFurniture_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIInteractable_NoRegister, (int32)VTABLE_OFFSET(AFurniture, IIInteractable), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFurniture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFurniture>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFurniture_Statics::ClassParams = {
		&AFurniture::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AFurniture_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFurniture_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_AFurniture_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFurniture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFurniture()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFurniture_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFurniture, 196712572);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFurniture(Z_Construct_UClass_AFurniture, &AFurniture::StaticClass, TEXT("/Script/HomeIs"), TEXT("AFurniture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFurniture);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
