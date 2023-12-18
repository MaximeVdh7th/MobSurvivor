// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HttpModule.h"
#include "http.h"
#include "Interfaces/IHttpRequest.h"
#include "Interfaces/IHttpResponse.h"
#include "Json.h"
#include "Json.h"
#include <random>
#include <string>
#include "CoreMinimal.h"
#include "WinHttp/Support/WinHttpConnectionHttp.h"
#include "ProgGameplayProto/ProgGameplayProtoGameState.h"
#include "HTTPWidget.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class PROGGAMEPLAYPROTO_API UHTTPWidget : public UUserWidget
{

	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FString Email;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FString Password;

	UFUNCTION(BlueprintCallable)
	virtual void HandleHttpPostRequests(FString Tok);

	UFUNCTION(BlueprintCallable)
	virtual void HandleScoreRequests(FString Tok, FString EnemiesKilled);

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FString Token;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int Score;

	UFUNCTION(BlueprintCallable)
	FString GenerateToken();
	

private:
	


	/*
public:
	UHTTPWidget();
	*/

private:
	void OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bConnectedSuccessfully);

	
	
};




