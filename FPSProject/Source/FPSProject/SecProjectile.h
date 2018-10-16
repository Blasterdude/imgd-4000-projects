// Thomas J. Meehan

#pragma once

#include "GameFramework/Actor.h"
#include "SecProjectile.generated.h"

UCLASS()
class FPSPROJECT_API ASecProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASecProjectile();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

    /** Sphere collision component */
    UPROPERTY(VisibleDefaultsOnly, Category=Projectile)
    USphereComponent* CollisionComp;
    
    //Constructor
    ASecProjectile(const FObjectInitializer& ObjectInitializer);
	
    /** Projectile movement component */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Movement)
    UProjectileMovementComponent* ProjectileMovement;
    
    /** inits velocity of the projectile in the shoot direction */
    void InitVelocity(const FVector& ShootDirection);
    
    /** called when projectile hits something */
    UFUNCTION()
    void OnHit(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    

};
