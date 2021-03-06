////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "NoesisGuiPrivatePCH.h"
#include "GeneratedClasses/NoesisGuiStreamGeometry.h"

using namespace Noesis;
using namespace Gui;

UNoesisGuiStreamGeometry::UNoesisGuiStreamGeometry(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UNoesisGuiStreamGeometry::SetNoesisComponent(Noesis::Core::BaseComponent* InNoesisComponent)
{
	Super::SetNoesisComponent(InNoesisComponent);

	Noesis::Gui::StreamGeometry* NoesisStreamGeometry = NsDynamicCast<Noesis::Gui::StreamGeometry*>(InNoesisComponent);
	check(NoesisStreamGeometry);

}

void UNoesisGuiStreamGeometry::SetData(FString InData)
{
	Noesis::Gui::StreamGeometry* NoesisStreamGeometry = NsDynamicCast<Noesis::Gui::StreamGeometry*>(NoesisComponent.GetPtr());
	check(NoesisStreamGeometry);
	const NsChar* NoesisInData = StringCast<NsChar>(*InData).Get();
	return NoesisStreamGeometry->SetData(NoesisInData);
}

	void UNoesisGuiStreamGeometry::BeginDestroy()
{
	Noesis::Gui::StreamGeometry* NoesisStreamGeometry = NsDynamicCast<Noesis::Gui::StreamGeometry*>(NoesisComponent.GetPtr());
	if (!NoesisStreamGeometry)
		return Super::BeginDestroy();


	Super::BeginDestroy();
}

