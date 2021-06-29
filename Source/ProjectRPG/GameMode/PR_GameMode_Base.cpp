// Fill out your copyright notice in the Description page of Project Settings.


#include "PR_GameMode_Base.h"

APR_GameMode_Base::APR_GameMode_Base()
{

}

void APR_GameMode_Base::BeginPlay()
{
	Super::BeginPlay();

	TableCheck();
}

bool APR_GameMode_Base::TableCheck()
{
	bool bRet = true;
	if (nullptr == CharacterCameraTable)
	{
		ABLOG(Warning, TEXT("Can't Find Table : CharacterCameraTable"));
		bRet = false;
	}

	return bRet;
}

