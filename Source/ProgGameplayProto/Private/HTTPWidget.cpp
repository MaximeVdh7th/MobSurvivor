// Fill out your copyright notice in the Description page of Project Settings.




#include "HTTPWidget.h"

using namespace std;

/*
UHTTPWidget::UHTTPWidget()
{
	
}
*/


void UHTTPWidget::HandleHttpPostRequests(FString Tok)
{
	FHttpRequestRef Request = FHttpModule::Get().CreateRequest();

	//Request->OnProcessRequestComplete().BindUObject(this, &AProgGameplayProtoGameState::OnResponseReceived);
	 // Request->SetURL("http://localhost:3000/index.html");
	  //Request->SetVerb("GET");
	  //Request->ProcessRequest();


	TSharedRef<FJsonObject> RequestObj = MakeShared<FJsonObject>();
	if (Email.Len() > 0)
	{
		RequestObj->SetStringField("email", Email);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("invalid email"));
		return;
	}
	if (Password.Len() > 0)
	{
		RequestObj->SetStringField("password", Password);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("invalid password"));
		return;
	}

	RequestObj->SetStringField("token", Tok);

	//enregistre le joueur dans la DB

	FString RequestBody;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&RequestBody);
	FJsonSerializer::Serialize(RequestObj, Writer);


	Request->OnProcessRequestComplete().BindUObject(this, &UHTTPWidget::OnResponseReceived);
	Request->SetURL("http://localhost:3000/post");
	Request->SetVerb("POST");
	Request->SetHeader("Content-Type", "application/json");
	Request->SetContentAsString(RequestBody);
	Request->ProcessRequest();
}

void UHTTPWidget::OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bConnectedSuccessfully)
{

	TSharedPtr<FJsonObject> ResponseObj;
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Response->GetContentAsString());
	FJsonSerializer::Deserialize(Reader, ResponseObj);

	//UE_LOG(LogTemp, Display, TEXT("Response %s"), *Response->GetContentAsString());
	//UE_LOG(LogTemp, Display, TEXT("Title: %s"), *ResponseObj->GetStringField("title"));

}

void UHTTPWidget::HandleScoreRequests(FString Tok, FString EnemiesKilled)
{
	
	FHttpRequestRef Request = FHttpModule::Get().CreateRequest();
	TSharedRef<FJsonObject> RequestObj = MakeShared<FJsonObject>();
	RequestObj->SetStringField("token", Tok);
	RequestObj->SetStringField("score", EnemiesKilled);
	FString RequestBody;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&RequestBody);
	FJsonSerializer::Serialize(RequestObj, Writer);
	Request->OnProcessRequestComplete().BindUObject(this, &UHTTPWidget::OnResponseReceived);
	Request->SetURL("http://localhost:3000/score");
	Request->SetVerb("POST");
	Request->SetHeader("Content-Type", "application/json");
	Request->SetContentAsString(RequestBody);
	Request->ProcessRequest();
}

FString UHTTPWidget::GenerateToken()
{
	std::string str("0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");

	std::random_device rd;
	std::mt19937 generator(rd());

	std::shuffle(str.begin(), str.end(), generator);

	std::string StringToken =  str.substr(0, 32);


	FString Tok = StringToken.c_str();
	return Tok;
}










