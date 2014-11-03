

#include "Tokyo.h"
#include "TokyoGameMode.h"
#include "TokyoPlayerController.h"

ATokyoGameMode::ATokyoGameMode(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	PlayerControllerClass = ATokyoPlayerController::StaticClass();
}


