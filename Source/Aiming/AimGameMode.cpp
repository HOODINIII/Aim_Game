// Fill out your copyright notice in the Description page of Project Settings.


#include "AimGameMode.h"
#include "kismet/GamePlayStatics.h"


AAimGameMode::AAimGameMode()
{
}

void AAimGameMode::RestartGameplay(bool Won)
{
	if (Won)
	{
		ResetLevel();
	}
	else
	{
		&AAimGameMode::ResetLevel;
	}
}

void AAimGameMode::ResetLevel()
{
	UGameplayStatics::OpenLevel(GetWorld(), "First Person Map");
}
