#include "Actions/QA_DialogueActionWrapper.h"

void UQA_DialogueActionWrapper::ExecuteAction_Implementation(const TArray<UObject*>& Context)
{
	if (!Action)
	{
		return;
	}

	Action->ExecuteAction(Context);
}
