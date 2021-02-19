// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CubeLord_Adrian/CubeLord_AdrianGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCubeLord_AdrianGameModeBase() {}
// Cross Module References
	CUBELORD_ADRIAN_API UClass* Z_Construct_UClass_ACubeLord_AdrianGameModeBase_NoRegister();
	CUBELORD_ADRIAN_API UClass* Z_Construct_UClass_ACubeLord_AdrianGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CubeLord_Adrian();
// End Cross Module References
	void ACubeLord_AdrianGameModeBase::StaticRegisterNativesACubeLord_AdrianGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ACubeLord_AdrianGameModeBase_NoRegister()
	{
		return ACubeLord_AdrianGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ACubeLord_AdrianGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACubeLord_AdrianGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CubeLord_Adrian,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeLord_AdrianGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CubeLord_AdrianGameModeBase.h" },
		{ "ModuleRelativePath", "CubeLord_AdrianGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACubeLord_AdrianGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACubeLord_AdrianGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACubeLord_AdrianGameModeBase_Statics::ClassParams = {
		&ACubeLord_AdrianGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACubeLord_AdrianGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACubeLord_AdrianGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACubeLord_AdrianGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACubeLord_AdrianGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACubeLord_AdrianGameModeBase, 3139170018);
	template<> CUBELORD_ADRIAN_API UClass* StaticClass<ACubeLord_AdrianGameModeBase>()
	{
		return ACubeLord_AdrianGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACubeLord_AdrianGameModeBase(Z_Construct_UClass_ACubeLord_AdrianGameModeBase, &ACubeLord_AdrianGameModeBase::StaticClass, TEXT("/Script/CubeLord_Adrian"), TEXT("ACubeLord_AdrianGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACubeLord_AdrianGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
