// Copyright Redc4ke


#include "Character/AuraEnemy.h"


void AAuraEnemy::HighlightActor()
{
	UE_LOG(LogTemp, Warning, TEXT("dupa"));
	bIsHighlighted = true;
}

void AAuraEnemy::UnHighlightActor()
{
	bIsHighlighted = false;
}
