// Fill out your copyright notice in the Description page of Project Settings.

#include "LastStory.h"
#include "Client/DatabaseController.h"

UDatabaseController::UDatabaseController(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
//	mDatabaseFullPath = FString(TEXT("E:\\Epic Games\\Workspace\\DBTest\\111.db"));
//	ConnectDatabase();
}


bool UDatabaseController::ConnectDatabase(FString* DatabaseFullPath) {
	if (mDatabase != nullptr) {
		return false;
	}

	FString fullDatabasePath;

	if (DatabaseFullPath == nullptr) {
		fullDatabasePath = mDatabaseFullPath;
	}
	else {
		fullDatabasePath = mDatabaseFullPath = *DatabaseFullPath;
	}

	auto convertDatabasePath = TCHAR_TO_ANSI(*fullDatabasePath);
	int nRes = sqlite3_open_v2(convertDatabasePath, &mDatabase, SQLITE_OPEN_READONLY, nullptr);
	if (nRes != SQLITE_OK) {
		mDatabase = nullptr;
		UE_LOG(LogTemp, Error, TEXT("Open DB faild"));
	}

	return nRes == SQLITE_OK;
}

bool UDatabaseController::DisconncetDatabase()
{
	ClearDBData();
	if (mDatabase == nullptr) {
		return true;
	}

	bool ret = SQLITE_OK == sqlite3_close(mDatabase);
	if (ret) {
		mDatabase = nullptr;
	}

	return ret;
}

void UDatabaseController::OpenTable(FString TableName) {
	char* cErrMsg;

	if (mDatabase == nullptr) {
		return;
	}

	ClearDBData();

	FString SqlQuery = FString::Printf(TEXT("select * from %s;"), *TableName);
	auto AnsiSqlQuery = TCHAR_TO_ANSI(*SqlQuery);
	int res = sqlite3_exec(mDatabase, AnsiSqlQuery, UserResult, this, &cErrMsg);

	if (res != SQLITE_OK) {
		FString ErrMsg = FString(cErrMsg);
		UE_LOG(LogTemp, Error, TEXT("OpenTable Res is %d, ErrMsg is %s"), res, *ErrMsg);
	}
}


void UDatabaseController::RecvData(int colCount, char **colValues, char **colNames) {
	
	if (mColNames.Num() <= 0) {
		for (int colIndex = 0; colIndex < colCount; colIndex++) {
			auto TCharStr = UTF8_TO_TCHAR(colNames[colIndex]);
			mColNames.Add(TCharStr, colIndex);
		}
	}
	
	TArray<FString> tempColValues;
	for (int colIndex = 0; colIndex < colCount; colIndex++) {
		auto TCharStr = UTF8_TO_TCHAR(colValues[colIndex]);
		tempColValues.Add(TCharStr);
	}
	mColValues.Add(tempColValues);
}

void UDatabaseController::ClearDBData() {
	mCurRowIndex = 0;
	mColNames.Empty();
	mColValues.Empty();
}

bool UDatabaseController::ReadNext() {
	bool isReadNext = mCurRowIndex < mColValues.Num();
	if (isReadNext) {
		mCurRowIndex++;
	}
	else {
		ClearDBData();
	}

	return isReadNext;
}

bool UDatabaseController::GetColValueByDefault(FString colName, FString& outColValue) {
	if (mCurRowIndex > mColValues.Num() || mCurRowIndex <= 0) {
		UE_LOG(LogTemp, Error, TEXT("Read Row Index Error, Index is ."));
		return false;
	}
	if (!mColNames.Contains(colName)) {
		UE_LOG(LogTemp, Error, TEXT("Read Column Value Failed, Not Have Column Name %s ."), *colName);
		return false;
	}

	int tempColIndex = mColNames[colName];

	TArray<FString> tempColValues = mColValues[mCurRowIndex - 1];
	outColValue = tempColIndex < tempColValues.Num() ? tempColValues[tempColIndex] : TEXT("");

	return true;
}

bool UDatabaseController::GetColValueConvertInt(FString colName, int& outColValue) {
	FString tempColValue;
	bool ret = GetColValueByDefault(colName, tempColValue);
	outColValue = FCString::Atoi(*tempColValue);

	return ret;
}
bool UDatabaseController::GetColValueConvertFloat(FString colName, float& outColValue) {
	FString tempColValue;
	bool ret = GetColValueByDefault(colName, tempColValue);
	outColValue = FCString::Atof(*tempColValue);

	return ret;
}
bool UDatabaseController::GetColValueConvertBool(FString colName, bool& outColValue) {

	FString tempColValue;
	bool ret = GetColValueByDefault(colName, tempColValue);
	outColValue = tempColValue.ToBool();

	return ret;
}
bool UDatabaseController::GetColValueConvertStr(FString colName, FString& outColValue) {
	bool ret = GetColValueByDefault(colName, outColValue);
	return ret;
}



bool UDatabaseController::GetFullDatabasePath(FString& FullDatabasePath) {
	return true;
}

int UDatabaseController::UserResult(void *passData, int colCount, char **colValue, char **colName)
{
	if (passData == nullptr) {
		return SQLITE_ERROR;
	}
	UDatabaseController* dbManage = (UDatabaseController*)passData;
	dbManage->RecvData(colCount, colValue, colName);

	return SQLITE_OK;
}
