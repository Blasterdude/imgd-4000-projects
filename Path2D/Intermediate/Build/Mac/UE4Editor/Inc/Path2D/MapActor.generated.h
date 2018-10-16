// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PATH2D_MapActor_generated_h
#error "MapActor.generated.h already included, missing '#pragma once' in MapActor.h"
#endif
#define PATH2D_MapActor_generated_h

#define Path2D_Source_Path2D_MapActor_h_11_RPC_WRAPPERS
#define Path2D_Source_Path2D_MapActor_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define Path2D_Source_Path2D_MapActor_h_11_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAMapActor(); \
	friend PATH2D_API class UClass* Z_Construct_UClass_AMapActor(); \
	public: \
	DECLARE_CLASS(AMapActor, AActor, COMPILED_IN_FLAGS(0), 0, Path2D, NO_API) \
	DECLARE_SERIALIZER(AMapActor) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AMapActor*>(this); }


#define Path2D_Source_Path2D_MapActor_h_11_INCLASS \
	private: \
	static void StaticRegisterNativesAMapActor(); \
	friend PATH2D_API class UClass* Z_Construct_UClass_AMapActor(); \
	public: \
	DECLARE_CLASS(AMapActor, AActor, COMPILED_IN_FLAGS(0), 0, Path2D, NO_API) \
	DECLARE_SERIALIZER(AMapActor) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AMapActor*>(this); }


#define Path2D_Source_Path2D_MapActor_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMapActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMapActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMapActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMapActor); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AMapActor(const AMapActor& InCopy); \
public:


#define Path2D_Source_Path2D_MapActor_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AMapActor(const AMapActor& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMapActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMapActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMapActor)


#define Path2D_Source_Path2D_MapActor_h_8_PROLOG
#define Path2D_Source_Path2D_MapActor_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Path2D_Source_Path2D_MapActor_h_11_RPC_WRAPPERS \
	Path2D_Source_Path2D_MapActor_h_11_INCLASS \
	Path2D_Source_Path2D_MapActor_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Path2D_Source_Path2D_MapActor_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Path2D_Source_Path2D_MapActor_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Path2D_Source_Path2D_MapActor_h_11_INCLASS_NO_PURE_DECLS \
	Path2D_Source_Path2D_MapActor_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Path2D_Source_Path2D_MapActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS