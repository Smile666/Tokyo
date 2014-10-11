

#pragma once

#include "GameFramework/Character.h"
#include "PlayerCharacter.generated.h"

/**
 * 
 */
UCLASS()
class TOKYO_API APlayerCharacter : public ACharacter
{
	GENERATED_UCLASS_BODY()

	UFUNCTION()
	void MoveRight(float Val);

protected:
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	
};
