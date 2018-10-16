// Fill out your copyright notice in the Description page of Project Settings.

#include "MyProject.h"
#include "CPathNode.h"
#include <string>
#include "EngineUtils.h"


// Sets default values
ACPathNode::ACPathNode()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    

//    // Iterate over all Actors in the world.
//    for (TActorIterator<AActor> ActorItr(GetWorld()); ActorItr; ++ActorItr){
//        AActor *Mesh = *ActorItr;
//        // If Actor is a “PathNode”, display location on screen.
//        if (ActorItr->GetName().Contains("point"))
//            if (GEngine)
//                GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow,
//                                                 TEXT(""+ActorItr->GetName()+" location " + ActorItr->GetActorLocation().ToString()));
//    }


}

// Called when the game starts or when spawned
void ACPathNode::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACPathNode::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

