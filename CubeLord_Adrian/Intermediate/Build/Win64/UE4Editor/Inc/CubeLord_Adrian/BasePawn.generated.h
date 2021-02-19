// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CUBELORD_ADRIAN_BasePawn_generated_h
#error "BasePawn.generated.h already included, missing '#pragma once' in BasePawn.h"
#endif
#define CUBELORD_ADRIAN_BasePawn_generated_h

#define CubeLord_Adrian_Source_CubeLord_Adrian_BasePawn_h_14_SPARSE_DATA
#define CubeLord_Adrian_Source_CubeLord_Adrian_BasePawn_h_14_RPC_WRAPPERS
#define CubeLord_Adrian_Source_CubeLord_Adrian_BasePawn_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define CubeLord_Adrian_Source_CubeLord_Adrian_BasePawn_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABasePawn(); \
	friend struct Z_Construct_UClass_ABasePawn_Statics; \
public: \
	DECLARE_CLASS(ABasePawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CubeLord_Adrian"), NO_API) \
	DECLARE_SERIALIZER(ABasePawn)


#define CubeLord_Adrian_Source_CubeLord_Adrian_BasePawn_h_14_INCLASS \
private: \
	static void StaticRegisterNativesABasePawn(); \
	friend struct Z_Construct_UClass_ABasePawn_Statics; \
public: \
	DECLARE_CLASS(ABasePawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CubeLord_Adrian"), NO_API) \
	DECLARE_SERIALIZER(ABasePawn)


#define CubeLord_Adrian_Source_CubeLord_Adrian_BasePawn_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABasePawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABasePawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasePawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasePawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasePawn(ABasePawn&&); \
	NO_API ABasePawn(const ABasePawn&); \
public:


#define CubeLord_Adrian_Source_CubeLord_Adrian_BasePawn_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasePawn(ABasePawn&&); \
	NO_API ABasePawn(const ABasePawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasePawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasePawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABasePawn)


#define CubeLord_Adrian_Source_CubeLord_Adrian_BasePawn_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CapsuleCollider() { return STRUCT_OFFSET(ABasePawn, CapsuleCollider); } \
	FORCEINLINE static uint32 __PPO__BaseMesh() { return STRUCT_OFFSET(ABasePawn, BaseMesh); }


#define CubeLord_Adrian_Source_CubeLord_Adrian_BasePawn_h_11_PROLOG
#define CubeLord_Adrian_Source_CubeLord_Adrian_BasePawn_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CubeLord_Adrian_Source_CubeLord_Adrian_BasePawn_h_14_PRIVATE_PROPERTY_OFFSET \
	CubeLord_Adrian_Source_CubeLord_Adrian_BasePawn_h_14_SPARSE_DATA \
	CubeLord_Adrian_Source_CubeLord_Adrian_BasePawn_h_14_RPC_WRAPPERS \
	CubeLord_Adrian_Source_CubeLord_Adrian_BasePawn_h_14_INCLASS \
	CubeLord_Adrian_Source_CubeLord_Adrian_BasePawn_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CubeLord_Adrian_Source_CubeLord_Adrian_BasePawn_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CubeLord_Adrian_Source_CubeLord_Adrian_BasePawn_h_14_PRIVATE_PROPERTY_OFFSET \
	CubeLord_Adrian_Source_CubeLord_Adrian_BasePawn_h_14_SPARSE_DATA \
	CubeLord_Adrian_Source_CubeLord_Adrian_BasePawn_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	CubeLord_Adrian_Source_CubeLord_Adrian_BasePawn_h_14_INCLASS_NO_PURE_DECLS \
	CubeLord_Adrian_Source_CubeLord_Adrian_BasePawn_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CUBELORD_ADRIAN_API UClass* StaticClass<class ABasePawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CubeLord_Adrian_Source_CubeLord_Adrian_BasePawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
