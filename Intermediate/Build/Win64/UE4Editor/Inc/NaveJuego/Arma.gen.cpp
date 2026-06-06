// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NaveJuego/Arma.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArma() {}
// Cross Module References
	NAVEJUEGO_API UClass* Z_Construct_UClass_UArma_NoRegister();
	NAVEJUEGO_API UClass* Z_Construct_UClass_UArma();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_NaveJuego();
// End Cross Module References
	void UArma::StaticRegisterNativesUArma()
	{
	}
	UClass* Z_Construct_UClass_UArma_NoRegister()
	{
		return UArma::StaticClass();
	}
	struct Z_Construct_UClass_UArma_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArma_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_NaveJuego,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArma_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Arma.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArma_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IArma>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UArma_Statics::ClassParams = {
		&UArma::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UArma_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UArma_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UArma()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UArma_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UArma, 4032627519);
	template<> NAVEJUEGO_API UClass* StaticClass<UArma>()
	{
		return UArma::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UArma(Z_Construct_UClass_UArma, &UArma::StaticClass, TEXT("/Script/NaveJuego"), TEXT("UArma"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArma);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
