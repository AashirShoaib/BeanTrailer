#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Toggle.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class CONFI_API UToggle : public UActorComponent
{
    GENERATED_BODY()

public:
    UToggle();

    UFUNCTION(BlueprintCallable, Category = "Visibility")
    void ToggleActorsByTag(FName ActorTag);

protected:
    virtual void BeginPlay() override;
};