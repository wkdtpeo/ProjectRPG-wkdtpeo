// Fill out your copyright notice in the Description page of Project Settings.


#include "PR_GameMode_Interface.h"

APR_GameMode_Interface::APR_GameMode_Interface()
{

}

void APR_GameMode_Interface::BeginPlay()
{
	Super::BeginPlay();

	TableCheck();
}

bool APR_GameMode_Interface::TableCheck()
{
	bool bRet = true;
	if (nullptr == CharacterCameraTable)
	{
		ABLOG(Warning, TEXT("Can't Find Table : CharacterCameraTable"));
		bRet = false;
	}

	return bRet;
}

