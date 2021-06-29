// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../ProjectRPG.h"
#include "PR_GameMode_Base.h"
#include "PR_GameMode_BattleStage.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTRPG_API APR_GameMode_BattleStage : public APR_GameMode_Base
{
	GENERATED_BODY()
	
public :
	APR_GameMode_BattleStage();
	virtual void BeginPlay() override;
};
