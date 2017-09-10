// Fill out your copyright notice in the Description page of Project Settings.

#include "LastStory.h"
#include "ClientBase.h"
#include "Client/DatabaseController.h"

bool UClientBase::InitData(UDatabaseController* DatabaseController)
{
	return ReceiveInitData(DatabaseController);
}
bool UClientBase::CleanData()
{
	return ReceiveCleanData();
}

bool UClientBase::InitInfo()
{
	return false;
}

bool UClientBase::CleanInfo()
{
	return false;
}


bool UClientBase::ReceiveInitData_Implementation(UDatabaseController* DatabaseController)
{
	return true;
}

bool UClientBase::ReceiveCleanData_Implementation()
{
	return true;
}
