//Thomas J. Meehan

#pragma once

#include "GameFramework/GameMode.h"
#include "FPSGameMode.generated.h"

/**
 * 
 */
UCLASS()
class FPSPROJECT_API AFPSGameMode : public AGameMode
{
    GENERATED_BODY()
    
    AFPSGameMode(const FObjectInitializer& ObjectInitializer);  // Our added constructor
    
    virtual void StartPlay() override;
};