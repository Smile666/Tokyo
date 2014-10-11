

#include "Tokyo.h"
#include "PlayingGameMode.h"

#include "PlayingHUD.h"

APlayingGameMode::APlayingGameMode(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	HUDClass = APlayingHUD::StaticClass();
}


