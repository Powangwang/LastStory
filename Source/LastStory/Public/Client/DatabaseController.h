// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "sqlite3.h"
#include "UObject/NoExportTypes.h"
#include "DatabaseController.generated.h"

/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class LASTSTORY_API UDatabaseController : public UObject
{
	GENERATED_UCLASS_BODY()
	

public:

	UFUNCTION(BlueprintCallable)
	void OpenTable(FString TableName);

	UFUNCTION(BlueprintCallable)
	bool ReadNext();

	UFUNCTION(BlueprintCallable, Category = "GetData")
	bool GetColValueByDefault(FString colName, FString& outColValue);

	UFUNCTION(BlueprintCallable, Category = "GetData")
	bool GetColValueConvertInt(FString colName, int& outColValue);

	UFUNCTION(BlueprintCallable, Category = "GetData")
	bool GetColValueConvertFloat(FString colName, float& outColValue);

	UFUNCTION(BlueprintCallable, Category = "GetData")
	bool GetColValueConvertBool(FString colName, bool& outColValue);

	UFUNCTION(BlueprintCallable, Category = "GetData")
	bool GetColValueConvertStr(FString colName, FString& outColValue);


public:
	bool ConnectDatabase(FString* DatabaseFullPath = nullptr);
	bool DisconncetDatabase();


protected:

	void RecvData(int ColCount, char **ColValues, char **ColNames);
	void ClearDBData();

public:
	// Called every frame
	//	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	bool GetFullDatabasePath(FString& FullDatabasePath);


private:
	sqlite3 * mDatabase;

	UPROPERTY()
	TMap<FString, int> mColNames;
//	UPROPERTY()
	TArray<TArray<FString>> mColValues;
	int mCurRowIndex;

	UPROPERTY()
	FString mDatabaseFullPath;

private:
	static int UserResult(void *PassData, int ColCount, char **ColValue, char **ColName);

};
