// CC BY-NC 4.0

#pragma once

#include "Object.h"
#include "EventContainter.generated.h"

/**
 * 
 */
UINTERFACE(Blueprintable, meta = (CannotImplementInterfaceInBlueprint))
class UEventContainer : public UInterface {

	GENERATED_UINTERFACE_BODY()

};

template<class T>
class FRAMEWORK_API IEventContainer {

	GENERATED_IINTERFACE_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Event")
	virtual T* GetEvent() = 0;
	
};
