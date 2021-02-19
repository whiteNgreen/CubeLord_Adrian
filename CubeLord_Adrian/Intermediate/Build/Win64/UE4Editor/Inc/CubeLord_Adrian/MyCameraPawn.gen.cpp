// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CubeLord_Adrian/MyCameraPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCameraPawn() {}
// Cross Module References
	CUBELORD_ADRIAN_API UClass* Z_Construct_UClass_AMyCameraPawn_NoRegister();
	CUBELORD_ADRIAN_API UClass* Z_Construct_UClass_AMyCameraPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_CubeLord_Adrian();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
// End Cross Module References
	void AMyCameraPawn::StaticRegisterNativesAMyCameraPawn()
	{
	}
	UClass* Z_Construct_UClass_AMyCameraPawn_NoRegister()
	{
		return AMyCameraPawn::StaticClass();
	}
	struct Z_Construct_UClass_AMyCameraPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Capsule_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Capsule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetYaw;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyCameraPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_CubeLord_Adrian,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCameraPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyCameraPawn.h" },
		{ "ModuleRelativePath", "MyCameraPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCameraPawn_Statics::NewProp_Capsule_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyCameraPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCameraPawn_Statics::NewProp_Capsule = { "Capsule", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCameraPawn, Capsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyCameraPawn_Statics::NewProp_Capsule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCameraPawn_Statics::NewProp_Capsule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCameraPawn_Statics::NewProp_TargetYaw_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MyCameraPawn" },
		{ "ModuleRelativePath", "MyCameraPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCameraPawn_Statics::NewProp_TargetYaw = { "TargetYaw", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCameraPawn, TargetYaw), METADATA_PARAMS(Z_Construct_UClass_AMyCameraPawn_Statics::NewProp_TargetYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCameraPawn_Statics::NewProp_TargetYaw_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyCameraPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCameraPawn_Statics::NewProp_Capsule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCameraPawn_Statics::NewProp_TargetYaw,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyCameraPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCameraPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyCameraPawn_Statics::ClassParams = {
		&AMyCameraPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyCameraPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyCameraPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyCameraPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCameraPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyCameraPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyCameraPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyCameraPawn, 3332171902);
	template<> CUBELORD_ADRIAN_API UClass* StaticClass<AMyCameraPawn>()
	{
		return AMyCameraPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyCameraPawn(Z_Construct_UClass_AMyCameraPawn, &AMyCameraPawn::StaticClass, TEXT("/Script/CubeLord_Adrian"), TEXT("AMyCameraPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCameraPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
