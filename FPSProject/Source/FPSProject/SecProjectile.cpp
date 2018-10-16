// Thomas J. Meehan

#include "FPSProject.h"
#include "SecProjectile.h"


// Sets default values
ASecProjectile::ASecProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASecProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASecProjectile::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}


//constructor
ASecProjectile::ASecProjectile(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{
    // Use a sphere as a simple collision representation
    CollisionComp = ObjectInitializer.CreateDefaultSubobject<USphereComponent>(this, TEXT("SphereComp"));
    CollisionComp->InitSphereRadius(15.0f);
    RootComponent = CollisionComp;
    CollisionComp->BodyInstance.SetCollisionProfileName("SecProjectile");
    CollisionComp->OnComponentHit.AddDynamic(this, &ASecProjectile::OnHit);

    
    // Use a ProjectileMovementComponent to govern this projectile's movement
    ProjectileMovement = ObjectInitializer.CreateDefaultSubobject<UProjectileMovementComponent>(this, TEXT("ProjectileComp"));
    ProjectileMovement->UpdatedComponent = CollisionComp;
    ProjectileMovement->InitialSpeed = 2000.f;
    ProjectileMovement->MaxSpeed = 2000.f;
    ProjectileMovement->bRotationFollowsVelocity = true;
    ProjectileMovement->bShouldBounce = true;
    ProjectileMovement->Bounciness  = 0.9f;
}

/** inits velocity of the projectile in the shoot direction */
void ASecProjectile::InitVelocity(const FVector& ShootDirection)
{
    if (ProjectileMovement)
    {
        // set the projectile's velocity to the desired direction
        ProjectileMovement->Velocity = ShootDirection * ProjectileMovement->InitialSpeed;
    }
}

//deals with collision
void ASecProjectile::OnHit(AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
    if ( OtherActor && (OtherActor != this) && OtherComp )
    {
        OtherComp->AddImpulseAtLocation(ProjectileMovement->Velocity * 100.0f, Hit.ImpactPoint);
    }
}











