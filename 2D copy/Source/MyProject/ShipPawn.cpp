// Fill out your copyright notice in the Description page of Project Settings.

#include "MyProject.h"
#include "ShipPawn.h"



// Called when the game starts or when spawned
void AShipPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AShipPawn::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}



// Sets default values
AShipPawn::AShipPawn()

{
    // Set this pawn to call Tick() every frame.
    PrimaryActorTick.bCanEverTick = true;
    
    // Create the root component for this object.
    USphereComponent *collision = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));
    RootComponent = collision;
    collision->SetSphereRadius(28.0f);
    collision->RelativeLocation = FVector(0.0f, 0.0f, 0.0f);
    collision->SetCollisionProfileName("Pawn");
    
    // Setup movement.
    m_movementComponent = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("Movement"));
    m_movementComponent->SetUpdatedComponent(RootComponent);
    m_movementComponent->MaxSpeed = 500.0f;
    m_movementComponent->Acceleration = m_movementComponent->MaxSpeed * 5;
    m_movementComponent->Deceleration = m_movementComponent->MaxSpeed * 5;
    
    // Setup the spring arm that the camera will attach to.
    USpringArmComponent *springArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
    springArm->AttachTo(RootComponent);
    springArm->SetRelativeRotation(FVector(0.0f, -1.0f, 0.0f).Rotation());
    springArm->SetAbsolute(false, false, false);
springArm->TargetArmLength = 500.f;
springArm->bEnableCameraLag = true;
springArm->CameraLagSpeed = 3.0f;
    
// Setup the camera.
UCameraComponent *camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
camera->AttachTo(springArm, USpringArmComponent::SocketName);
camera->SetWorldRotation(FVector(0.0f, -1.0f, 0.0f).Rotation());
camera->ProjectionMode = ECameraProjectionMode::Orthographic;
camera->OrthoWidth = 700.0f;
    
// Create the sprite for the ship.
m_shipVisual = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("ShipVisual"));
m_shipVisual->AttachTo(collision);
m_shipVisual->RelativeLocation = FVector(0.0f, 0.0f, -7.0f);
m_shipVisual->SetSprite(ConstructorHelpers::FObjectFinder<UPaperSprite>
                        (TEXT("/Game/sprites/ship/core/ShipSprite")).Object);
    
// Create the animated sprite component.
m_bladeVisual = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("BladeVisual"));
m_bladeVisual->AttachTo(collision);
m_bladeVisual-> SetFlipbook(ConstructorHelpers::FObjectFinder<UPaperFlipbook>
                            (TEXT("/Game/sprites/ship/blade/mothershipBladeFlipbook")).Object);
m_bladeVisual->RelativeLocation = FVector(-2.0, 0.0f, 0.0f);
m_bladeVisual->RelativeScale3D = FVector(1.5f);

}

// Called to bind functionality to input
void AShipPawn::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
    Super::SetupPlayerInputComponent(InputComponent);
    
    InputComponent->BindAxis("Horizontal", this, &AShipPawn::OnHorizontal);
    InputComponent->BindAxis("Vertical", this, &AShipPawn::OnVertical);
}
void AShipPawn::OnHorizontal(float val)
{
    FVector input = FVector(val, 0.0f, 0.0f);
    AddMovementInput(input);
}
void AShipPawn::OnVertical(float val)
{
    FVector input = FVector(0.0f, 0.0f, val);
    AddMovementInput(input);
}




















