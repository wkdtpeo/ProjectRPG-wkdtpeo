// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../../ProjectRPG.h"
#include "GameFramework/Pawn.h"
#include "MyPawn.generated.h"

/**
* Pawn 클래스는 플레이어나 AI 가 제어할 수 있는 모든 액터의 베이스 클래스입니다. 
* Pawn 은 월드 내 플레이어나 AI 개체에 대한 물리적 표현입니다. 
* 이는 플레이어나 AI 개체의 시각적인 모습 뿐만 아니라, 콜리전이나 기타 물리적 반응과 같은 측면에서 
* 월드와의 상호작용 방식도 Pawn 이 규정한다는 뜻입니다. 
* 특정 유형 게임에서는 게임 내에 눈에 보이는 플레이어 메시나 아바타가 없기에 헛갈릴 수가 있습니다. 
* 그와는 무관하게 Pawn 은 여전히 게임 내 플레이어나 개체의 물리적 위치, 방향 등을 나타냅니다. 
* Character (캐릭터)는 걸어다닐 수 있는 능력을 지닌 특수 유형 Pawn 을 말합니다.

* 기본적으로 Controller 와 Pawn 에는 1:1 대응 관계가 있습니다. 
* 즉 각 컨트롤러는 어느 때고 단 하나의 폰만을 제어합니다. 
* 마찬가지로 게임플레이 도중 스폰된 폰이 자동적으로 컨트롤러에 빙의(possess)되지는 않습니다.

* 블루프린트에서, 폰 파생 클래스에 동작을 추가하는 가장 좋은 방법은 SetActorLocation 입니다. 
* 이를 통해 해당 위치로 순간이동시킬지, 아니면 sweep 시킬지를 결정할 수 있습니다. 
* sweep 이란 폰을 해당 방향으로 이동시키다가 무언가에 걸리면 멈추게 하는 것을 말합니다.
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
