// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../../ProjectRPG.h"
#include "GameFramework/PlayerController.h"
#include "PR_PlayerController_Base.generated.h"

/**
 * PlayerController는 플레이어로부터 입력 데이터를 가져 와서 이동, 아이템 사용, 무기 발사 등과 같은 동작으로 변환하는 기능을 구현합니다.
 * PlayerController를 설정할 때 고려해야 할 한 가지는 PlayerController에 있어야하는 기능과 Pawn에 있어야하는 기능 입니다. 
 * 특히 덜 복잡한 경우 Pawn의 모든 입력을 처리 할 수 ​​있습니다.
 * 그러나 하나의 게임 클라이언트에 여러 플레이어가 있거나 런타임에 동적으로 캐릭터를 변경하는 기능과 같이 더 복잡한 요구 사항이있는 경우
 * PlayerController에서 입력을 처리하는 것이 더 나을 수 있습니다. 
 * 이 경우 PlayerController는 무엇을할지 결정한 다음 Pawn에 명령을 내립니다 (예 : "웅크 리기 시작", "점프").
 * 또한 어떤 경우에는 입력 처리 또는 기타 기능을 PlayerController에 넣어야합니다.
 * PlayerController는 게임 내내 지속되지만 Pawn은 일시적 일 수 있습니다. 
 * 예를 들어, 데스 매치 스타일의 게임 플레이에서, 당신은 죽고 리스폰 될 수 있습니다. 
 * 그래서 당신은 새로운 폰을 얻지 만 당신의 PlayerController는 동일합니다. 
 * 이 예에서 Pawn에 점수를 유지하면 점수가 재설정되지만 PlayerController에 점수를 유지하면 그렇지 않습니다.
 */
UCLASS()
class PROJECTRPG_API APR_PlayerController_Base : public APlayerController
{
	GENERATED_BODY()
	
public :
	APR_PlayerController_Base();

	virtual void PostInitializeComponents() override;
	virtual void OnPossess(APawn* aPawn) override;
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;

public :
	void UpDown(float NewAxisValue);
	void LeftRight(float NewAxisValue);
	void RotateCamera(float NewAxisValue);
	void ChangePitch(float NewAxisValue);

protected :
	FVector	vDirectionToMove = FVector::ZeroVector;		// 캐릭터 이동방향 Vector
};
