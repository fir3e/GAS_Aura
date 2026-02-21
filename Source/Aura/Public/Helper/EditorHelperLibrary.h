// Copyright fir3e

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EditorHelperLibrary.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API UEditorHelperLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	/**
	 * Returns the Class Default Object (CDO) of the given Blueprint's Generated Class.
	 * Use this to modify default property values of a newly created Blueprint asset.
	 *
	 * @param Blueprint         The Blueprint asset you just created
	 * @param ExpectedParentClass Optional: checks that the generated class inherits from this
	 * @return The CDO as UObject*
	 */
	UFUNCTION(BlueprintCallable, Category = "Editor|Utilities")
	static UObject* GetBlueprintCDO(
		UBlueprint* Blueprint,
		TSubclassOf<UObject> ExpectedParentClass = nullptr
	);
};
