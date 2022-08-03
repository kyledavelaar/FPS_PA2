// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS_PA2/Public/IKAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIKAnimInstance() {}
// Cross Module References
	FPS_PA2_API UClass* Z_Construct_UClass_UIKAnimInstance_NoRegister();
	FPS_PA2_API UClass* Z_Construct_UClass_UIKAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_FPS_PA2();
	FPS_PA2_API UClass* Z_Construct_UClass_AFPS_PA2Character_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	DEFINE_FUNCTION(UIKAnimInstance::execStopReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopReload();
		P_NATIVE_END;
	}
	void UIKAnimInstance::StaticRegisterNativesUIKAnimInstance()
	{
		UClass* Class = UIKAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StopReload", &UIKAnimInstance::execStopReload },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIKAnimInstance_StopReload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKAnimInstance_StopReload_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kyle" },
		{ "ModuleRelativePath", "Public/IKAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKAnimInstance_StopReload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKAnimInstance, nullptr, "StopReload", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKAnimInstance_StopReload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKAnimInstance_StopReload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKAnimInstance_StopReload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIKAnimInstance_StopReload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UIKAnimInstance_NoRegister()
	{
		return UIKAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UIKAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeHandTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeHandTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SightTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SightTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftHandTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftHandTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReloadAlpha;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIKAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS_PA2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIKAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIKAnimInstance_StopReload, "StopReload" }, // 1283656307
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "IKAnimInstance.h" },
		{ "ModuleRelativePath", "Public/IKAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_Character_MetaData[] = {
		{ "Category", "Kyle" },
		{ "ModuleRelativePath", "Public/IKAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIKAnimInstance, Character), Z_Construct_UClass_AFPS_PA2Character_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_Character_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_RelativeHandTransform_MetaData[] = {
		{ "Category", "Kyle" },
		{ "ModuleRelativePath", "Public/IKAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_RelativeHandTransform = { "RelativeHandTransform", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIKAnimInstance, RelativeHandTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_RelativeHandTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_RelativeHandTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_SightTransform_MetaData[] = {
		{ "Category", "Kyle" },
		{ "ModuleRelativePath", "Public/IKAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_SightTransform = { "SightTransform", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIKAnimInstance, SightTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_SightTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_SightTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_LeftHandTransform_MetaData[] = {
		{ "Category", "Kyle" },
		{ "ModuleRelativePath", "Public/IKAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_LeftHandTransform = { "LeftHandTransform", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIKAnimInstance, LeftHandTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_LeftHandTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_LeftHandTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_AimAlpha_MetaData[] = {
		{ "Category", "Kyle" },
		{ "ModuleRelativePath", "Public/IKAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_AimAlpha = { "AimAlpha", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIKAnimInstance, AimAlpha), METADATA_PARAMS(Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_AimAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_AimAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_ReloadAlpha_MetaData[] = {
		{ "Category", "Kyle" },
		{ "ModuleRelativePath", "Public/IKAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_ReloadAlpha = { "ReloadAlpha", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIKAnimInstance, ReloadAlpha), METADATA_PARAMS(Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_ReloadAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_ReloadAlpha_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIKAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_RelativeHandTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_SightTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_LeftHandTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_AimAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKAnimInstance_Statics::NewProp_ReloadAlpha,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIKAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIKAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIKAnimInstance_Statics::ClassParams = {
		&UIKAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UIKAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UIKAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UIKAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIKAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIKAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIKAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIKAnimInstance, 975208632);
	template<> FPS_PA2_API UClass* StaticClass<UIKAnimInstance>()
	{
		return UIKAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIKAnimInstance(Z_Construct_UClass_UIKAnimInstance, &UIKAnimInstance::StaticClass, TEXT("/Script/FPS_PA2"), TEXT("UIKAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIKAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
