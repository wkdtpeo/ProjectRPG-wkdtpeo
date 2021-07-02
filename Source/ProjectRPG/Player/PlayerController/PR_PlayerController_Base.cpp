// Fill out your copyright notice in the Description page of Project Settings.


#include "PR_PlayerController_Base.h"

APR_PlayerController_Base::APR_PlayerController_Base()
{

}

void APR_PlayerController_Base::PostInitializeComponents()
{
	Super::PostInitializeComponents();
}

void APR_PlayerController_Base::OnPossess(APawn* aPawn)
{
	Super::OnPossess(aPawn);
}

void APR_PlayerController_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void APR_PlayerController_Base::BeginPlay()
{
	Super::BeginPlay();
}

void APR_PlayerController_Base::SetupInputComponent()
{
	Super::SetupInputComponent();

	ABCHECK(InputComponent);
	InputComponent->BindAxis(TEXT("UpDown"), this, &APR_PlayerController_Base::UpDown);
	InputComponent->BindAxis(TEXT("LeftRight"), this, &APR_PlayerController_Base::LeftRight);
	InputComponent->BindAxis(TEXT("RotateCamera"), this, &APR_PlayerController_Base::RotateCamera);
	InputComponent->BindAxis(TEXT("ChangePitch"), this, &APR_PlayerController_Base::ChangePitch);
	
}

void APR_PlayerController_Base::UpDown(float NewAxisValue)
{
	//vDirectionToMove.Y = -NewAxisValue;
	
	APawn* pPawn = GetPawn();
	ABCHECK(pPawn);

	pPawn->AddMovementInput(pPawn->GetActorForwardVector(), NewAxisValue);
}

void APR_PlayerController_Base::LeftRight(float NewAxisValue)
{
	//vDirectionToMove.X = NewAxisValue;

	APawn* pPawn = GetPawn();
	ABCHECK(pPawn);
	
	pPawn->AddMovementInput(pPawn->GetActorRightVector(), NewAxisValue);
}

void APR_PlayerController_Base::RotateCamera(float NewAxisValue)
{
	APawn* pPawn = GetPawn();
	ABCHECK(pPawn);

	pPawn->AddControllerYawInput(NewAxisValue);
}

void APR_PlayerController_Base::ChangePitch(float NewAxisValue)
{
	//APawn* pPawn = GetPawn();
	//ABCHECK(pPawn);

	//pPawn->AddControllerPitchInput(NewAxisValue);
}