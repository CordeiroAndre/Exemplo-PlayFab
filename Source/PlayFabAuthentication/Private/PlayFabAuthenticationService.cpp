// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayFabAuthenticationService.h"

#include "PlayFabClientAPI.h"

void UPlayFabAuthenticationService::Authenticate(const FString& pUsername)
{
	this->Username = pUsername;

	/* Definir o modelo da requisicao */
	auto LoginWithCustomIDModel = PlayFab::ClientModels::FLoginWithCustomIDRequest();
	LoginWithCustomIDModel.CustomId = pUsername; 
	LoginWithCustomIDModel.CreateAccount = true;

	/* Dar bind nas delegates de callback */
	PlayFab::UPlayFabClientAPI::FLoginWithCustomIDDelegate OnSuccess;
	OnSuccess.BindUObject(this, &UPlayFabAuthenticationService::HandleLoginSuccess);
	PlayFab::FPlayFabErrorDelegate OnError;
	OnError.BindUObject(this, &UPlayFabAuthenticationService::HandleLoginError);

	/* Executar a requisicao */
	PlayFab::UPlayFabClientAPI().LoginWithCustomID(LoginWithCustomIDModel,OnSuccess,OnError);
}

void UPlayFabAuthenticationService::HandleLoginSuccess(const PlayFab::ClientModels::FLoginResult& LoginResult)
{
	if(LoginResult.NewlyCreated)
	{
		PlayFab::ClientModels::FUpdateUserTitleDisplayNameRequest Request;
		Request.DisplayName =  Username;
		PlayFab::UPlayFabClientAPI().UpdateUserTitleDisplayName(Request);
	}
	
	_titleID = LoginResult.EntityToken.Get()->Entity->Id;
	_playFabID = LoginResult.PlayFabId;
	
	OnAuthResponse.Broadcast(EPlayFabAuthResponse::SUCCESS, 200);
	OnAuthResponse.Clear();

}

void UPlayFabAuthenticationService::HandleLoginError(const PlayFab::FPlayFabCppError& PlayFabCppError)
{
	OnAuthResponse.Broadcast(EPlayFabAuthResponse::FAILURE, PlayFabCppError.HttpCode);
	OnAuthResponse.Clear();

}
