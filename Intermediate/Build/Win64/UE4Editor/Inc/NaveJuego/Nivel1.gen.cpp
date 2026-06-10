// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NaveJuego/Nivel1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNivel1() {}
// Cross Module References
	NAVEJUEGO_API UClass* Z_Construct_UClass_UNivel1_NoRegister();
	NAVEJUEGO_API UClass* Z_Construct_UClass_UNivel1();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_NaveJuego();
// End Cross Module References
	void UNivel1::StaticRegisterNativesUNivel1()
	{
	}
	UClass* Z_Construct_UClass_UNivel1_NoRegister()
	{
		return UNivel1::StaticClass();
	}
	struct Z_Construct_UClass_UNivel1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNivel1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_NaveJuego,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNivel1_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Nivel1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNivel1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INivel1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNivel1_Statics::ClassParams = {
		&UNivel1::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNivel1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNivel1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNivel1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNivel1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNivel1, 2675450854);
	template<> NAVEJUEGO_API UClass* StaticClass<UNivel1>()
	{
		return UNivel1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNivel1(Z_Construct_UClass_UNivel1, &UNivel1::StaticClass, TEXT("/Script/NaveJuego"), TEXT("UNivel1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNivel1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
