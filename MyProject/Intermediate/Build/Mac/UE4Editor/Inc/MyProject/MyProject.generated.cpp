// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "MyProject.h"
#include "MyProject.generated.dep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyProject() {}
	void ACPathNode::StaticRegisterNativesACPathNode()
	{
	}
	IMPLEMENT_CLASS(ACPathNode, 2532280911);
	void AMapActor::StaticRegisterNativesAMapActor()
	{
	}
	IMPLEMENT_CLASS(AMapActor, 2459504342);
	void AMyProjectGameMode::StaticRegisterNativesAMyProjectGameMode()
	{
	}
	IMPLEMENT_CLASS(AMyProjectGameMode, 4171066870);
	void AShipPawn::StaticRegisterNativesAShipPawn()
	{
		FNativeFunctionRegistrar::RegisterFunction(AShipPawn::StaticClass(),"OnHorizontal",(Native)&AShipPawn::execOnHorizontal);
	}
	IMPLEMENT_CLASS(AShipPawn, 73904404);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_AActor();
	ENGINE_API class UClass* Z_Construct_UClass_AGameMode();
	ENGINE_API class UClass* Z_Construct_UClass_APawn();
	PAPER2D_API class UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister();
	PAPER2D_API class UClass* Z_Construct_UClass_UPaperSpriteComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister();

	MYPROJECT_API class UClass* Z_Construct_UClass_ACPathNode_NoRegister();
	MYPROJECT_API class UClass* Z_Construct_UClass_ACPathNode();
	MYPROJECT_API class UClass* Z_Construct_UClass_AMapActor_NoRegister();
	MYPROJECT_API class UClass* Z_Construct_UClass_AMapActor();
	MYPROJECT_API class UClass* Z_Construct_UClass_AMyProjectGameMode_NoRegister();
	MYPROJECT_API class UClass* Z_Construct_UClass_AMyProjectGameMode();
	MYPROJECT_API class UFunction* Z_Construct_UFunction_AShipPawn_OnHorizontal();
	MYPROJECT_API class UClass* Z_Construct_UClass_AShipPawn_NoRegister();
	MYPROJECT_API class UClass* Z_Construct_UClass_AShipPawn();
	MYPROJECT_API class UPackage* Z_Construct_UPackage_MyProject();
	UClass* Z_Construct_UClass_ACPathNode_NoRegister()
	{
		return ACPathNode::StaticClass();
	}
	UClass* Z_Construct_UClass_ACPathNode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage_MyProject();
			OuterClass = ACPathNode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_parent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("parent"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(parent, ACPathNode), 0x0000000000000005, Z_Construct_UClass_ACPathNode_NoRegister());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(isGoal, ACPathNode, bool);
				UProperty* NewProp_isGoal = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("isGoal"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(isGoal, ACPathNode), 0x0000000000000005, CPP_BOOL_PROPERTY_BITMASK(isGoal, ACPathNode), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(isStart, ACPathNode, bool);
				UProperty* NewProp_isStart = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("isStart"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(isStart, ACPathNode), 0x0000000000000005, CPP_BOOL_PROPERTY_BITMASK(isStart, ACPathNode), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(isCur, ACPathNode, bool);
				UProperty* NewProp_isCur = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("isCur"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(isCur, ACPathNode), 0x0000000000000005, CPP_BOOL_PROPERTY_BITMASK(isCur, ACPathNode), sizeof(bool), true);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("CPathNode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("CPathNode.h"));
				MetaData->SetValue(NewProp_parent, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_parent, TEXT("ModuleRelativePath"), TEXT("CPathNode.h"));
				MetaData->SetValue(NewProp_isGoal, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_isGoal, TEXT("ModuleRelativePath"), TEXT("CPathNode.h"));
				MetaData->SetValue(NewProp_isStart, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_isStart, TEXT("ModuleRelativePath"), TEXT("CPathNode.h"));
				MetaData->SetValue(NewProp_isCur, TEXT("Category"), TEXT("Default"));
				MetaData->SetValue(NewProp_isCur, TEXT("ModuleRelativePath"), TEXT("CPathNode.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACPathNode(Z_Construct_UClass_ACPathNode, TEXT("ACPathNode"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPathNode);
	UClass* Z_Construct_UClass_AMapActor_NoRegister()
	{
		return AMapActor::StaticClass();
	}
	UClass* Z_Construct_UClass_AMapActor()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage_MyProject();
			OuterClass = AMapActor::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MapActor.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MapActor.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMapActor(Z_Construct_UClass_AMapActor, TEXT("AMapActor"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMapActor);
	UClass* Z_Construct_UClass_AMyProjectGameMode_NoRegister()
	{
		return AMyProjectGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyProjectGameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameMode();
			Z_Construct_UPackage_MyProject();
			OuterClass = AMyProjectGameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x2090028C;


				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MyProjectGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MyProjectGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyProjectGameMode(Z_Construct_UClass_AMyProjectGameMode, TEXT("AMyProjectGameMode"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyProjectGameMode);
	UFunction* Z_Construct_UFunction_AShipPawn_OnHorizontal()
	{
		struct ShipPawn_eventOnHorizontal_Parms
		{
			float val;
		};
		UObject* Outer=Z_Construct_UClass_AShipPawn();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnHorizontal"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x00040401, 65535, sizeof(ShipPawn_eventOnHorizontal_Parms));
			UProperty* NewProp_val = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("val"), RF_Public|RF_Transient|RF_Native) UFloatProperty(CPP_PROPERTY_BASE(val, ShipPawn_eventOnHorizontal_Parms), 0x0000000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("ShipPawn.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AShipPawn_NoRegister()
	{
		return AShipPawn::StaticClass();
	}
	UClass* Z_Construct_UClass_AShipPawn()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APawn();
			Z_Construct_UPackage_MyProject();
			OuterClass = AShipPawn::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_AShipPawn_OnHorizontal());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_m_bladeVisual = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("m_bladeVisual"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(m_bladeVisual, AShipPawn), 0x00000000000b0009, Z_Construct_UClass_UPaperFlipbookComponent_NoRegister());
				UProperty* NewProp_m_shipVisual = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("m_shipVisual"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(m_shipVisual, AShipPawn), 0x00000000000b0009, Z_Construct_UClass_UPaperSpriteComponent_NoRegister());
				UProperty* NewProp_m_movementComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("m_movementComponent"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(m_movementComponent, AShipPawn), 0x00000000000b0009, Z_Construct_UClass_UFloatingPawnMovement_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_AShipPawn_OnHorizontal()); // 2076034533
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ShipPawn.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("ShipPawn.h"));
				MetaData->SetValue(NewProp_m_bladeVisual, TEXT("Category"), TEXT("ShipPawn"));
				MetaData->SetValue(NewProp_m_bladeVisual, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_m_bladeVisual, TEXT("ModuleRelativePath"), TEXT("ShipPawn.h"));
				MetaData->SetValue(NewProp_m_bladeVisual, TEXT("ToolTip"), TEXT("The blade animated sprite component."));
				MetaData->SetValue(NewProp_m_shipVisual, TEXT("Category"), TEXT("ShipPawn"));
				MetaData->SetValue(NewProp_m_shipVisual, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_m_shipVisual, TEXT("ModuleRelativePath"), TEXT("ShipPawn.h"));
				MetaData->SetValue(NewProp_m_shipVisual, TEXT("ToolTip"), TEXT("The  ship sprite component."));
				MetaData->SetValue(NewProp_m_movementComponent, TEXT("Category"), TEXT("ShipPawn"));
				MetaData->SetValue(NewProp_m_movementComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_m_movementComponent, TEXT("ModuleRelativePath"), TEXT("ShipPawn.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShipPawn(Z_Construct_UClass_AShipPawn, TEXT("AShipPawn"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShipPawn);
	UPackage* Z_Construct_UPackage_MyProject()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/MyProject")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x43FAD8DB;
			Guid.B = 0xA268994F;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS