// Fill out your copyright notice in the Description page of Project Settings.

#include "MyProject.h"
#include "MyProjectGameMode.h"
#include "ShipPawn.h"



AMyProjectGameMode::AMyProjectGameMode()

{
    DefaultPawnClass = ConstructorHelpers::FClassFinder<AShipPawn>(TEXT("/Game/Blueprints/ShipPawnBlueprint")).Class;

}

