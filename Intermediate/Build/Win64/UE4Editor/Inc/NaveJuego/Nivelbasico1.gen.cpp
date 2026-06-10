// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NaveJuego/Nivelbasico1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNivelbasico1() {}
// Cross Module References
	NAVEJUEGO_API UClass* Z_Construct_UClass_UNivelbasico1_NoRegister();
	NAVEJUEGO_API UClass* Z_Construct_UClass_UNivelbasico1();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_NaveJuego();
	NAVEJUEGO_API UClass* Z_Construct_UClass_UNivel1_NoRegister();
// End Cross Module References
	void UNivelbasico1::StaticRegisterNativesUNivelbasico1()
	{
	}
	UClass* Z_Construct_UClass_UNivelbasico1_NoRegister()
	{
		return UNivelbasico1::StaticClass();
	}
	struct Z_Construct_UClass_UNivelbasico1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNivelbasico1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NaveJuego,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNivelbasico1_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Nivelbasico1.h" },
		{ "ModuleRelativePath", "Nivelbasico1.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNivelbasico1_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNivel1_NoRegister, (int32)VTABLE_OFFSET(UNivelbasico1, INivel1), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNivelbasico1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNivelbasico1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNivelbasico1_Statics::ClassParams = {
		&UNivelbasico1::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNivelbasico1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNivelbasico1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNivelbasico1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNivelbasico1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNivelbasico1, 3009359222);
	template<> NAVEJUEGO_API UClass* StaticClass<UNivelbasico1>()
	{
		return UNivelbasico1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNivelbasico1(Z_Construct_UClass_UNivelbasico1, &UNivelbasico1::StaticClass, TEXT("/Script/NaveJuego"), TEXT("UNivelbasico1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNivelbasico1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
