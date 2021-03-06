////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "NoesisGuiPrivatePCH.h"
#include "GeneratedClasses/NoesisGuiPasswordBox.h"

using namespace Noesis;
using namespace Gui;

UNoesisGuiPasswordBox::UNoesisGuiPasswordBox(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UNoesisGuiPasswordBox::SetNoesisComponent(Noesis::Core::BaseComponent* InNoesisComponent)
{
	Super::SetNoesisComponent(InNoesisComponent);

	Noesis::Gui::PasswordBox* NoesisPasswordBox = NsDynamicCast<Noesis::Gui::PasswordBox*>(InNoesisComponent);
	check(NoesisPasswordBox);

	PasswordChanged_Delegate = Noesis::MakeDelegate(this, &UNoesisGuiPasswordBox::PasswordChanged_Private);
	NoesisPasswordBox->PasswordChanged() += PasswordChanged_Delegate;
}

FString UNoesisGuiPasswordBox::GetPassword()
{
	Noesis::Gui::PasswordBox* NoesisPasswordBox = NsDynamicCast<Noesis::Gui::PasswordBox*>(NoesisComponent.GetPtr());
	check(NoesisPasswordBox);
	return NsStringToFString(NoesisPasswordBox->GetPassword());
}

void UNoesisGuiPasswordBox::SetPassword(FString InPassword)
{
	Noesis::Gui::PasswordBox* NoesisPasswordBox = NsDynamicCast<Noesis::Gui::PasswordBox*>(NoesisComponent.GetPtr());
	check(NoesisPasswordBox);
	NoesisPasswordBox->SetPassword(StringCast<NsChar>(*InPassword).Get());
}

	void UNoesisGuiPasswordBox::PasswordChanged_Private(Noesis::Core::BaseComponent* InSender, const Noesis::RoutedEventArgs& InArgs)
{
	if (!Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisGuiBaseComponent* Sender = CastChecked<UNoesisGuiBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisGuiRoutedEventArgs Args(Instance, InArgs);
	PasswordChanged.Broadcast(Sender, Args);
}

	void UNoesisGuiPasswordBox::BeginDestroy()
{
	Noesis::Gui::PasswordBox* NoesisPasswordBox = NsDynamicCast<Noesis::Gui::PasswordBox*>(NoesisComponent.GetPtr());
	if (!NoesisPasswordBox)
		return Super::BeginDestroy();

	NoesisPasswordBox->PasswordChanged() -= PasswordChanged_Delegate;

	Super::BeginDestroy();
}

