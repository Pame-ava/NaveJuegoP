// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NaveJuego/ArmaFuerte.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArmaFuerte() {}
// Cross Module References
	NAVEJUEGO_API UClass* Z_Construct_UClass_AArmaFuerte_NoRegister();
	NAVEJUEGO_API UClass* Z_Construct_UClass_AArmaFuerte();
	NAVEJUEGO_API UClass* Z_Construct_UClass_AArmaDecorador();
	UPackage* Z_Construct_UPackage__Script_NaveJuego();
// End Cross Module References
	void AArmaFuerte::StaticRegisterNativesAArmaFuerte()
	{
	}
	UClass* Z_Construct_UClass_AArmaFuerte_NoRegister()
	{
		return AArmaFuerte::StaticClass();
	}
	struct Z_Construct_UClass_AArmaFuerte_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArmaFuerte_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AArmaDecorador,
		(UObject* (*)())Z_Construct_UPackage__Script_NaveJuego,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmaFuerte_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ArmaFuerte.h" },
		{ "ModuleRelativePath", "ArmaFuerte.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArmaFuerte_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArmaFuerte>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AArmaFuerte_Statics::ClassParams = {
		&AArmaFuerte::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AArmaFuerte_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AArmaFuerte_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArmaFuerte()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AArmaFuerte_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AArmaFuerte, 608634119);
	template<> NAVEJUEGO_API UClass* StaticClass<AArmaFuerte>()
	{
		return AArmaFuerte::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AArmaFuerte(Z_Construct_UClass_AArmaFuerte, &AArmaFuerte::StaticClass, TEXT("/Script/NaveJuego"), TEXT("AArmaFuerte"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArmaFuerte);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
