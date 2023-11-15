// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PlayFabClientDataModels.h"
#include "PlayFabError.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "PlayFabAuthenticationService.generated.h"


UENUM(BlueprintType)
enum class EPlayFabAuthResponse: uint8
{
	SUCCESS, FAILURE
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAuthRequestResponse, const EPlayFabAuthResponse&, ResponseStatus, int, Code);
UCLASS()
class PLAYFABAUTHENTICATION_API UPlayFabAuthenticationService : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category="Unreal Training | Authentication")
	void Authenticate(const FString& pUsername);

	UPROPERTY(BlueprintReadOnly, Category="Unreal Training | Authentication")
	FString Username;

	UPROPERTY(BlueprintAssignable, Category="Unreal Training | Authentication")
	FAuthRequestResponse OnAuthResponse;
	
protected:
	void HandleLoginSuccess(const PlayFab::ClientModels::FLoginResult& LoginResult);
	void HandleLoginError(const PlayFab::FPlayFabCppError& PlayFabCppError);

private:
	/* Dados essenciais para futuras requisicoes */
	FString _playFabID;
	FString _titleID;

public:
	UFUNCTION(BlueprintCallable,BlueprintPure, Category="Unreal Training | Authentication")
	const FString& GetPlayFabID(){ return _playFabID;}

	UFUNCTION(BlueprintCallable,BlueprintPure, Category="Unreal Training | Authentication")
	const FString& GetTitleID(){ return _titleID;}
	
	
};
