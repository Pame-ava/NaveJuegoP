// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NaveJuego/GenerarLaberinto.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenerarLaberinto() {}
// Cross Module References
	NAVEJUEGO_API UClass* Z_Construct_UClass_AGenerarLaberinto_NoRegister();
	NAVEJUEGO_API UClass* Z_Construct_UClass_AGenerarLaberinto();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_NaveJuego();
// End Cross Module References
	void AGenerarLaberinto::StaticRegisterNativesAGenerarLaberinto()
	{
	}
	UClass* Z_Construct_UClass_AGenerarLaberinto_NoRegister()
	{
		return AGenerarLaberinto::StaticClass();
	}
	struct Z_Construct_UClass_AGenerarLaberinto_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGenerarLaberinto_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NaveJuego,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGenerarLaberinto_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GenerarLaberinto.h" },
		{ "ModuleRelativePath", "GenerarLaberinto.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGenerarLaberinto_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGenerarLaberinto>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGenerarLaberinto_Statics::ClassParams = {
		&AGenerarLaberinto::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGenerarLaberinto_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGenerarLaberinto_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGenerarLaberinto()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGenerarLaberinto_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGenerarLaberinto, 1747493819);
	template<> NAVEJUEGO_API UClass* StaticClass<AGenerarLaberinto>()
	{
		return AGenerarLaberinto::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGenerarLaberinto(Z_Construct_UClass_AGenerarLaberinto, &AGenerarLaberinto::StaticClass, TEXT("/Script/NaveJuego"), TEXT("AGenerarLaberinto"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGenerarLaberinto);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
