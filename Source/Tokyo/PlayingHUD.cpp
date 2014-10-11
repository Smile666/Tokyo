

#include "Tokyo.h"
#include "PlayingHUD.h"


APlayingHUD::APlayingHUD(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	static ConstructorHelpers::FObjectFinder<UTexture2D> TargetTexObj(TEXT("Texture2D'/Game/HUD/target.target'"));
	TargetTex = TargetTexObj.Object;
}

void APlayingHUD::DrawHUD()
{
	Super::DrawHUD();

	//get position to draw cursor
	float PosX, PosY;
	PlayerOwner->GetMousePosition(PosX, PosY);
	const FVector2D DrawPos(PosX - (TargetTex->GetSurfaceWidth() * 0.5f), PosY - (TargetTex->GetSurfaceHeight() * 0.5f));
	
	//draw
	FCanvasTileItem TileItem(DrawPos, TargetTex->Resource, FLinearColor::White);
	TileItem.BlendMode = SE_BLEND_Translucent;
	Canvas->DrawItem(TileItem);
}


