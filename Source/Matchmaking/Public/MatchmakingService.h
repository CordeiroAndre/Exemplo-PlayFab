// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PlayFabError.h"
#include "PlayFabMultiplayerDataModels.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "MatchmakingService.generated.h"


UENUM(BlueprintType)
enum class EMatchmakingState : uint8
{
	NONE,
	CREATING_TICKET,
	FAILED_CREATING_TICKET,
	CHECKING_TICKET_STATUS,
	FAILED_CHECKING_TICKET_STATUS,
	MATCHMAKED,
	SUCCESSFULLY_GOT_MATCH,
	FAILED_TO_GET_MATCH,
	CANCELING,
	FAILED_TO_CANCEL
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMatchmakingStateChanged, const EMatchmakingState&, NewState);

UCLASS()
class MATCHMAKING_API UMatchmakingService : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	UPROPERTY(BlueprintAssignable, Category="Unreal Training | Matchmaking")
	FOnMatchmakingStateChanged OnMatchmakingStateChanged;

	/* Principais chamadas do servico */
	UFUNCTION(BlueprintCallable, Category="Unreal Training | Matchmaking")
	void CreateMatchmakingTicket(const FString& PlayerEntityID, const FString& QueueName);

	UFUNCTION(BlueprintCallable, Category="Unreal Training | Matchmaking")
	void CheckMatchmakingTicketStatus();

	UFUNCTION(BlueprintCallable, Category="Unreal Training | Matchmaking")
	void GetMatch();

	UFUNCTION(BlueprintCallable, Category="Unreal Training | Matchmaking")
	void CancelMatchmaking();

	

protected:
	/* metodos reativos as principais chamadas */

	void HandleTicketCreationSuccess(const PlayFab::MultiplayerModels::FCreateMatchmakingTicketResult& CreateMatchmakingTicketResult);
	void HandleTicketCreationFailure(const PlayFab::FPlayFabCppError& PlayFabCppError);
	void HandleCheckMatchmakingTicketSuccess(const PlayFab::MultiplayerModels::FGetMatchmakingTicketResult& GetMatchmakingTicketResult);
	void HandleCheckMatchmakingTicketFailure(const PlayFab::FPlayFabCppError& PlayFabCppError);
	void HandleGetMatchSuccess(const PlayFab::MultiplayerModels::FGetMatchResult& GetMatchResult);
	void HandleGetMatchFailure(const PlayFab::FPlayFabCppError& PlayFabCppError);
	void HandleCancelMatchmakingTicketSuccess(const PlayFab::MultiplayerModels::FCancelMatchmakingTicketResult& CancelMatchmakingTicketResult);
	void HandleCancelMatchmakingTicketFailure(const PlayFab::FPlayFabCppError& PlayFabCppError);

private:
	void ClearVariables();
	
	/* Dados importantes para esse servico*/
	FString _ticketID;
	FString _queueName;
	FString _matchID;
	FTimerHandle _checkMatchmakingTicketStatusHandle;
	
};
