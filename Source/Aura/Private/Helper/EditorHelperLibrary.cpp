// Copyright fir3e


#include "Helper/EditorHelperLibrary.h"
#include "Kismet2/KismetEditorUtilities.h"

UObject* UEditorHelperLibrary::GetBlueprintCDO(UBlueprint* Blueprint, TSubclassOf<UObject> ExpectedParentClass)
{
	if (!Blueprint)
	{
		return nullptr;
	}

	UClass* GeneratedClass = Blueprint->GeneratedClass;
	if (!GeneratedClass)
	{
		return nullptr;
	}
	
	if (ExpectedParentClass && !GeneratedClass->IsChildOf(ExpectedParentClass))
	{
		UE_LOG(LogTemp, Warning, TEXT("GetBlueprintCDO: Generated class does not inherit from expected parent."));
		return nullptr;
	}

	// CDO
	return GeneratedClass->GetDefaultObject();
}
