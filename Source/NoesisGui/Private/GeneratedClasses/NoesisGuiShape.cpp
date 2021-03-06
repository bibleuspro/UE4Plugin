////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "NoesisGuiPrivatePCH.h"
#include "GeneratedClasses/NoesisGuiShape.h"

using namespace Noesis;
using namespace Gui;

UNoesisGuiShape::UNoesisGuiShape(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UNoesisGuiShape::SetNoesisComponent(Noesis::Core::BaseComponent* InNoesisComponent)
{
	Super::SetNoesisComponent(InNoesisComponent);

	Noesis::Gui::Shape* NoesisShape = NsDynamicCast<Noesis::Gui::Shape*>(InNoesisComponent);
	check(NoesisShape);

}

	void UNoesisGuiShape::BeginDestroy()
{
	Noesis::Gui::Shape* NoesisShape = NsDynamicCast<Noesis::Gui::Shape*>(NoesisComponent.GetPtr());
	if (!NoesisShape)
		return Super::BeginDestroy();


	Super::BeginDestroy();
}

