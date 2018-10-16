// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "CPathNode.generated.h"

UCLASS()
class MYPROJECT_API ACPathNode : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACPathNode();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
    int MAX = 8;
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Default")
    bool isCur;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Default")
    bool isStart;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Default")
    bool isGoal;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Default")
    ACPathNode *parent;

    //UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="something")
    ACPathNode * nearNodes[];

    
    
    
    

	
	
};
