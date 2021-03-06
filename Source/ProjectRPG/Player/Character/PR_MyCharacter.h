// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../../ProjectRPG.h"
#include "GameFramework/Character.h"
#include "../AnimInstance/PR_MyAnimInstance.h"
#include "PR_MyCharacter.generated.h"

/**
* CharacterMovementComponent, CapsuleComponent,SkeletalMeshComponent 의 추가를 통해 
* Pawn 클래스는 고도로 특화된 Character (캐릭터) 클래스로 확장됩니다. 
* 캐릭터는 월드에서 걷기, 달리기, 점프, 비행, 수영 등이 가능한 직립 플레이어를 표현하기 위해 디자인된 것입니다. 
* 이 클래스에는 기본적인 네트워킹이나 인풋 모델 구현도 추가되어 있습니다.
* https://docs.unrealengine.com/4.26/ko/InteractiveExperiences/Framework/Pawn/Character/
**/

UCLASS()
class PROJECTRPG_API APR_MyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APR_MyCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void PostInitializeComponents() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public :
	UPROPERTY(VisibleAnywhere, Category = "Camera")
	USpringArmComponent* m_pSpringArm;

	UPROPERTY(VisibleAnywhere, Category = "Camera")
	UCameraComponent* m_pCamera;

	UPROPERTY(VisibleAnywhere, Category = "AnimInstance")
	class UPR_MyAnimInstance* m_pMyAnimInstance;

private :
	bool m_bBackStep = false;

public :
	//--------------------------------------------
	// Key Inputs
	//--------------------------------------------
	void OnUpDown(float NewAxisValue);
	void OnLeftRight(float NewAxisValue);
};
