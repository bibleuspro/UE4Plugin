////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "NoesisGuiPrivatePCH.h"
#include "GeneratedClasses/NoesisGuiDoubleAnimationUsingKeyFrames.h"

using namespace Noesis;
using namespace Gui;

UNoesisGuiDoubleAnimationUsingKeyFrames::UNoesisGuiDoubleAnimationUsingKeyFrames(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UNoesisGuiDoubleAnimationUsingKeyFrames::SetNoesisComponent(Noesis::Core::BaseComponent* InNoesisComponent)
{
	Super::SetNoesisComponent(InNoesisComponent);

	Noesis::Gui::AnimationUsingKeyFrames<NsFloat32>* NoesisDoubleAnimationUsingKeyFrames = NsDynamicCast<Noesis::Gui::AnimationUsingKeyFrames<NsFloat32>*>(InNoesisComponent);
	check(NoesisDoubleAnimationUsingKeyFrames);

}

	void UNoesisGuiDoubleAnimationUsingKeyFrames::BeginDestroy()
{
	Noesis::Gui::AnimationUsingKeyFrames<NsFloat32>* NoesisDoubleAnimationUsingKeyFrames = NsDynamicCast<Noesis::Gui::AnimationUsingKeyFrames<NsFloat32>*>(NoesisComponent.GetPtr());
	if (!NoesisDoubleAnimationUsingKeyFrames)
		return Super::BeginDestroy();


	Super::BeginDestroy();
}

