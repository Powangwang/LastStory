// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/GameInstance.h"
#include "LastStoryGameInstanceBase.generated.h"

class UClientBaseController;

/**
 * 
 */
UCLASS()
class LASTSTORY_API ULastStoryGameInstanceBase : public UGameInstance
{
	GENERATED_UCLASS_BODY()

public:
	virtual void Init() override;
	virtual void Shutdown() override;

private:
	void SetupClientBaseController();

public :
	UPROPERTY(BlueprintReadOnly)
	UClientBaseController* ClientBaseControllerInstance;
};
