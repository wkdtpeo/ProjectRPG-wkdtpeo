// Fill out your copyright notice in the Description page of Project Settings.


#include "PR_MyPawn.h"

// Sets default values
APR_MyPawn::APR_MyPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APR_MyPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APR_MyPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APR_MyPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

