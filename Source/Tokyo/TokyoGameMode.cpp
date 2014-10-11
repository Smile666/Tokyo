

#include "Tokyo.h"
#include "TokyoGameMode.h"
#include "TokyoPlayerController.h"

#include "PlayingHUD.h"

ATokyoGameMode::ATokyoGameMode(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	PlayerControllerClass = ATokyoPlayerController::StaticClass();
	HUDClass = APlayingHUD::StaticClass();
}

void ATokyoGameMode::StartPlay()
{
	Super::BeginPlay();
}

