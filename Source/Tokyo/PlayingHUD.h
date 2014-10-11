

#pragma once

#include "GameFramework/HUD.h"
#include "PlayingHUD.generated.h"

/**
 * 
 */
UCLASS()
class TOKYO_API APlayingHUD : public AHUD
{
	GENERATED_UCLASS_BODY()

private:

	virtual void DrawHUD() override;

	UTexture2D* TargetTex;
	
};
