// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NaveJuego/NaveJuegoGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveJuegoGameMode() {}
// Cross Module References
	NAVEJUEGO_API UClass* Z_Construct_UClass_ANaveJuegoGameMode_NoRegister();
	NAVEJUEGO_API UClass* Z_Construct_UClass_ANaveJuegoGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_NaveJuego();
// End Cross Module References
	void ANaveJuegoGameMode::StaticRegisterNativesANaveJuegoGameMode()
	{
	}
	UClass* Z_Construct_UClass_ANaveJuegoGameMode_NoRegister()
	{
		return ANaveJuegoGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ANaveJuegoGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveJuegoGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NaveJuego,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveJuegoGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "NaveJuegoGameMode.h" },
		{ "ModuleRelativePath", "NaveJuegoGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveJuegoGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveJuegoGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveJuegoGameMode_Statics::ClassParams = {
		&ANaveJuegoGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ANaveJuegoGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveJuegoGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveJuegoGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveJuegoGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveJuegoGameMode, 2717702402);
	template<> NAVEJUEGO_API UClass* StaticClass<ANaveJuegoGameMode>()
	{
		return ANaveJuegoGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveJuegoGameMode(Z_Construct_UClass_ANaveJuegoGameMode, &ANaveJuegoGameMode::StaticClass, TEXT("/Script/NaveJuego"), TEXT("ANaveJuegoGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveJuegoGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
