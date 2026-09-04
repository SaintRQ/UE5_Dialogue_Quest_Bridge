#pragma once

#include "CoreMinimal.h"
#include "DialogueAction.h"
#include "QuestAction.h"

#include "QA_DialogueActionWrapper.generated.h"

UCLASS(meta = (ToolTip = "Executes one dialogue action from a quest."))
class DIALOGUEQUESTBRIDGE_API UQA_DialogueActionWrapper final : public UQuestAction
{
	GENERATED_BODY()

	UPROPERTY(EditInstanceOnly, Instanced, Category = "Dialogue")
	TObjectPtr<UDialogueAction> Action = nullptr;

public:

	// Executes the wrapped dialogue action using the quest context.
	virtual void ExecuteAction_Implementation(const TArray<UObject*>& Context) override;
};
