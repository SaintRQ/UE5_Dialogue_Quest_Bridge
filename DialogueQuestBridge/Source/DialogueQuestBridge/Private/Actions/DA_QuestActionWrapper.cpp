#include "Actions/DA_QuestActionWrapper.h"

void UDA_QuestActionWrapper::ExecuteAction_Implementation(const TArray<UObject*>& Context)
{
	if (!Action)
	{
		return;
	}

	Action->ExecuteAction(Context);
}
