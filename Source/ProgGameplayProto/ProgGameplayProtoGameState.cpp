// Fill out your copyright notice in the Description page of Project Settings.


#include "ProgGameplayProtoGameState.h"

#include "EnemySpawnerManager.h"
#include "WinHttp/Support/WinHttpConnectionHttp.h"
#include "http.h"
#include "MySaveGame.h"
#include "Kismet/GameplayStatics.h"


AProgGameplayProtoGameState::AProgGameplayProtoGameState()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AProgGameplayProtoGameState::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if (bHasGameStarted)
		GameTime += DeltaSeconds;


	//GEngine->AddOnScreenDebugMessage(-1, 0, FColor::Green, "Game Time: " + FString::SanitizeFloat(GameTime));
}

void AProgGameplayProtoGameState::StartGame()
{
	bHasGameStarted = true;
	/*
	FHttpRequestRef Request = FHttpModule::Get().CreateRequest();
	Request->OnProcessRequestComplete().BindUObject(this, &AProgGameplayProtoGameState::OnResponseReceived);
	  Request->SetURL("localhost:3000");
	  Request->SetVerb("GET");
	  Request->ProcessRequest();
	  */
}

void AProgGameplayProtoGameState::EndGame(bool GameWin)
{
	bHasGameStarted = false;
	//Win/Lose screen
	ShowEndScreen(GameWin, LocalGameGold);


	if (UMySaveGame* SaveGameInstance = Cast<UMySaveGame>(UGameplayStatics::CreateSaveGameObject(UMySaveGame::StaticClass())))
	{
		// Set data on the savegame object.
		if (UMySaveGame* LoadedGame = Cast<UMySaveGame>(UGameplayStatics::LoadGameFromSlot("Default", 0)))
		{
			SaveGameInstance->UpgradeStrut = LoadedGame->UpgradeStrut;
			SaveGameInstance->Gold = LoadedGame->Gold;
			SaveGameInstance->NumberOfEnemiesKilled = LoadedGame->NumberOfEnemiesKilled;
			LoadedGame->NumberOfEnemiesKilled = AEnemySpawnerManager::EnemiesKilledCount;
			SaveGameInstance->NumberOfEnemiesKilled = LoadedGame->NumberOfEnemiesKilled;
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, FString::Printf(TEXT("%d"), AEnemySpawnerManager::EnemiesKilledCount));

		}

		SaveGameInstance->Gold += LocalGameGold;
	
		// Save the data immediately.
		if (UGameplayStatics::SaveGameToSlot(SaveGameInstance, "Default", 0))
		{
			// Save succeeded.
		}
	}
}

void AProgGameplayProtoGameState::AddGold(int GoldAmount)
{
	LocalGameGold += GoldAmount;

	//FString ok = FString::SanitizeFloat(LocalGameGold);
	//GEngine->AddOnScreenDebugMessage(0, 5, FColor::Red, ok);
}
/*
void AProgGameplayProtoGameState::OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bConnectedSuccessfully)
{
	UE_LOG(LogTemp, Display, TEXT("Response %s"), *Response->GetContentAsString());
}
*/



/*
void AProgGameplayProtoGameState::CallHttp()
{

	FString uriBase = "localhost:3000";


	FHttpModule& httpModule = FHttpModule::Get();

	// Create an http request
	// The request will execute asynchronously, and call us back on the Lambda below
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> pRequest = httpModule.CreateRequest();

	// This is where we set the HTTP method (GET, POST, etc)
	// The Space-Track.org REST API exposes a "POST" method we can use to get
	// general perturbations data about objects orbiting Earth
	pRequest->SetVerb(TEXT("POST"));

	// We'll need to tell the server what type of content to expect in the POST data
	pRequest->SetHeader(TEXT("Content-Type"), TEXT("application/x-www-form-urlencoded"));


	FString user = "lol";
	FString password = "mdr";
	FString RequestContent = TEXT("identity=") + user + TEXT("&password=") + password + TEXT("&query=") + uriBase;


	// Set the POST content, which contains:
	// * Identity/password credentials for authentication
	// * A REST API query
	//   This allows us to login and get the results is a single call
	//   Otherwise, we'd need to manage session cookies across multiple calls.
	pRequest->SetContentAsString(RequestContent);

	pRequest->SetURL(uriBase);
	pRequest->OnProcessRequestComplete().BindLambda(
		// Here, we "capture" the 'this' pointer (the "&"), so our lambda can call this
		// class's methods in the callback.
		[&](
			FHttpRequestPtr pRequest,
			FHttpResponsePtr pResponse,
			bool connectedSuccessfully) mutable {

				if (connectedSuccessfully) {

					// We should have a JSON response - attempt to process it.
					ProcessSpaceTrackResponse(pResponse->GetContentAsString());
				}
				else {
					switch (pRequest->GetStatus()) {
					case EHttpRequestStatus::Failed_ConnectionError:
						UE_LOG(LogTemp, Error, TEXT("Connection failed."));
					default:
						UE_LOG(LogTemp, Error, TEXT("Request failed."));
					}
				}
		});

	// Finally, submit the request for processing
	pRequest->ProcessRequest();


}

void AProgGameplayProtoGameState::ProcessSpaceTrackResponse(const FString& ResponseContent)
{
	// Validate http called us back on the Game Thread...
	check(IsInGameThread());

	//bool Deserialize(const TSharedRef<TJsonReader<CharType>>&Reader, TArray<TSharedPtr<FJsonValue>>&OutArray)


	TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(ResponseContent);
	TArray<TSharedPtr<FJsonValue>> OutArray;

	if (FJsonSerializer::Deserialize(JsonReader, OutArray))
	{
		ProcessSpaceTrackResponse(OutArray);
	}
}

bool AProgGameplayProtoGameState::Deserialize(const TSharedRef<TJsonReader<CharType>>& Reader, TArray<TSharedPtr<FJsonValue>>& OutArray)
{
	
}
*/

