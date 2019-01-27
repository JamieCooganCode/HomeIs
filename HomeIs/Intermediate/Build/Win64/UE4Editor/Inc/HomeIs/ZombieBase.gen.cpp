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
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	HOMEIS_API UFunction* Z_Construct_UFunction_AZombieBase_CheckHasTarget();
	HOMEIS_API UFunction* Z_Construct_UFunction_AZombieBase_CheckIfNearTarget();
	HOMEIS_API UFunction* Z_Construct_UFunction_AZombieBase_DealDamage();
	HOMEIS_API UFunction* Z_Construct_UFunction_AZombieBase_GetTargetPosition();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	HOMEIS_API UFunction* Z_Construct_UFunction_AZombieBase_GoToTarget();
	HOMEIS_API UFunction* Z_Construct_UFunction_AZombieBase_PostInitializeComponents();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	HOMEIS_API UClass* Z_Construct_UClass_UIAttackable_NoRegister();
// End Cross Module References
	void AZombieBase::StaticRegisterNativesAZombieBase()
	{
		UClass* Class = AZombieBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Attack", &AZombieBase::execAttack },
			{ "CheckHasTarget", &AZombieBase::execCheckHasTarget },
			{ "CheckIfNearTarget", &AZombieBase::execCheckIfNearTarget },
			{ "DealDamage", &AZombieBase::execDealDamage },
			{ "GetTargetPosition", &AZombieBase::execGetTargetPosition },
			{ "GoToTarget", &AZombieBase::execGoToTarget },
			{ "PostInitializeComponents", &AZombieBase::execPostInitializeComponents },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AZombieBase_Attack_Statics
	{
		struct ZombieBase_eventAttack_Parms
		{
			AActor* _actorAttacking;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__actorAttacking;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZombieBase_Attack_Statics::NewProp__actorAttacking = { UE4CodeGen_Private::EPropertyClass::Object, "_actorAttacking", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ZombieBase_eventAttack_Parms, _actorAttacking), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZombieBase_Attack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieBase_Attack_Statics::NewProp__actorAttacking,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombieBase_Attack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/ZombieBase.h" },
		{ "ToolTip", "Attack Function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombieBase_Attack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombieBase, "Attack", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ZombieBase_eventAttack_Parms), Z_Construct_UFunction_AZombieBase_Attack_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AZombieBase_Attack_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZombieBase_Attack_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AZombieBase_Attack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZombieBase_Attack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZombieBase_Attack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZombieBase_CheckHasTarget_Statics
	{
		struct ZombieBase_eventCheckHasTarget_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AZombieBase_CheckHasTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZombieBase_eventCheckHasTarget_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AZombieBase_CheckHasTarget_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ZombieBase_eventCheckHasTarget_Parms), &Z_Construct_UFunction_AZombieBase_CheckHasTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZombieBase_CheckHasTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieBase_CheckHasTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombieBase_CheckHasTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "Public/ZombieBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombieBase_CheckHasTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombieBase, "CheckHasTarget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ZombieBase_eventCheckHasTarget_Parms), Z_Construct_UFunction_AZombieBase_CheckHasTarget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AZombieBase_CheckHasTarget_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZombieBase_CheckHasTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AZombieBase_CheckHasTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZombieBase_CheckHasTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZombieBase_CheckHasTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZombieBase_CheckIfNearTarget_Statics
	{
		struct ZombieBase_eventCheckIfNearTarget_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AZombieBase_CheckIfNearTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ZombieBase_eventCheckIfNearTarget_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AZombieBase_CheckIfNearTarget_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ZombieBase_eventCheckIfNearTarget_Parms), &Z_Construct_UFunction_AZombieBase_CheckIfNearTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZombieBase_CheckIfNearTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieBase_CheckIfNearTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombieBase_CheckIfNearTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "Public/ZombieBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombieBase_CheckIfNearTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombieBase, "CheckIfNearTarget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ZombieBase_eventCheckIfNearTarget_Parms), Z_Construct_UFunction_AZombieBase_CheckIfNearTarget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AZombieBase_CheckIfNearTarget_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZombieBase_CheckIfNearTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AZombieBase_CheckIfNearTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZombieBase_CheckIfNearTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZombieBase_CheckIfNearTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZombieBase_DealDamage_Statics
	{
		struct ZombieBase_eventDealDamage_Parms
		{
			float damageDealt;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_damageDealt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZombieBase_DealDamage_Statics::NewProp_damageDealt = { UE4CodeGen_Private::EPropertyClass::Float, "damageDealt", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ZombieBase_eventDealDamage_Parms, damageDealt), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZombieBase_DealDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieBase_DealDamage_Statics::NewProp_damageDealt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombieBase_DealDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/ZombieBase.h" },
		{ "ToolTip", "Deal Damage" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombieBase_DealDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombieBase, "DealDamage", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(ZombieBase_eventDealDamage_Parms), Z_Construct_UFunction_AZombieBase_DealDamage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AZombieBase_DealDamage_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZombieBase_DealDamage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AZombieBase_DealDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZombieBase_DealDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZombieBase_DealDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZombieBase_GetTargetPosition_Statics
	{
		struct ZombieBase_eventGetTargetPosition_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AZombieBase_GetTargetPosition_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(ZombieBase_eventGetTargetPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZombieBase_GetTargetPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieBase_GetTargetPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombieBase_GetTargetPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "Public/ZombieBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombieBase_GetTargetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombieBase, "GetTargetPosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(ZombieBase_eventGetTargetPosition_Parms), Z_Construct_UFunction_AZombieBase_GetTargetPosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AZombieBase_GetTargetPosition_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZombieBase_GetTargetPosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AZombieBase_GetTargetPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZombieBase_GetTargetPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZombieBase_GetTargetPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZombieBase_GoToTarget_Statics
	{
		struct ZombieBase_eventGoToTarget_Parms
		{
			float deltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_deltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZombieBase_GoToTarget_Statics::NewProp_deltaTime = { UE4CodeGen_Private::EPropertyClass::Float, "deltaTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ZombieBase_eventGoToTarget_Parms, deltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZombieBase_GoToTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieBase_GoToTarget_Statics::NewProp_deltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombieBase_GoToTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Target" },
		{ "ModuleRelativePath", "Public/ZombieBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombieBase_GoToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombieBase, "GoToTarget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ZombieBase_eventGoToTarget_Parms), Z_Construct_UFunction_AZombieBase_GoToTarget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AZombieBase_GoToTarget_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZombieBase_GoToTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AZombieBase_GoToTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZombieBase_GoToTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZombieBase_GoToTarget_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__viewSphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__viewSphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__targetActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__targetActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__movementSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__movementSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__damageReach_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__damageReach;
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
		{ &Z_Construct_UFunction_AZombieBase_Attack, "Attack" }, // 1602054705
		{ &Z_Construct_UFunction_AZombieBase_CheckHasTarget, "CheckHasTarget" }, // 2712002375
		{ &Z_Construct_UFunction_AZombieBase_CheckIfNearTarget, "CheckIfNearTarget" }, // 448115065
		{ &Z_Construct_UFunction_AZombieBase_DealDamage, "DealDamage" }, // 3232241035
		{ &Z_Construct_UFunction_AZombieBase_GetTargetPosition, "GetTargetPosition" }, // 3821183655
		{ &Z_Construct_UFunction_AZombieBase_GoToTarget, "GoToTarget" }, // 4163701714
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieBase_Statics::NewProp__viewSphere_MetaData[] = {
		{ "Category", "ZombieBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ZombieBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZombieBase_Statics::NewProp__viewSphere = { UE4CodeGen_Private::EPropertyClass::Object, "_viewSphere", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(AZombieBase, _viewSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZombieBase_Statics::NewProp__viewSphere_MetaData, ARRAY_COUNT(Z_Construct_UClass_AZombieBase_Statics::NewProp__viewSphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieBase_Statics::NewProp__targetActor_MetaData[] = {
		{ "Category", "ZombieBase" },
		{ "ModuleRelativePath", "Public/ZombieBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZombieBase_Statics::NewProp__targetActor = { UE4CodeGen_Private::EPropertyClass::Object, "_targetActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AZombieBase, _targetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZombieBase_Statics::NewProp__targetActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AZombieBase_Statics::NewProp__targetActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieBase_Statics::NewProp__radius_MetaData[] = {
		{ "Category", "ZombieBase" },
		{ "ModuleRelativePath", "Public/ZombieBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZombieBase_Statics::NewProp__radius = { UE4CodeGen_Private::EPropertyClass::Float, "_radius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AZombieBase, _radius), METADATA_PARAMS(Z_Construct_UClass_AZombieBase_Statics::NewProp__radius_MetaData, ARRAY_COUNT(Z_Construct_UClass_AZombieBase_Statics::NewProp__radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieBase_Statics::NewProp__movementSpeed_MetaData[] = {
		{ "Category", "ZombieBase" },
		{ "ModuleRelativePath", "Public/ZombieBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZombieBase_Statics::NewProp__movementSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "_movementSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AZombieBase, _movementSpeed), METADATA_PARAMS(Z_Construct_UClass_AZombieBase_Statics::NewProp__movementSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AZombieBase_Statics::NewProp__movementSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieBase_Statics::NewProp__damageReach_MetaData[] = {
		{ "Category", "ZombieBase" },
		{ "ModuleRelativePath", "Public/ZombieBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZombieBase_Statics::NewProp__damageReach = { UE4CodeGen_Private::EPropertyClass::Float, "_damageReach", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AZombieBase, _damageReach), METADATA_PARAMS(Z_Construct_UClass_AZombieBase_Statics::NewProp__damageReach_MetaData, ARRAY_COUNT(Z_Construct_UClass_AZombieBase_Statics::NewProp__damageReach_MetaData)) };
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
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieBase_Statics::NewProp__viewSphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieBase_Statics::NewProp__targetActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieBase_Statics::NewProp__radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieBase_Statics::NewProp__movementSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieBase_Statics::NewProp__damageReach,
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
	IMPLEMENT_CLASS(AZombieBase, 1910646547);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZombieBase(Z_Construct_UClass_AZombieBase, &AZombieBase::StaticClass, TEXT("/Script/HomeIs"), TEXT("AZombieBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombieBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
