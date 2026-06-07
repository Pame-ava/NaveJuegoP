// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NaveJuego/MeteoritoDestructible.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeteoritoDestructible() {}
// Cross Module References
	NAVEJUEGO_API UClass* Z_Construct_UClass_AMeteoritoDestructible_NoRegister();
	NAVEJUEGO_API UClass* Z_Construct_UClass_AMeteoritoDestructible();
	NAVEJUEGO_API UClass* Z_Construct_UClass_AMeteorito();
	UPackage* Z_Construct_UPackage__Script_NaveJuego();
// End Cross Module References
	void AMeteoritoDestructible::StaticRegisterNativesAMeteoritoDestructible()
	{
	}
	UClass* Z_Construct_UClass_AMeteoritoDestructible_NoRegister()
	{
		return AMeteoritoDestructible::StaticClass();
	}
	struct Z_Construct_UClass_AMeteoritoDestructible_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMeteoritoDestructible_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMeteorito,
		(UObject* (*)())Z_Construct_UPackage__Script_NaveJuego,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeteoritoDestructible_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MeteoritoDestructible.h" },
		{ "ModuleRelativePath", "MeteoritoDestructible.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMeteoritoDestructible_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMeteoritoDestructible>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMeteoritoDestructible_Statics::ClassParams = {
		&AMeteoritoDestructible::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMeteoritoDestructible_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMeteoritoDestructible_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMeteoritoDestructible()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMeteoritoDestructible_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMeteoritoDestructible, 2046044069);
	template<> NAVEJUEGO_API UClass* StaticClass<AMeteoritoDestructible>()
	{
		return AMeteoritoDestructible::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMeteoritoDestructible(Z_Construct_UClass_AMeteoritoDestructible, &AMeteoritoDestructible::StaticClass, TEXT("/Script/NaveJuego"), TEXT("AMeteoritoDestructible"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMeteoritoDestructible);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
