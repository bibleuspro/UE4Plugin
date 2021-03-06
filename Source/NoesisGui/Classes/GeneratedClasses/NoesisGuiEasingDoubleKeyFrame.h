////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "NoesisGuiTypes.h"
#include "GeneratedClasses/NoesisGuiDoubleKeyFrame.h"
#include "NoesisGuiEasingDoubleKeyFrame.generated.h"

UCLASS()
class NOESISGUI_API UNoesisGuiEasingDoubleKeyFrame : public UNoesisGuiDoubleKeyFrame
{
public:
	GENERATED_UCLASS_BODY()

	virtual void SetNoesisComponent(Noesis::Core::BaseComponent* NoesisComponent) override;

	// UObject interface
	virtual void BeginDestroy() override;
	// End of UObject interface
};

