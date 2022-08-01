// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS_PA2/FPS_PA2HUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPS_PA2HUD() {}
// Cross Module References
	FPS_PA2_API UClass* Z_Construct_UClass_AFPS_PA2HUD_NoRegister();
	FPS_PA2_API UClass* Z_Construct_UClass_AFPS_PA2HUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_FPS_PA2();
// End Cross Module References
	void AFPS_PA2HUD::StaticRegisterNativesAFPS_PA2HUD()
	{
	}
	UClass* Z_Construct_UClass_AFPS_PA2HUD_NoRegister()
	{
		return AFPS_PA2HUD::StaticClass();
	}
	struct Z_Construct_UClass_AFPS_PA2HUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPS_PA2HUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS_PA2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPS_PA2HUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "FPS_PA2HUD.h" },
		{ "ModuleRelativePath", "FPS_PA2HUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPS_PA2HUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPS_PA2HUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPS_PA2HUD_Statics::ClassParams = {
		&AFPS_PA2HUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFPS_PA2HUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_PA2HUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPS_PA2HUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPS_PA2HUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPS_PA2HUD, 3969598556);
	template<> FPS_PA2_API UClass* StaticClass<AFPS_PA2HUD>()
	{
		return AFPS_PA2HUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPS_PA2HUD(Z_Construct_UClass_AFPS_PA2HUD, &AFPS_PA2HUD::StaticClass, TEXT("/Script/FPS_PA2"), TEXT("AFPS_PA2HUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPS_PA2HUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
