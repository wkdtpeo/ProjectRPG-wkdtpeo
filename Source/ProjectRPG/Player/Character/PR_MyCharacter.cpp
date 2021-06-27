// Fill out your copyright notice in the Description page of Project Settings.


#include "PR_MyCharacter.h"

// Sets default values
APR_MyCharacter::APR_MyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Camera
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SPRINGARM"));
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("CAMERA"));

	SpringArm->TargetArmLength = 400.0f;
	SpringArm->SetRelativeRotation(FRotator(-15.0f, 0.0f, 0.0f));
}

// Called when the game starts or when spawned
void APR_MyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APR_MyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APR_MyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void APR_MyCharacter::UpDown(float NewAxisValue)
{

}

void APR_MyCharacter::LeftRight(float NewAxisValue)
{

}