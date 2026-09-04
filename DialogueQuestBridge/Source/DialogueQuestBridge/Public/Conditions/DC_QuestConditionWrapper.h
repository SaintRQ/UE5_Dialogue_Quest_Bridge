#pragma once

#include "CoreMinimal.h"
#include "DialogueCondition.h"
#include "QuestCondition.h"

#include "DC_QuestConditionWrapper.generated.h"

UCLASS(meta = (ToolTip = "Evaluates one quest condition from a dialogue."))
class DIALOGUEQUESTBRIDGE_API UDC_QuestConditionWrapper final : public UDialogueCondition
{
	GENERATED_BODY()

	UPROPERTY(EditInstanceOnly, Instanced, Category = "Quest", meta = (DialogueMinWidth = "320"))
	TObjectPtr<UQuestCondition> Condition = nullptr;

public:

	// Evaluates the wrapped quest condition using the dialogue context.
	virtual bool ExecuteCondition_Implementation(const TArray<UObject*>& Context) const override;
};
