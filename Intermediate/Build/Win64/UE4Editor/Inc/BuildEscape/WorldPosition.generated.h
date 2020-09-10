// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BUILDESCAPE_WorldPosition_generated_h
#error "WorldPosition.generated.h already included, missing '#pragma once' in WorldPosition.h"
#endif
#define BUILDESCAPE_WorldPosition_generated_h

#define BuildEscape_Source_BuildEscape_WorldPosition_h_13_RPC_WRAPPERS
#define BuildEscape_Source_BuildEscape_WorldPosition_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define BuildEscape_Source_BuildEscape_WorldPosition_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorldPosition(); \
	friend struct Z_Construct_UClass_UWorldPosition_Statics; \
public: \
	DECLARE_CLASS(UWorldPosition, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildEscape"), NO_API) \
	DECLARE_SERIALIZER(UWorldPosition)


#define BuildEscape_Source_BuildEscape_WorldPosition_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUWorldPosition(); \
	friend struct Z_Construct_UClass_UWorldPosition_Statics; \
public: \
	DECLARE_CLASS(UWorldPosition, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildEscape"), NO_API) \
	DECLARE_SERIALIZER(UWorldPosition)


#define BuildEscape_Source_BuildEscape_WorldPosition_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWorldPosition(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPosition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorldPosition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPosition); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWorldPosition(UWorldPosition&&); \
	NO_API UWorldPosition(const UWorldPosition&); \
public:


#define BuildEscape_Source_BuildEscape_WorldPosition_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWorldPosition(UWorldPosition&&); \
	NO_API UWorldPosition(const UWorldPosition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorldPosition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPosition); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWorldPosition)


#define BuildEscape_Source_BuildEscape_WorldPosition_h_13_PRIVATE_PROPERTY_OFFSET
#define BuildEscape_Source_BuildEscape_WorldPosition_h_10_PROLOG
#define BuildEscape_Source_BuildEscape_WorldPosition_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildEscape_Source_BuildEscape_WorldPosition_h_13_PRIVATE_PROPERTY_OFFSET \
	BuildEscape_Source_BuildEscape_WorldPosition_h_13_RPC_WRAPPERS \
	BuildEscape_Source_BuildEscape_WorldPosition_h_13_INCLASS \
	BuildEscape_Source_BuildEscape_WorldPosition_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuildEscape_Source_BuildEscape_WorldPosition_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildEscape_Source_BuildEscape_WorldPosition_h_13_PRIVATE_PROPERTY_OFFSET \
	BuildEscape_Source_BuildEscape_WorldPosition_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	BuildEscape_Source_BuildEscape_WorldPosition_h_13_INCLASS_NO_PURE_DECLS \
	BuildEscape_Source_BuildEscape_WorldPosition_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDESCAPE_API UClass* StaticClass<class UWorldPosition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BuildEscape_Source_BuildEscape_WorldPosition_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
