// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NaveJuego/MeteoritoMovil.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeteoritoMovil() {}
// Cross Module References
	NAVEJUEGO_API UClass* Z_Construct_UClass_AMeteoritoMovil_NoRegister();
	NAVEJUEGO_API UClass* Z_Construct_UClass_AMeteoritoMovil();
	NAVEJUEGO_API UClass* Z_Construct_UClass_AMeteorito();
	UPackage* Z_Construct_UPackage__Script_NaveJuego();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void AMeteoritoMovil::StaticRegisterNativesAMeteoritoMovil()
	{
	}
	UClass* Z_Construct_UClass_AMeteoritoMovil_NoRegister()
	{
		return AMeteoritoMovil::StaticClass();
	}
	struct Z_Construct_UClass_AMeteoritoMovil_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PuntoInicio_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PuntoInicio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PuntoDestino_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PuntoDestino;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocidad_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Velocidad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LimiteMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LimiteMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LimiteMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LimiteMax;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMeteoritoMovil_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMeteorito,
		(UObject* (*)())Z_Construct_UPackage__Script_NaveJuego,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeteoritoMovil_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MeteoritoMovil.h" },
		{ "ModuleRelativePath", "MeteoritoMovil.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeteoritoMovil_Statics::NewProp_PuntoInicio_MetaData[] = {
		{ "Category", "Movimiento" },
		{ "ModuleRelativePath", "MeteoritoMovil.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMeteoritoMovil_Statics::NewProp_PuntoInicio = { "PuntoInicio", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMeteoritoMovil, PuntoInicio), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMeteoritoMovil_Statics::NewProp_PuntoInicio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMeteoritoMovil_Statics::NewProp_PuntoInicio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeteoritoMovil_Statics::NewProp_PuntoDestino_MetaData[] = {
		{ "Category", "Movimiento" },
		{ "ModuleRelativePath", "MeteoritoMovil.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMeteoritoMovil_Statics::NewProp_PuntoDestino = { "PuntoDestino", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMeteoritoMovil, PuntoDestino), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMeteoritoMovil_Statics::NewProp_PuntoDestino_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMeteoritoMovil_Statics::NewProp_PuntoDestino_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeteoritoMovil_Statics::NewProp_Velocidad_MetaData[] = {
		{ "Category", "Movimiento" },
		{ "ModuleRelativePath", "MeteoritoMovil.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMeteoritoMovil_Statics::NewProp_Velocidad = { "Velocidad", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMeteoritoMovil, Velocidad), METADATA_PARAMS(Z_Construct_UClass_AMeteoritoMovil_Statics::NewProp_Velocidad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMeteoritoMovil_Statics::NewProp_Velocidad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeteoritoMovil_Statics::NewProp_LimiteMin_MetaData[] = {
		{ "Category", "Movimiento" },
		{ "ModuleRelativePath", "MeteoritoMovil.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMeteoritoMovil_Statics::NewProp_LimiteMin = { "LimiteMin", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMeteoritoMovil, LimiteMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMeteoritoMovil_Statics::NewProp_LimiteMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMeteoritoMovil_Statics::NewProp_LimiteMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMeteoritoMovil_Statics::NewProp_LimiteMax_MetaData[] = {
		{ "Category", "Movimiento" },
		{ "ModuleRelativePath", "MeteoritoMovil.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMeteoritoMovil_Statics::NewProp_LimiteMax = { "LimiteMax", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMeteoritoMovil, LimiteMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMeteoritoMovil_Statics::NewProp_LimiteMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMeteoritoMovil_Statics::NewProp_LimiteMax_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMeteoritoMovil_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMeteoritoMovil_Statics::NewProp_PuntoInicio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMeteoritoMovil_Statics::NewProp_PuntoDestino,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMeteoritoMovil_Statics::NewProp_Velocidad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMeteoritoMovil_Statics::NewProp_LimiteMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMeteoritoMovil_Statics::NewProp_LimiteMax,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMeteoritoMovil_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMeteoritoMovil>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMeteoritoMovil_Statics::ClassParams = {
		&AMeteoritoMovil::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMeteoritoMovil_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMeteoritoMovil_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMeteoritoMovil_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMeteoritoMovil_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMeteoritoMovil()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMeteoritoMovil_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMeteoritoMovil, 723959674);
	template<> NAVEJUEGO_API UClass* StaticClass<AMeteoritoMovil>()
	{
		return AMeteoritoMovil::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMeteoritoMovil(Z_Construct_UClass_AMeteoritoMovil, &AMeteoritoMovil::StaticClass, TEXT("/Script/NaveJuego"), TEXT("AMeteoritoMovil"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMeteoritoMovil);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
