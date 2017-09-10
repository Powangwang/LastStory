// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/ActorComponent.h"
#include "ClientBaseController.generated.h"


class UDatabaseController;
class UClientBase;

UCLASS( ClassGroup=(Custom), BlueprintType, Blueprintable)
class LASTSTORY_API UClientBaseController : public UObject
{
	GENERATED_BODY()

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FClientInitData, int, ItemIdx);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FClientInitError);
public:	
	// Sets default values for this component's properties
	UClientBaseController();

public:
	// Called when the game starts
	virtual bool Init();
	virtual bool Shutdown() ;

private:
	bool InitDatabaseController();
	bool DestroyDatabaseController();

	bool InitAllClientItems();
	bool DestroyAllClientItems();

	bool InitAllClientData();
	bool CleanAllClientData();

//	bool InitAllClientInfo();
//	bool CleanAllClientInfo();

public:
	UPROPERTY(BlueprintReadOnly)
	UDatabaseController* DBController;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString DatabasePath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, TSubclassOf<UClientBase>> ClientClassItems;

	UPROPERTY(BlueprintAssignable)
	FClientInitData OnCompleteClientInitData;
	
	UPROPERTY(BlueprintAssignable)
	FClientInitError OnClientInitError;

protected:
	UPROPERTY(BlueprintReadOnly)
	TMap<FString, UClientBase*> ClientItems;

};
