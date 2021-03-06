////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "NoesisGuiPrivatePCH.h"
#include "GeneratedClasses/NoesisGuiLinearThicknessKeyFrame.h"

using namespace Noesis;
using namespace Gui;

UNoesisGuiLinearThicknessKeyFrame::UNoesisGuiLinearThicknessKeyFrame(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UNoesisGuiLinearThicknessKeyFrame::SetNoesisComponent(Noesis::Core::BaseComponent* InNoesisComponent)
{
	Super::SetNoesisComponent(InNoesisComponent);

	Noesis::Gui::LinearKeyFrame<Noesis::Drawing::Thickness>* NoesisLinearThicknessKeyFrame = NsDynamicCast<Noesis::Gui::LinearKeyFrame<Noesis::Drawing::Thickness>*>(InNoesisComponent);
	check(NoesisLinearThicknessKeyFrame);

}

	void UNoesisGuiLinearThicknessKeyFrame::BeginDestroy()
{
	Noesis::Gui::LinearKeyFrame<Noesis::Drawing::Thickness>* NoesisLinearThicknessKeyFrame = NsDynamicCast<Noesis::Gui::LinearKeyFrame<Noesis::Drawing::Thickness>*>(NoesisComponent.GetPtr());
	if (!NoesisLinearThicknessKeyFrame)
		return Super::BeginDestroy();


	Super::BeginDestroy();
}

