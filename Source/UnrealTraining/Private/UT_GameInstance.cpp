// Fill out your copyright notice in the Description page of Project Settings.


#include "UT_GameInstance.h"
#include "PlayfabGSDK.h"
#include "GSDKUtils.h"
#include "PlayFabUtilities.h"

DEFINE_LOG_CATEGORY(LogPlayFabGSDKGameInstance);

void UUT_GameInstance::Init()
{
	Super::Init();

	#if UE_SERVER
		UPlayFabUtilities::setPlayFabSettings("5035A", "HSW61463PCRBJEKTZ1BFXR859A7SO6KZQCNJUZZDZJBR8ITR6E");
	#endif
	
	
	if (IsDedicatedServerInstance() == true)
	{
		FOnGSDKShutdown_Dyn OnGSDKShutdown;
		OnGSDKShutdown.BindDynamic(this, &UUT_GameInstance::OnGSDKShutdown);
		FOnGSDKHealthCheck_Dyn OnGSDKHealthCheck;
		OnGSDKHealthCheck.BindDynamic(this, &UUT_GameInstance::OnGSDKHealthCheck);
		FOnGSDKServerActive_Dyn OnGSDKServerActive;
		OnGSDKServerActive.BindDynamic(this, &UUT_GameInstance::OnGSDKServerActive);
		FOnGSDKReadyForPlayers_Dyn OnGSDKReadyForPlayers;
		OnGSDKReadyForPlayers.BindDynamic(this, &UUT_GameInstance::OnGSDKReadyForPlayers);

		UGSDKUtils::RegisterGSDKShutdownDelegate(OnGSDKShutdown);
		UGSDKUtils::RegisterGSDKHealthCheckDelegate(OnGSDKHealthCheck);
		UGSDKUtils::RegisterGSDKServerActiveDelegate(OnGSDKServerActive);
		UGSDKUtils::RegisterGSDKReadyForPlayers(OnGSDKReadyForPlayers);
	}

	#if UE_SERVER
		UGSDKUtils::SetDefaultServerHostPort();
	#endif
}

void UUT_GameInstance::OnStart()
{
	Super::OnStart();
	UE_LOG(LogPlayFabGSDKGameInstance, Warning, TEXT("Reached onStart!"));
	UGSDKUtils::ReadyForPlayers();
}

void UUT_GameInstance::OnGSDKShutdown()
{
	UE_LOG(LogPlayFabGSDKGameInstance, Warning, TEXT("Shutdown!"));
	FPlatformMisc::RequestExit(false);
}

bool UUT_GameInstance::OnGSDKHealthCheck()
{
	UE_LOG(LogPlayFabGSDKGameInstance, Warning, TEXT("Healthy!")); 
	return true;
}

void UUT_GameInstance::OnGSDKServerActive()
{
	/**
	 * Server is transitioning to an active state.
	 * Optional: Add in the implementation any code that is needed for the game server when
	 * this transition occurs.
	 */
	UE_LOG(LogPlayFabGSDKGameInstance, Warning, TEXT("Active!"));
}

void UUT_GameInstance::OnGSDKReadyForPlayers()
{
	/**
	 * Server is transitioning to a StandBy state. Game initialization is complete and the game
	 * is ready to accept players.
	 * Optional: Add in the implementation any code that is needed for the game server before
	 * initialization completes.
	 */
	UE_LOG(LogPlayFabGSDKGameInstance, Warning, TEXT("Finished Initialization - Moving to StandBy!"));
}
