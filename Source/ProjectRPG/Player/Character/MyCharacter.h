// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../../ProjectRPG.h"
#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"

/**
* CharacterMovementComponent, CapsuleComponent,SkeletalMeshComponent �� �߰��� ���� 
* Pawn Ŭ������ ���� Ưȭ�� Character (ĳ����) Ŭ������ Ȯ��˴ϴ�. 
* ĳ���ʹ� ���忡�� �ȱ�, �޸���, ����, ����, ���� ���� ������ ���� �÷��̾ ǥ���ϱ� ���� �����ε� ���Դϴ�. 
* �� Ŭ�������� �⺻���� ��Ʈ��ŷ�̳� ��ǲ �� ������ �߰��Ǿ� �ֽ��ϴ�.
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
