// Thomas J. Meehan

#include "FPSProject.h"
#include "FPSCharacter.h"
#include "FPSProjectile.h"
#include "SecProjectile.h"



// Sets default values
AFPSCharacter::AFPSCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}


// Called every frame
void AFPSCharacter::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void AFPSCharacter::SetupPlayerInputComponent(UInputComponent* InputComponent)
{
    // set up gameplay key bindings
    InputComponent->BindAxis("MoveForward", this, &AFPSCharacter::MoveForward);
    InputComponent->BindAxis("MoveRight", this, &AFPSCharacter::MoveRight);
    
    InputComponent->BindAxis("Turn", this, &AFPSCharacter::AddControllerYawInput);
    InputComponent->BindAxis("LookUp", this, &AFPSCharacter::AddControllerPitchInput);
    
    InputComponent->BindAction("Jump", IE_Pressed, this, &AFPSCharacter::OnStartJump);
    InputComponent->BindAction("Jump", IE_Released, this, &AFPSCharacter::OnStopJump);
    
    InputComponent->BindAction("Fire", IE_Pressed, this, &AFPSCharacter::OnFire);
    
    //new content for extension, alternative fire for secondary projectile / weapon
    InputComponent->BindAction("SecFire", IE_Pressed, this, &AFPSCharacter::OnSecFire);


}

void AFPSCharacter::BeginPlay()
{
    Super::BeginPlay();
    
    //debug message
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("We are using FPSCharacter!"));
    }
}

//walk forward
void AFPSCharacter::MoveForward(float Value)
{
    if ( (Controller != NULL) && (Value != 0.0f) )
    {
        // find out which way is forward
        FRotator Rotation = Controller->GetControlRotation();
        // Limit pitch when walking or falling
        if (GetCharacterMovement()->IsMovingOnGround() || GetCharacterMovement()->IsFalling() )
        {
            Rotation.Pitch = 0.0f;
        }
        // add movement in that direction
        const FVector Direction = FRotationMatrix(Rotation).GetScaledAxis(EAxis::X);
        AddMovementInput(Direction, Value);
    }
}

//strafe right
void AFPSCharacter::MoveRight(float Value)
{
    if ( (Controller != NULL) && (Value != 0.0f) )
    {
        // find out which way is right
        const FRotator Rotation = Controller->GetControlRotation();
        const FVector Direction = FRotationMatrix(Rotation).GetScaledAxis(EAxis::Y);
        // add movement in that direction
        AddMovementInput(Direction, Value);
    }
}

//figure out if jump button is down
void AFPSCharacter::OnStartJump()
{
    bPressedJump = true;
}
void AFPSCharacter::OnStopJump()
{
    bPressedJump = false;
}


AFPSCharacter::AFPSCharacter(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{
    // Create a CameraComponent
    FirstPersonCameraComponent = ObjectInitializer.CreateDefaultSubobject<UCameraComponent>(this, TEXT("FirstPersonCamera"));
    FirstPersonCameraComponent->AttachParent = CapsuleComponent;
    
    // Position the camera a bit above the eyes
    FirstPersonCameraComponent->RelativeLocation = FVector(0, 0, 50.0f + BaseEyeHeight);
    // Allow the pawn to control rotation.
    FirstPersonCameraComponent->bUsePawnControlRotation = true;
    
    // Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
    FirstPersonMesh = ObjectInitializer.CreateDefaultSubobject<USkeletalMeshComponent>(this, TEXT("FirstPersonMesh"));
    FirstPersonMesh->SetOnlyOwnerSee(true);         // only the owning player will see this mesh
    FirstPersonMesh->AttachParent = FirstPersonCameraComponent;
    FirstPersonMesh->bCastDynamicShadow = false;
    FirstPersonMesh->CastShadow = false;
    
      Mesh->SetOwnerNoSee(true);
}



void AFPSCharacter::OnFire()
{
    // try and fire a projectile
    if (ProjectileClass != NULL)
    {
        // Get the camera transform
        FVector CameraLoc;
        FRotator CameraRot;
        GetActorEyesViewPoint(CameraLoc, CameraRot);
        // MuzzleOffset is in camera space, so transform it to world space before offsetting from the camera to find the final muzzle position
        FVector const MuzzleLocation = CameraLoc + FTransform(CameraRot).TransformVector(MuzzleOffset);
        FRotator MuzzleRotation = CameraRot;
        MuzzleRotation.Pitch += 10.0f;          // skew the aim upwards a bit
        UWorld* const World = GetWorld();
        if (World)
        {
            FActorSpawnParameters SpawnParams;
            SpawnParams.Owner = this;
            SpawnParams.Instigator = Instigator;
            // spawn the projectile at the muzzle
            AFPSProjectile* const Projectile = World->SpawnActor<AFPSProjectile>(ProjectileClass, MuzzleLocation, MuzzleRotation, SpawnParams);
            if (Projectile)
            {
                // find launch direction
                FVector const LaunchDir = MuzzleRotation.Vector();
                Projectile->InitVelocity(LaunchDir);
            }
        }
    }
}


//fire secondary projectile
void AFPSCharacter::OnSecFire()
{
    // try and fire a projectile
    if (SecProjectileClass != NULL)
    {
        // Get the camera transform
        FVector CameraLoc;
        FRotator CameraRot;
        GetActorEyesViewPoint(CameraLoc, CameraRot);
        // MuzzleOffset is in camera space, so transform it to world space before offsetting from the camera to find the final muzzle position
        FVector const MuzzleLocation = CameraLoc + FTransform(CameraRot).TransformVector(SecMuzzleOffset);
        FRotator MuzzleRotation = CameraRot;
        MuzzleRotation.Pitch += 10.0f;          // skew the aim upwards a lot
        UWorld* const World = GetWorld();
        if (World)
        {
            FActorSpawnParameters SpawnParams;
            SpawnParams.Owner = this;
            SpawnParams.Instigator = Instigator;
            // spawn the projectile at the muzzle
            ASecProjectile* const Projectile = World->SpawnActor<ASecProjectile>(SecProjectileClass, MuzzleLocation, MuzzleRotation, SpawnParams);
            if (Projectile)
            {
                // find launch direction
                FVector const LaunchDir = MuzzleRotation.Vector();
                Projectile->InitVelocity(LaunchDir);
            }
        }
    }
}

