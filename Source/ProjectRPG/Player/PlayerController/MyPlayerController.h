// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../../ProjectRPG.h"
#include "GameFramework/PlayerController.h"
#include "MyPlayerController.generated.h"

/**
 * 플레이어 컨트롤러는 인간 플레이어가 폰을 제어하는 ​​데 사용됩니다.
 * ControlRotation ( GetControlRotation ()을 통해 액세스 )은 제어 된 Pawn의 조준 방향을 결정합니다.
 * 네트워크로 연결된 게임에서 PlayerController는 플레이어가 제어하는 ​​모든 폰에 대한 서버와 제어하는 ​​클라이언트의 컴퓨터에 존재합니다. 
 * 네트워크의 다른 곳에서 원격 플레이어가 제어하는 ​​폰용 클라이언트 머신에는 존재하지 않습니다.
 */
UCLASS()
class PROJECTRPG_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()
	
};
