// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "EquinoxHUD.generated.h"

UCLASS()
class AEquinoxHUD : public AHUD
{
	GENERATED_BODY()

public:
	AEquinoxHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

