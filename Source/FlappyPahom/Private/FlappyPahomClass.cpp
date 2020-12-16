#include "FlappyPahom.h"
#include "FlappyPahomClass.h"
AActor *UFlappyPahomClass::TGameActorClass = NULL;

UFlappyPahomClass::UFlappyPahomClass(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UFlappyPahomClass::SetGameActorClass(AActor* GameActorClass)
{
	TGameActorClass = GameActorClass;
}

AActor* UFlappyPahomClass::GetGameActorClass()
{
	return TGameActorClass;
}