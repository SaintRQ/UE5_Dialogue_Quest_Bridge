#pragma once

#include "CoreMinimal.h"
#include "DialogueAction.h"
#include "QuestAction.h"

#include "DA_QuestActionWrapper.generated.h"

UCLASS(meta = (ToolTip = "Executes one quest action from a dialogue."))
class DIALOGUEQUESTBRIDGE_API UDA_QuestActionWrapper final : public UDialogueAction
{
	GENERATED_BODY()

	UPROPERTY(EditInstanceOnly, Instanced, Category = "Quest", meta = (DialogueMinWidth = "320"))
	TObjectPtr<UQuestAction> Action = nullptr;

public:

	// Executes the wrapped quest action using the dialogue context.
	virtual void ExecuteAction_Implementation(const TArray<UObject*>& Context) override;
};
