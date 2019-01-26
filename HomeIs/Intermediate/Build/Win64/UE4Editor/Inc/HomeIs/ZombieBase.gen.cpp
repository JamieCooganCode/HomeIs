// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HomeIs/Public/ZombieBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieBase() {}
// Cross Module References
	HOMEIS_API UClass* Z_Construct_UClass_AZombieBase_NoRegister();
	HOMEIS_API UClass* Z_Construct_UClass_AZombieBase();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_HomeIs();
	HOMEIS_API UFunction* Z_Construct_UFunction_AZombieBase_Attack();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	HOMEIS_API UFunction* Z_Construct_UFunction_AZombieBase_PostInitializeComponents();
	HOMEIS_API UClass* Z_Construct_UClass_UIAttackable_NoRegister();
// End Cross Module References
	void AZombieBase::StaticRegisterNativesAZombieBase()
	{
		UClass* Class = AZombieBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Attack", &AZombieBase::execAttack },
			{ "PostInitializeComponents", &AZombieBase::execPostInitializeComponents },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AZombieBase_Attack_Statics
	{
		struct ZombieBase_eventAttack_Parms
		{
			APawn* _pawnAttacking;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pawnAttacking;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZombieBase_Attack_Statics::NewProp__pawnAttacking = { UE4CodeGen_Private::EPropertyClass::Object, "_pawnAttacking", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ZombieBase_eventAttack_Parms, _pawnAttacking), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZombieBase_Attack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieBase_Attack_Statics::NewProp__pawnAttacking,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombieBase_Attack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/ZombieBase.h" },
		{ "ToolTip", "Attack Function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombieBase_Attack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombieBase, "Attack", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(ZombieBase_eventAttack_Parms), Z_Construct_UFunction_AZombieBase_Attack_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AZombieBase_Attack_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZombieBase_Attack_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AZombieBase_Attack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZombieBase_Attack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZombieBase_Attack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZombieBase_PostInitializeComponents_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombieBase_PostInitializeComponents_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZombieBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombieBase_PostInitializeComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombieBase, "PostInitializeComponents", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZombieBase_PostInitializeComponents_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AZombieBase_PostInitializeComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZombieBase_PostInitializeComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZombieBase_PostInitializeComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AZombieBase_NoRegister()
	{
		return AZombieBase::StaticClass();
	}
	struct Z_Construct_UClass_AZombieBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__health;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZombieBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_HomeIs,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AZombieBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AZombieBase_Attack, "Attack" }, // 2208584367
		{ &Z_Construct_UFunction_AZombieBase_PostInitializeComponents, "PostInitializeComponents" }, // 3693065764
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ZombieBase.h" },
		{ "ModuleRelativePath", "Public/ZombieBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieBase_Statics::NewProp__damage_MetaData[] = {
		{ "Category", "ZombieBase" },
		{ "ModuleRelativePath", "Public/ZombieBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZombieBase_Statics::NewProp__damage = { UE4CodeGen_Private::EPropertyClass::Float, "_damage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AZombieBase, _damage), METADATA_PARAMS(Z_Construct_UClass_AZombieBase_Statics::NewProp__damage_MetaData, ARRAY_COUNT(Z_Construct_UClass_AZombieBase_Statics::NewProp__damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieBase_Statics::NewProp__health_MetaData[] = {
		{ "Category", "ZombieBase" },
		{ "ModuleRelativePath", "Public/ZombieBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZombieBase_Statics::NewProp__health = { UE4CodeGen_Private::EPropertyClass::Float, "_health", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AZombieBase, _health), METADATA_PARAMS(Z_Construct_UClass_AZombieBase_Statics::NewProp__health_MetaData, ARRAY_COUNT(Z_Construct_UClass_AZombieBase_Statics::NewProp__health_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AZombieBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieBase_Statics::NewProp__damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieBase_Statics::NewProp__health,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AZombieBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIAttackable_NoRegister, (int32)VTABLE_OFFSET(AZombieBase, IIAttackable), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZombieBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombieBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AZombieBase_Statics::ClassParams = {
		&AZombieBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AZombieBase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AZombieBase_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_AZombieBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AZombieBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZombieBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AZombieBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZombieBase, 2608741762);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZombieBase(Z_Construct_UClass_AZombieBase, &AZombieBase::StaticClass, TEXT("/Script/HomeIs"), TEXT("AZombieBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombieBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
