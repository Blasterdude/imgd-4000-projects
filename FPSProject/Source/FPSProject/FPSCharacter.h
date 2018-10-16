// Thomas J. Meehan

#pragma once

#include "GameFramework/Character.h"
#include "FPSCharacter.generated.h"

UCLASS()
class FPSPROJECT_API AFPSCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AFPSCharacter();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
    
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;
    
    //sets jump flag when key is pressed
    UFUNCTION()
    void OnStartJump();
    //clears jump flag when key is released
    UFUNCTION()
    void OnStopJump();
    
    /** First person camera */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
    UCameraComponent* FirstPersonCameraComponent;
    
    /** Pawn mesh: 1st person view (arms; seen only by self) */
    UPROPERTY(VisibleDefaultsOnly, Category=Mesh)
    USkeletalMeshComponent* FirstPersonMesh;
    
    // Constructor for AFPSCharacter
    AFPSCharacter(const FObjectInitializer& ObjectInitializer);
    
    //handles firing
    UFUNCTION()
    void OnFire();
    
    //handles secondary firing
    UFUNCTION()
    void OnSecFire();
    
    /** Gun muzzle's offset from the camera location */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Gameplay)
    FVector MuzzleOffset;
    
    /** Projectile class to spawn */
    UPROPERTY(EditDefaultsOnly, Category=Projectile)
    TSubclassOf<class AFPSProjectile> ProjectileClass;
    
    /** Secondary Gun muzzle's offset from the camera location */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Gameplay)
    FVector SecMuzzleOffset;
    
    /** Secondary Projectile class to spawn */
    UPROPERTY(EditDefaultsOnly, Category=Projectile)
    TSubclassOf<class ASecProjectile> SecProjectileClass;
    

    

protected:
    virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
    
    //handles moving forward/backward
    UFUNCTION()
    void MoveForward(float Val);
    //handles strafing
    UFUNCTION()
    void MoveRight(float Val);
	
};
