// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../../ProjectRPG.h"
#include "Animation/AnimInstance.h"
#include "PR_MyAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTRPG_API UPR_MyAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public :
	// 뒤로 가기 키 입력 (S)
	UFUNCTION(BlueprintImplementableEvent)
	void OnBackStepKey(bool bPressed);
	
};
