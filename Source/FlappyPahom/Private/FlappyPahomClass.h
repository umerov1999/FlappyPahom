#pragma once

#include "GameFramework/Actor.h"
#include "UObject/Object.h"
#include "FlappyPahomClass.generated.h"

UCLASS()
class FLAPPYPAHOM_API UFlappyPahomClass : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	//Set
	UFUNCTION(BlueprintCallable, Category = "FlappyPahom|Set")
	static void SetGameActorClass(AActor* GameActorClass);

	//Get
	UFUNCTION(BlueprintPure, Category = "FlappyPahom|Get")
	static AActor* GetGameActorClass();
private:
	static AActor *TGameActorClass;
};