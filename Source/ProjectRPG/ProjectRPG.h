// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once
#include <Engine.h>
#include <Kismet/KismetMathLibrary.h>

DECLARE_LOG_CATEGORY_EXTERN(ProjectRPG, Log, All);
#define ABLOG_CALLINFO					(FString(__FUNCTION__) + TEXT("(") + FString::FromInt(__LINE__) + TEXT(")"))
#define ABLOG_S(Verbosity)				UE_LOG(ProjectRPG, Verbosity, TEXT("%s"), *ABLOG_CALLINFO)
#define ABLOG(Verbosity, Format, ...)	UE_LOG(ProjectRPG, Verbosity, TEXT("%s %s"), *ABLOG_CALLINFO, *FString::Printf(Format, ##__VA_ARGS__))
#define ABCHECK(Expr, ...)				{ if(!(Expr)) { ABLOG(Error, TEXT("ASSERTION : %s"), TEXT("'"#Expr"'")); return __VA_ARGS__; }}

//==============================================================================================================================
// Widget Macros
//==============================================================================================================================
// 위젯 선언
#define PR_DECLAR_WIDGET(WIDGET_TYPE, WIDGET_NAME, ...)			UPROPERTY(##__VA_ARGS__) class WIDGET_TYPE* m_pk##WIDGET_NAME = nullptr
#define PR_DECLAR_WIDGET_TArray(WIDGET_TYPE, WIDGET_NAME, ...)	UPROPERTY(##__VA_ARGS__) TArray<class WIDGET_TYPE*> m_pk##WIDGET_NAME

// 위젯 연결
#define PR_CONNECT_WIDGET(WIDGET_TYPE, WIDGET_NAME) \
	m_pk##WIDGET_NAME = Cast<WIDGET_TYPE>(GetWidgetFromName(TEXT(#WIDGET_NAME))); \
	if (nullptr == m_pk##WIDGET_NAME) { ABLOG(Error, TEXT("\"<"#WIDGET_TYPE"> "#WIDGET_NAME "\" Unable to connect to the widget.")); }	\

// TArray 타입으로 선언된 변수에 위젯 연결
#define PR_CONNECT_WIDGET_TArray(WIDGET_TYPE, WIDGET_NAME, MAX_SIZE) \
	m_pk##WIDGET_NAME.Init(nullptr, MAX_SIZE);	\
	for (int32 nIndex = 0; nIndex < MAX_SIZE; ++nIndex) { \
		FString GetWidgetName = FString::Printf(TEXT(#WIDGET_NAME"_%d"), nIndex); \
		m_pk##WIDGET_NAME[nIndex] = Cast<WIDGET_TYPE>(GetWidgetFromName(*GetWidgetName)); \
		if (nullptr == m_pk##WIDGET_NAME[nIndex]) { ABLOG(Error, TEXT("\"<"#WIDGET_TYPE"> %s Unable to connect to the widget."), *GetWidgetName);  continue; }	\
	} \
//============================================================================================================================== End Widget Macros
