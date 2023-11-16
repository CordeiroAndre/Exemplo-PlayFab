// Fill out your copyright notice in the Description page of Project Settings.


#include "MatchmakingService.h"
#include "PlayFabMultiplayerAPI.h"

void UMatchmakingService::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	OnMatchmakingStateChanged.Clear();
}

#pragma region TICKET_CREATION
void UMatchmakingService::CreateMatchmakingTicket(const FString& PlayerEntityID, const FString& QueueName)
{
	_queueName = QueueName;
	
	/* Cria o modelo da requisicao */

		/* Qual o usuario dono do ticket? */
		PlayFab::MultiplayerModels::FEntityKey CreatorEntityKey;
		CreatorEntityKey.Id = PlayerEntityID;
		CreatorEntityKey.Type = FString("title_player_account");
	
		PlayFab::MultiplayerModels::FMatchmakingPlayer Creator;
		Creator.Entity = CreatorEntityKey;

		/* Difinir os atributos da rule */
		TSharedPtr<FJsonObject> AttributesJsonObject = MakeShareable(new FJsonObject());
		TSharedPtr<FJsonObject> DataObject = MakeShareable(new FJsonObject());
		DataObject->SetNumberField("playerCount", 1);

	
	
		TArray<TSharedPtr<FJsonValue>> LatenciesArray;
		TSharedPtr<FJsonObject> Latency = MakeShareable(new FJsonObject());
		LatenciesArray.Add(MakeShareable(new FJsonValueObject(Latency)));
		Latency->SetStringField("region", "EastUs");
		Latency->SetNumberField("latency", 30);
		DataObject->SetArrayField("Latencies", LatenciesArray);

	
	
		AttributesJsonObject->SetObjectField("DataObject", DataObject);
		Creator.Attributes = MakeShareable(new PlayFab::MultiplayerModels::FMatchmakingPlayerAttributes(AttributesJsonObject));

		
	
		/* finaliza as atribuicoes do modelo */
		PlayFab::MultiplayerModels::FCreateMatchmakingTicketRequest CreateMatchmakingTicketRequestModel;
		CreateMatchmakingTicketRequestModel.Creator = Creator;
		CreateMatchmakingTicketRequestModel.QueueName = QueueName;
		CreateMatchmakingTicketRequestModel.GiveUpAfterSeconds = 300;
		CreateMatchmakingTicketRequestModel.MembersToMatchWith = TArray<PlayFab::MultiplayerModels::FEntityKey>();
	

	/* Faz os bindings de callback */
	PlayFab::UPlayFabMultiplayerAPI::FCreateMatchmakingTicketDelegate OnSuccess;
	OnSuccess.BindUObject(this, &UMatchmakingService::HandleTicketCreationSuccess);
	PlayFab::FPlayFabErrorDelegate OnError;
	OnError.BindUObject(this, &UMatchmakingService::HandleTicketCreationFailure);

	/* Executa a requisicao */
	PlayFab::UPlayFabMultiplayerAPI().CreateMatchmakingTicket(CreateMatchmakingTicketRequestModel, OnSuccess, OnError);

	/* Altera estado deste service */
	OnMatchmakingStateChanged.Broadcast(EMatchmakingState::CREATING_TICKET);
}

void UMatchmakingService::HandleTicketCreationSuccess(const PlayFab::MultiplayerModels::FCreateMatchmakingTicketResult& CreateMatchmakingTicketResult)
{
	_ticketID = CreateMatchmakingTicketResult.TicketId;

	/* Fica verificando o status do ticked de 8 em 8 segundos para nao tomar block de DDOS */
	GetWorld()->GetTimerManager().SetTimer(_checkMatchmakingTicketStatusHandle, [this]()
	{
		OnMatchmakingStateChanged.Broadcast(EMatchmakingState::CHECKING_TICKET_STATUS);
		CheckMatchmakingTicketStatus();
	}, 8, true);
}

void UMatchmakingService::HandleTicketCreationFailure(const PlayFab::FPlayFabCppError& PlayFabCppError)
{
	ClearVariables();
	/* Altera o estado deste servico */
	OnMatchmakingStateChanged.Broadcast(EMatchmakingState::FAILED_CREATING_TICKET);
}

#pragma endregion TICKET_CREATION

#pragma region CHECK_TICKET_STATUS
void UMatchmakingService::CheckMatchmakingTicketStatus()
{
	/* Cria o modelo da requisicao */
	auto CheckMatchmakingTicketRequestModel = PlayFab::MultiplayerModels::FGetMatchmakingTicketRequest();
	CheckMatchmakingTicketRequestModel.QueueName = _queueName;
	CheckMatchmakingTicketRequestModel.TicketId = _ticketID;

	/* Faz os bindings */
	PlayFab::UPlayFabMultiplayerAPI::FGetMatchmakingTicketDelegate OnSuccess;
	OnSuccess.BindUObject(this, &UMatchmakingService::HandleCheckMatchmakingTicketSuccess);
	PlayFab::FPlayFabErrorDelegate OnError; 
	OnError.BindUObject(this, &UMatchmakingService::HandleCheckMatchmakingTicketFailure);

	/* Executa a requisicao */
	PlayFab::UPlayFabMultiplayerAPI().GetMatchmakingTicket(CheckMatchmakingTicketRequestModel, OnSuccess, OnError);
}

