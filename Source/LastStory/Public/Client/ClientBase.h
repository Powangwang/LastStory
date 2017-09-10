// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "UObject/NoExportTypes.h"
#include "ClientBase.generated.h"


class UDatabaseController;
/**
 * 
 */
UCLASS(abstract, BlueprintType, Blueprintable)
class LASTSTORY_API UClientBase : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent)
	bool ReceiveInitData(UDatabaseController* DatabaseController);

	UFUNCTION(BlueprintNativeEvent)
	bool ReceiveCleanData();
	
public:

	virtual bool InitData(UDatabaseController* DatabaseController);

	virtual bool CleanData();

	virtual bool InitInfo();

	virtual bool CleanInfo();
};
