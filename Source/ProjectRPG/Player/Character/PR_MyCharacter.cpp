// Fill out your copyright notice in the Description page of Project Settings.


#include "PR_MyCharacter.h"

// Sets default values
APR_MyCharacter::APR_MyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Camera
	m_pSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SPRINGARM"));
	m_pCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("CAMERA"));

	m_pSpringArm->SetupAttachment(GetCapsuleComponent());
	m_pCamera->SetupAttachment(m_pSpringArm);

	m_pSpringArm->TargetArmLength = 400.0f;
	m_pSpringArm->SetRelativeRotation(FRotator(-15.0f, 0.0f, 0.0f));
}

// Called when the game starts or when spawned
void APR_MyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void APR_MyCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	// Anim
	m_pMyAnimInstance = Cast<UPR_MyAnimInstance>(GetMesh()->GetAnimInstance());
	ABCHECK(m_pMyAnimInstance);
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

void APR_MyCharacter::OnUpDown(float NewAxisValue)
{
	if (m_pMyAnimInstance)
	{
		bool bBackStep = NewAxisValue < 0.0f;
		m_pMyAnimInstance->OnBackStepKey(bBackStep);
	}

	AddMovementInput(GetActorForwardVector(), NewAxisValue);
}

void APR_MyCharacter::OnLeftRight(float NewAxisValue)
{
	AddMovementInput(GetActorRightVector(), NewAxisValue);
}