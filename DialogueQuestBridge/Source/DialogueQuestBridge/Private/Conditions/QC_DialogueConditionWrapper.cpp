#include "Conditions/QC_DialogueConditionWrapper.h"

bool UQC_DialogueConditionWrapper::ExecuteCondition_Implementation(const TArray<UObject*>& Context) const
{
	if (!Condition)
	{
		return false;
	}

	return Condition->ExecuteCondition(Context);
}
