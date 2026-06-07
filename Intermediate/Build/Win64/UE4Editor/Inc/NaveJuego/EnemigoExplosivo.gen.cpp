// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NaveJuego/EnemigoExplosivo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoExplosivo() {}
// Cross Module References
	NAVEJUEGO_API UClass* Z_Construct_UClass_AEnemigoExplosivo_NoRegister();
	NAVEJUEGO_API UClass* Z_Construct_UClass_AEnemigoExplosivo();
	NAVEJUEGO_API UClass* Z_Construct_UClass_AEnemigo();
	UPackage* Z_Construct_UPackage__Script_NaveJuego();
// End Cross Module References
	void AEnemigoExplosivo::StaticRegisterNativesAEnemigoExplosivo()
	{
	}
	UClass* Z_Construct_UClass_AEnemigoExplosivo_NoRegister()
	{
		return AEnemigoExplosivo::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigoExplosivo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigoExplosivo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemigo,
		(UObject* (*)())Z_Construct_UPackage__Script_NaveJuego,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoExplosivo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EnemigoExplosivo.h" },
		{ "ModuleRelativePath", "EnemigoExplosivo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigoExplosivo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoExplosivo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoExplosivo_Statics::ClassParams = {
		&AEnemigoExplosivo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEnemigoExplosivo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoExplosivo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigoExplosivo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigoExplosivo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigoExplosivo, 4062560086);
	template<> NAVEJUEGO_API UClass* StaticClass<AEnemigoExplosivo>()
	{
		return AEnemigoExplosivo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigoExplosivo(Z_Construct_UClass_AEnemigoExplosivo, &AEnemigoExplosivo::StaticClass, TEXT("/Script/NaveJuego"), TEXT("AEnemigoExplosivo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoExplosivo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
