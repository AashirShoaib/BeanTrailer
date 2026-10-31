#include "Toggle.h"
#include "Kismet/GameplayStatics.h"

UToggle::UToggle()
{
    PrimaryComponentTick.bCanEverTick = false;
}

void UToggle::BeginPlay()
{
    Super::BeginPlay();
}

void UToggle::ToggleActorsByTag(FName ActorTag)
{
    if (!GetWorld())
    {
        return;
    }

    TArray<AActor*> FoundActors;
    UGameplayStatics::GetAllActorsWithTag(GetWorld(), ActorTag, FoundActors);

    for (AActor* CurrentActor : FoundActors)
    {
        if (!CurrentActor)
        {
            continue;
        }

        bool bIsCurrentlyHidden = CurrentActor->IsHidden();
        CurrentActor->SetActorHiddenInGame(!bIsCurrentlyHidden);
    }
}