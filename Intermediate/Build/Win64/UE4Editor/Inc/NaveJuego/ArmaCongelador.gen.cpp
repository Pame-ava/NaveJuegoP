// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NaveJuego/ArmaCongelador.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArmaCongelador() {}
// Cross Module References
	NAVEJUEGO_API UClass* Z_Construct_UClass_AArmaCongelador_NoRegister();
	NAVEJUEGO_API UClass* Z_Construct_UClass_AArmaCongelador();
	NAVEJUEGO_API UClass* Z_Construct_UClass_AArmaDecorador();
	UPackage* Z_Construct_UPackage__Script_NaveJuego();
// End Cross Module References
	void AArmaCongelador::StaticRegisterNativesAArmaCongelador()
	{
	}
	UClass* Z_Construct_UClass_AArmaCongelador_NoRegister()
	{
		return AArmaCongelador::StaticClass();
	}
	struct Z_Construct_UClass_AArmaCongelador_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArmaCongelador_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AArmaDecorador,
		(UObject* (*)())Z_Construct_UPackage__Script_NaveJuego,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArmaCongelador_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ArmaCongelador.h" },
		{ "ModuleRelativePath", "ArmaCongelador.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArmaCongelador_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArmaCongelador>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AArmaCongelador_Statics::ClassParams = {
		&AArmaCongelador::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AArmaCongelador_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AArmaCongelador_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArmaCongelador()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AArmaCongelador_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AArmaCongelador, 10885076);
	template<> NAVEJUEGO_API UClass* StaticClass<AArmaCongelador>()
	{
		return AArmaCongelador::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AArmaCongelador(Z_Construct_UClass_AArmaCongelador, &AArmaCongelador::StaticClass, TEXT("/Script/NaveJuego"), TEXT("AArmaCongelador"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArmaCongelador);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
