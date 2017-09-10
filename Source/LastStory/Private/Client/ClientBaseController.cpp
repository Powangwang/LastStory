// Fill out your copyright notice in the Description page of Project Settings.

#include "LastStory.h"
#include "ClientBaseController.h"
#include "Client/DatabaseController.h"
#include "Client/ClientBase.h"


UClientBaseController::UClientBaseController()
{
//	GConfig->GetString(
//		TEXT("Database.Setting"),
//		TEXT("DatabasePath "),
//		DatabasePath,
//		GEngineIni
//	);
}


// Called when the game starts
bool UClientBaseController::Init()
{

	if (!InitDatabaseController()) {
		UE_LOG(LogTemp, Error, TEXT("InitDatabaseController Error"));
		return false;
	}
	if (!InitAllClientItems()) {
		UE_LOG(LogTemp, Error, TEXT("InitAllClientItems Error"));
		return false;
	}
	if (!InitAllClientData()) {
		OnClientInitError.Broadcast();
		UE_LOG(LogTemp, Error, TEXT("InitAllClientData Error"));
		return false;
	}

	if (!DestroyDatabaseController()) {
		UE_LOG(LogTemp, Error, TEXT("DestroyDatabaseController Error"));
		return false;
	}
	return true;
}

bool UClientBaseController::Shutdown()
{
	if (!CleanAllClientData()) {
		UE_LOG(LogTemp, Error, TEXT("CleanAllClientData Error"));
		return false;
	}
	else if (!DestroyAllClientItems()) {
		UE_LOG(LogTemp, Error, TEXT("DestroyAllClientItems Error"));
		return false;
	}
	return true;
}


bool UClientBaseController::InitDatabaseController() {
	DBController = NewObject<UDatabaseController>();

	FString DbFullPath = FPaths::ConvertRelativePathToFull(FPaths::GameDir() + DatabasePath);
 	if (DBController != nullptr && DBController->IsValidLowLevel()) {
		return DBController->ConnectDatabase(&DbFullPath);
	}
	return false;
}

bool UClientBaseController::DestroyDatabaseController() {
	if (DBController != nullptr) {
		DBController->DisconncetDatabase();
		DBController->ConditionalBeginDestroy();
		DBController = nullptr;
	}
	return true;
}
bool UClientBaseController::InitAllClientItems() {

	UClientBase* tempClientBase = nullptr;
	if (DBController != nullptr && DBController->IsValidLowLevel()) {
		for (auto& It :ClientClassItems) {
			tempClientBase = NewObject<UClientBase>(GetTransientPackage(), It.Value);
			if (tempClientBase == nullptr) {
				return false;
			}
			ClientItems.Add(It.Key, tempClientBase);
		}
	}
	return true;
}

bool UClientBaseController::DestroyAllClientItems() {

	UClientBase* tempClientBase = nullptr;
	for (auto& It : ClientItems) {
		tempClientBase = It.Value;
		if (tempClientBase != nullptr) {
			tempClientBase->ConditionalBeginDestroy();
		}
	}
	ClientItems.Empty();
	return true;
}

bool UClientBaseController::InitAllClientData()
{
	if (DBController == nullptr || !DBController->IsValidLowLevel())
	{
		return false;
	}

	UClientBase* tempClientBase = nullptr;
	int ItemsIdx = 0;
	for (auto& It : ClientItems) {
		tempClientBase = It.Value;
		if (tempClientBase != nullptr) {
			if (!tempClientBase->InitData(DBController)) {
				return false;
			}
			OnCompleteClientInitData.Broadcast(ItemsIdx);
			ItemsIdx++;
		}
	}
	return true;
}

bool UClientBaseController::CleanAllClientData()
{
	bool ret = true;
	UClientBase* tempClientBase = nullptr;
	for (auto& It : ClientItems) {
		tempClientBase = It.Value;
		if (tempClientBase != nullptr) {
			ret = ret && tempClientBase->CleanData();
		}
	}
	return ret;
}


