// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interface/PickupActorInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;
#ifdef BLOCKS_PickupActorInterface_generated_h
#error "PickupActorInterface.generated.h already included, missing '#pragma once' in PickupActorInterface.h"
#endif
#define BLOCKS_PickupActorInterface_generated_h

#define FID_Blocks_Source_Blocks_Interface_PickupActorInterface_h_16_SPARSE_DATA
#define FID_Blocks_Source_Blocks_Interface_PickupActorInterface_h_16_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Blocks_Source_Blocks_Interface_PickupActorInterface_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Blocks_Source_Blocks_Interface_PickupActorInterface_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Drop_Implementation() {}; \
	virtual void Pickup_Implementation(USceneComponent* AttachTo) {}; \
 \
	DECLARE_FUNCTION(execDrop); \
	DECLARE_FUNCTION(execPickup);


#define FID_Blocks_Source_Blocks_Interface_PickupActorInterface_h_16_ACCESSORS
#define FID_Blocks_Source_Blocks_Interface_PickupActorInterface_h_16_CALLBACK_WRAPPERS
#define FID_Blocks_Source_Blocks_Interface_PickupActorInterface_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLOCKS_API UPickupActorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BLOCKS_API UPickupActorInterface(UPickupActorInterface&&); \
	BLOCKS_API UPickupActorInterface(const UPickupActorInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLOCKS_API, UPickupActorInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPickupActorInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPickupActorInterface) \
	BLOCKS_API virtual ~UPickupActorInterface();


#define FID_Blocks_Source_Blocks_Interface_PickupActorInterface_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPickupActorInterface(); \
	friend struct Z_Construct_UClass_UPickupActorInterface_Statics; \
public: \
	DECLARE_CLASS(UPickupActorInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Blocks"), BLOCKS_API) \
	DECLARE_SERIALIZER(UPickupActorInterface)


#define FID_Blocks_Source_Blocks_Interface_PickupActorInterface_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Blocks_Source_Blocks_Interface_PickupActorInterface_h_16_GENERATED_UINTERFACE_BODY() \
	FID_Blocks_Source_Blocks_Interface_PickupActorInterface_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Blocks_Source_Blocks_Interface_PickupActorInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPickupActorInterface() {} \
public: \
	typedef UPickupActorInterface UClassType; \
	typedef IPickupActorInterface ThisClass; \
	static void Execute_Drop(UObject* O); \
	static void Execute_Pickup(UObject* O, USceneComponent* AttachTo); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Blocks_Source_Blocks_Interface_PickupActorInterface_h_13_PROLOG
#define FID_Blocks_Source_Blocks_Interface_PickupActorInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Blocks_Source_Blocks_Interface_PickupActorInterface_h_16_SPARSE_DATA \
	FID_Blocks_Source_Blocks_Interface_PickupActorInterface_h_16_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Blocks_Source_Blocks_Interface_PickupActorInterface_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Blocks_Source_Blocks_Interface_PickupActorInterface_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Blocks_Source_Blocks_Interface_PickupActorInterface_h_16_ACCESSORS \
	FID_Blocks_Source_Blocks_Interface_PickupActorInterface_h_16_CALLBACK_WRAPPERS \
	FID_Blocks_Source_Blocks_Interface_PickupActorInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLOCKS_API UClass* StaticClass<class UPickupActorInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Blocks_Source_Blocks_Interface_PickupActorInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
