// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../../ProjectRPG.h"
#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"

/**
* CharacterMovementComponent, CapsuleComponent,SkeletalMeshComponent 의 추가를 통해 
* Pawn 클래스는 고도로 특화된 Character (캐릭터) 클래스로 확장됩니다. 
* 캐릭터는 월드에서 걷기, 달리기, 점프, 비행, 수영 등이 가능한 직립 플레이어를 표현하기 위해 디자인된 것입니다. 
* 이 클래스에는 기본적인 네트워킹이나 인풋 모델 구현도 추가되어 있습니다.
* https://docs.unrealengine.com/4.26/ko/InteractiveExperiences/Framework/Pawn/Character/
**/

UCLASS()
class PROJECTRPG_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public :
	UPROPERTY(VisibleAnywhere, Category = Camera)
	USpringArmComponent* SpringArm;

	UPROPERTY(VisibleAnywhere, Category = Camera)
	UCameraComponent* Camera;

private :
	void UpDown(float NewAxisValue);
	void LeftRight(float NewAxisValue);

};
