// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../../ProjectRPG.h"
#include "GameFramework/Pawn.h"
#include "MyPawn.generated.h"

/**
* Pawn Ŭ������ �÷��̾ AI �� ������ �� �ִ� ��� ������ ���̽� Ŭ�����Դϴ�. 
* Pawn �� ���� �� �÷��̾ AI ��ü�� ���� ������ ǥ���Դϴ�. 
* �̴� �÷��̾ AI ��ü�� �ð����� ��� �Ӹ� �ƴ϶�, �ݸ����̳� ��Ÿ ������ ������ ���� ���鿡�� 
* ������� ��ȣ�ۿ� ��ĵ� Pawn �� �����Ѵٴ� ���Դϴ�. 
* Ư�� ���� ���ӿ����� ���� ���� ���� ���̴� �÷��̾� �޽ó� �ƹ�Ÿ�� ���⿡ �갥�� ���� �ֽ��ϴ�. 
* �׿ʹ� �����ϰ� Pawn �� ������ ���� �� �÷��̾ ��ü�� ������ ��ġ, ���� ���� ��Ÿ���ϴ�. 
* Character (ĳ����)�� �ɾ�ٴ� �� �ִ� �ɷ��� ���� Ư�� ���� Pawn �� ���մϴ�.

* �⺻������ Controller �� Pawn ���� 1:1 ���� ���谡 �ֽ��ϴ�. 
* �� �� ��Ʈ�ѷ��� ��� ���� �� �ϳ��� ������ �����մϴ�. 
* ���������� �����÷��� ���� ������ ���� �ڵ������� ��Ʈ�ѷ��� ����(possess)������ �ʽ��ϴ�.

* �������Ʈ����, �� �Ļ� Ŭ������ ������ �߰��ϴ� ���� ���� ����� SetActorLocation �Դϴ�. 
* �̸� ���� �ش� ��ġ�� �����̵���ų��, �ƴϸ� sweep ��ų���� ������ �� �ֽ��ϴ�. 
* sweep �̶� ���� �ش� �������� �̵���Ű�ٰ� ���𰡿� �ɸ��� ���߰� �ϴ� ���� ���մϴ�.
* https://docs.unrealengine.com/4.26/ko/InteractiveExperiences/Framework/Pawn/
**/

UCLASS()
class PROJECTRPG_API AMyPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMyPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
