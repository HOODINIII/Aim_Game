// Fill out your copyright notice in the Description page of Project Settings.


#include "AimEnemy.h"
#include "Components/BoxComponent.h"
#include "AimCharacter.h"

// Sets default values
AAimEnemy::AAimEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DamageCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Damage Collision"));
	DamageCollision->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AAimEnemy::BeginPlay()
{
	Super::BeginPlay();
	DamageCollision->OnComponentBeginOverlap.AddDynamic(this, &AAimEnemy::OnHit);
}

// Called every frame
void AAimEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAimEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AAimEnemy::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Hit)
{
}

void AAimEnemy::OnSensed(const TArray<AActor*>& UpdatedActors)
{
}

void AAimEnemy::SetNewRotation(FVector TargetPosition, FVector CurrentPosition)
{
}

void AAimEnemy::DealDamage(float DamageAmount)
{
}

