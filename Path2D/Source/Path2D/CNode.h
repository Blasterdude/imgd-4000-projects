// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "CNode.generated.h"

UCLASS()
class PATH2D_API ACNode : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACNode();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Default")
    bool isCur;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Default")
    bool isStart;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Default")
    bool isGoal;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Default")
    ACNode *parent;
    
    //UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="something")
    ACNode * nearNodes[];
    
    

	
	
};


