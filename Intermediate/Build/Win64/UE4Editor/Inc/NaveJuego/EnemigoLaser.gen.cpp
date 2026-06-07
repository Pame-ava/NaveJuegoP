// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NaveJuego/EnemigoLaser.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoLaser() {}
// Cross Module References
	NAVEJUEGO_API UClass* Z_Construct_UClass_AEnemigoLaser_NoRegister();
	NAVEJUEGO_API UClass* Z_Construct_UClass_AEnemigoLaser();
	NAVEJUEGO_API UClass* Z_Construct_UClass_AEnemigo();
	UPackage* Z_Construct_UPackage__Script_NaveJuego();
// End Cross Module References
	void AEnemigoLaser::StaticRegisterNativesAEnemigoLaser()
	{
	}
	UClass* Z_Construct_UClass_AEnemigoLaser_NoRegister()
	{
		return AEnemigoLaser::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigoLaser_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigoLaser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemigo,
		(UObject* (*)())Z_Construct_UPackage__Script_NaveJuego,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoLaser_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EnemigoLaser.h" },
		{ "ModuleRelativePath", "EnemigoLaser.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigoLaser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoLaser>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoLaser_Statics::ClassParams = {
		&AEnemigoLaser::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEnemigoLaser_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoLaser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigoLaser()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigoLaser_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigoLaser, 3125351061);
	template<> NAVEJUEGO_API UClass* StaticClass<AEnemigoLaser>()
	{
		return AEnemigoLaser::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigoLaser(Z_Construct_UClass_AEnemigoLaser, &AEnemigoLaser::StaticClass, TEXT("/Script/NaveJuego"), TEXT("AEnemigoLaser"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoLaser);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
