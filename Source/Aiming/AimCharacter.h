// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AimCharacter.generated.h"

UCLASS()
class AIMING_API AAimCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAimCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
		class USkeletalMeshComponent* HandsMesh;

	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
		class USkeletalMeshComponent* GunsMesh;

	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
		class USceneComponent* MuzzleLocation;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		class UCameraComponent* FirstPersonCamera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float TurnRate;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float LookUpRate;

	UPROPERTY(EditAnywhere, BluePrintReadWrite, Category = Gameplay)
		FVector GunOffset;

protected:

	void OnFire();
	void MoveForward(float Value);
	void MoveRight(float Vlaue);
	void TurnAtRate(float Rate);
	void LookAtRate(float Rate);

public:
	UPROPERTY(EditDefaultsOnly, Category = Projectile)
		TSubclassOf<class ABullets> Projectile;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Gameplay)
		class USoundBase* FireSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		class UAnimMontage* FireAnimation;
	
	class UAnimInstance* AnimInstance;
	class UWorld* World;

	FRotator SpawnRoatation;
	FVector SpawnLocation;
};
