#include "Conditions/DC_QuestConditionWrapper.h"

bool UDC_QuestConditionWrapper::ExecuteCondition_Implementation(const TArray<UObject*>& Context) const
{
	if (!Condition)
	{
		return false;
	}

	return Condition->ExecuteCondition(Context);
}
