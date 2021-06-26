// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <Engine/DataTable.h>
#include "PR_TableStructs.generated.h"

USTRUCT(BlueprintType)
struct FPRCharacterCameraData : public FTableRowBase
{
	GENERATED_BODY()

public:
	FPRCharacterCameraData() : Pitch(-45.0f), Yaw(0.0f), Roll(0.0f), ArmLength(0.0f), Fov(0.0f)
	{ }

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Data")
	float Pitch;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Data")
	float Yaw;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Data")
	float Roll;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Data")
	float ArmLength;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Data")
	float Fov;
};