void UMatchmakingService::HandleCheckMatchmakingTicketSuccess(const PlayFab::MultiplayerModels::FGetMatchmakingTicketResult& GetMatchmakingTicketResult)
{
	if(GetMatchmakingTicketResult.Status.Equals("Matched", ESearchCase::IgnoreCase))
	{
		/* Altera estado deste service */
		OnMatchmakingStateChanged.Broadcast(EMatchmakingState::MATCHMAKED);
		_matchID = GetMatchmakingTicketResult.MatchId;
		GetMatch();
	}
	else if(GetMatchmakingTicketResult.Status.Equals("Canceled", ESearchCase::IgnoreCase))
	{
		ClearVariables();
		_checkMatchmakingTicketStatusHandle.Invalidate();
		OnMatchmakingStateChanged.Broadcast(EMatchmakingState::FAILED_CHECKING_TICKET_STATUS);
	}
}

void UMatchmakingService::HandleCheckMatchmakingTicketFailure(const PlayFab::FPlayFabCppError& PlayFabCppError)
{
	ClearVariables();
	/* Altera estado deste service */
	OnMatchmakingStateChanged.Broadcast(EMatchmakingState::FAILED_CHECKING_TICKET_STATUS);
}
#pragma endregion CHECK_TICKET_STATUS

#pragma region GET_MATCH
void UMatchmakingService::GetMatch()
{
	_checkMatchmakingTicketStatusHandle.Invalidate();

	/* Cria o modelo da requisicao */
	PlayFab::MultiplayerModels::FGetMatchRequest RequestModel;
	RequestModel.MatchId = _matchID;
	RequestModel.QueueName = _queueName;

	/* Faz os Bindings das callbacks */
	PlayFab::UPlayFabMultiplayerAPI::FGetMatchDelegate OnSuccess;
	OnSuccess.BindUObject(this, &UMatchmakingService::HandleGetMatchSuccess);
	PlayFab::FPlayFabErrorDelegate OnError;
	OnError.BindUObject(this, &UMatchmakingService::HandleGetMatchFailure);

	/* Executa a requisicao */
	PlayFab::UPlayFabMultiplayerAPI().GetMatch(RequestModel,OnSuccess, OnError);
}

void UMatchmakingService::HandleGetMatchSuccess(const PlayFab::MultiplayerModels::FGetMatchResult& GetMatchResult)
{
	auto ServerDetails = GetMatchResult.pfServerDetails.Get();
	FString IP = ServerDetails->IPV4Address;
	int Port = ServerDetails->Ports[0].Num;
	FString Address = IP +":"+FString::FromInt(Port);
	GetWorld()->GetFirstPlayerController()->ClientTravel(Address, TRAVEL_Absolute);
	
	OnMatchmakingStateChanged.Broadcast(EMatchmakingState::SUCCESSFULLY_GOT_MATCH);
}

void UMatchmakingService::HandleGetMatchFailure(const PlayFab::FPlayFabCppError& PlayFabCppError)
{
	ClearVariables();
	OnMatchmakingStateChanged.Broadcast(EMatchmakingState::FAILED_TO_GET_MATCH);
}

#pragma endregion GET_MATCH

#pragma region CANCEL_MATCHMAKING
void UMatchmakingService::CancelMatchmaking()
{
	/* Cria o modelo da requisicao */
	PlayFab::MultiplayerModels::FCancelMatchmakingTicketRequest RequestModel;
	RequestModel.QueueName = _queueName;
	RequestModel.TicketId = _ticketID;

	/* Faz os Bindings das callbacks */
	PlayFab::UPlayFabMultiplayerAPI::FCancelMatchmakingTicketDelegate OnSuccess;
	OnSuccess.BindUObject(this, &UMatchmakingService::HandleCancelMatchmakingTicketSuccess);
	PlayFab::FPlayFabErrorDelegate OnError;
	OnError.BindUObject(this, &UMatchmakingService::HandleCancelMatchmakingTicketFailure);

	
	
	/* Executa a requisicao */
	PlayFab::UPlayFabMultiplayerAPI().CancelMatchmakingTicket(RequestModel, OnSuccess, OnError);

	/* troca o estado */
	OnMatchmakingStateChanged.Broadcast(EMatchmakingState::CANCELING);
}

void UMatchmakingService::HandleCancelMatchmakingTicketSuccess(const PlayFab::MultiplayerModels::FCancelMatchmakingTicketResult& CancelMatchmakingTicketResult)
{
	ClearVariables();
	/* troca o estado */
	OnMatchmakingStateChanged.Broadcast(EMatchmakingState::NONE);
}

void UMatchmakingService::HandleCancelMatchmakingTicketFailure(const PlayFab::FPlayFabCppError& PlayFabCppError)
{
	/* troca o estado */
	OnMatchmakingStateChanged.Broadcast(EMatchmakingState::FAILED_TO_CANCEL);
}

#pragma endregion CANCEL_MATCHMAKING

void UMatchmakingService::ClearVariables()
{
	_queueName.Empty();
	_matchID.Empty();
	_ticketID.Empty();
}
