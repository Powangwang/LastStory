// Fill out your copyright notice in the Description page of Project Settings.

#include "LastStory.h"
#include "LastStoryGameInstanceBase.h"
#include "Client/ClientBaseController.h"

ULastStoryGameInstanceBase::ULastStoryGameInstanceBase(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

void ULastStoryGameInstanceBase::Init() 
{
	Super::Init();
//	FString aa = FPaths::ConvertRelativePathToFull(TEXT("../aaa/111.db"));
//	FString bb = FPlatformProcess::BaseDir();
//	FString cc = FPaths::GameDir();
//	static ConstructorHelpers::FClassFinder<UClientBaseController> ClientBaseControllerObj(TEXT("/Game/Client/BP_ClientBaseController"));
	SetupClientBaseController();
}

void ULastStoryGameInstanceBase::Shutdown()
{
	if (ClientBaseControllerInstance != nullptr && ClientBaseControllerInstance->IsValidLowLevel())
	{
		ClientBaseControllerInstance->Shutdown();
		ClientBaseControllerInstance->ConditionalBeginDestroy();
		ClientBaseControllerInstance = nullptr;
	}
	Super::Shutdown();
}

void ULastStoryGameInstanceBase::SetupClientBaseController()
{
	if (ClientBaseControllerInstance != nullptr) {
		return;
	}

	UClass* DatabaseInstanceClass = LoadObject<UClass>(NULL, TEXT("/Game/Client/ClientBaseControllerInstance.ClientBaseControllerInstance_C"));

	// If the GameInstance class from the settings cannot be found, fall back to the base class
	if (DatabaseInstanceClass == nullptr)
	{
		return;
	}

	ClientBaseControllerInstance = NewObject<UClientBaseController>(GetTransientPackage(), DatabaseInstanceClass);
	if (ClientBaseControllerInstance != nullptr && ClientBaseControllerInstance->IsValidLowLevel())
	{
		ClientBaseControllerInstance->Init();
	}
}
