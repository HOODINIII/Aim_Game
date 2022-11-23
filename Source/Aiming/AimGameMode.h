// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "AimGameMode.generated.h"

/**
 * 
 */
UCLASS()
class AIMING_API AAimGameMode : public AGameMode
{
	GENERATED_BODY()
	
public:
	AAimGameMode();

	void RestartGameplay(bool Won);

private:

	void ResetLevel();
};
