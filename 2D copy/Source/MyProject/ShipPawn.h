// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "PaperSpriteComponent.h"
#include "PaperFlipbookComponent.h"

#include "GameFramework/Pawn.h"
#include "ShipPawn.generated.h"

UCLASS()
class MYPROJECT_API AShipPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AShipPawn();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

    
private:
    UFUNCTION()
    void OnHorizontal(float val);

    void OnVertical(float val);
    
private:
    UPROPERTY(VisibleDefaultsOnly)
    UFloatingPawnMovement *m_movementComponent;
    // The  ship sprite component.
    UPROPERTY(VisibleDefaultsOnly)
    UPaperSpriteComponent *m_shipVisual;
    // The blade animated sprite component.
    UPROPERTY(VisibleDefaultsOnly)
    UPaperFlipbookComponent *m_bladeVisual;
	
};
