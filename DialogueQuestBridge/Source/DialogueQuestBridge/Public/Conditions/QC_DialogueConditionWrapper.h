#pragma once

#include "CoreMinimal.h"
#include "DialogueCondition.h"
#include "QuestCondition.h"

#include "QC_DialogueConditionWrapper.generated.h"

UCLASS(meta = (ToolTip = "Evaluates one dialogue condition from a quest."))
class DIALOGUEQUESTBRIDGE_API UQC_DialogueConditionWrapper final : public UQuestCondition
{
	GENERATED_BODY()

	UPROPERTY(EditInstanceOnly, Instanced, Category = "Dialogue")
	TObjectPtr<UDialogueCondition> Condition = nullptr;

public:

	// Evaluates the wrapped dialogue condition using the quest context.
	virtual bool ExecuteCondition_Implementation(const TArray<UObject*>& Context) const override;
};
