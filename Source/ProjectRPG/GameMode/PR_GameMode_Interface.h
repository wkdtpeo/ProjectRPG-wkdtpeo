// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../ProjectRPG.h"
#include "../Tables/PR_TableStructs.h"
#include "GameFramework/GameModeBase.h"
#include <Engine/DataTable.h>
#include "PR_GameMode_Interface.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTRPG_API APR_GameMode_Interface : public AGameModeBase
{
	GENERATED_BODY()
	
public :
	APR_GameMode_Interface();
	virtual void BeginPlay() override;

public :
	virtual bool TableCheck();

protected :
	UPROPERTY(EditAnywhere, Category = "Table")
	class UDataTable* CharacterCameraTable = nullptr;
	
};
