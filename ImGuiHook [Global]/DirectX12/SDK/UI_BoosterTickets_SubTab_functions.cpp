#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_BoosterTickets_SubTab

#include "Basic.hpp"

#include "UI_BoosterTickets_SubTab_classes.hpp"
#include "UI_BoosterTickets_SubTab_parameters.hpp"


namespace SDK
{

// Function UI_BoosterTickets_SubTab.UI_BoosterTickets_SubTab_C.ExecuteUbergraph_UI_BoosterTickets_SubTab
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_BoosterTickets_SubTab_C::ExecuteUbergraph_UI_BoosterTickets_SubTab(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BoosterTickets_SubTab_C", "ExecuteUbergraph_UI_BoosterTickets_SubTab");

	Params::UI_BoosterTickets_SubTab_C_ExecuteUbergraph_UI_BoosterTickets_SubTab Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_BoosterTickets_SubTab.UI_BoosterTickets_SubTab_C.UpdateLobbyTicketsTitleSizes
// (BlueprintCallable, BlueprintEvent)

void UUI_BoosterTickets_SubTab_C::UpdateLobbyTicketsTitleSizes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BoosterTickets_SubTab_C", "UpdateLobbyTicketsTitleSizes");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_BoosterTickets_SubTab.UI_BoosterTickets_SubTab_C.ScrollDescription
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   AxisValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_BoosterTickets_SubTab_C::ScrollDescription(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BoosterTickets_SubTab_C", "ScrollDescription");

	Params::UI_BoosterTickets_SubTab_C_ScrollDescription Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_BoosterTickets_SubTab.UI_BoosterTickets_SubTab_C.OnResetToDefaultState
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_BoosterTickets_SubTab_C::OnResetToDefaultState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BoosterTickets_SubTab_C", "OnResetToDefaultState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_BoosterTickets_SubTab.UI_BoosterTickets_SubTab_C.BndEvt__UI_BoosterTickets_SubTab_Input_ApplyTicket_K2Node_ComponentBoundEvent_6_OnActionPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_BoosterTickets_SubTab_C::BndEvt__UI_BoosterTickets_SubTab_Input_ApplyTicket_K2Node_ComponentBoundEvent_6_OnActionPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BoosterTickets_SubTab_C", "BndEvt__UI_BoosterTickets_SubTab_Input_ApplyTicket_K2Node_ComponentBoundEvent_6_OnActionPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_BoosterTickets_SubTab.UI_BoosterTickets_SubTab_C.BndEvt__UI_BoosterTickets_SubTab_Input_Cancel_K2Node_ComponentBoundEvent_4_OnClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_BoosterTickets_SubTab_C::BndEvt__UI_BoosterTickets_SubTab_Input_Cancel_K2Node_ComponentBoundEvent_4_OnClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BoosterTickets_SubTab_C", "BndEvt__UI_BoosterTickets_SubTab_Input_Cancel_K2Node_ComponentBoundEvent_4_OnClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_BoosterTickets_SubTab.UI_BoosterTickets_SubTab_C.BndEvt__Input_MoreInfo_K2Node_ComponentBoundEvent_4_OnActionReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_BoosterTickets_SubTab_C::BndEvt__Input_MoreInfo_K2Node_ComponentBoundEvent_4_OnActionReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BoosterTickets_SubTab_C", "BndEvt__Input_MoreInfo_K2Node_ComponentBoundEvent_4_OnActionReleasedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_BoosterTickets_SubTab.UI_BoosterTickets_SubTab_C.ReturnFromOnboarding
// (BlueprintCallable, BlueprintEvent)

void UUI_BoosterTickets_SubTab_C::ReturnFromOnboarding()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BoosterTickets_SubTab_C", "ReturnFromOnboarding");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_BoosterTickets_SubTab.UI_BoosterTickets_SubTab_C.OpenTicketApplyMenu
// (BlueprintCallable, BlueprintEvent)

void UUI_BoosterTickets_SubTab_C::OpenTicketApplyMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BoosterTickets_SubTab_C", "OpenTicketApplyMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_BoosterTickets_SubTab.UI_BoosterTickets_SubTab_C.OpenTicketActivationMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   OwnedTicketCount                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           TicketBoosterClass                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_BoosterTickets_SubTab_C::OpenTicketActivationMenu(int32 OwnedTicketCount, class UClass* TicketBoosterClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BoosterTickets_SubTab_C", "OpenTicketActivationMenu");

	Params::UI_BoosterTickets_SubTab_C_OpenTicketActivationMenu Parms{};

	Parms.OwnedTicketCount = OwnedTicketCount;
	Parms.TicketBoosterClass = TicketBoosterClass;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_BoosterTickets_SubTab.UI_BoosterTickets_SubTab_C.Remove Ticket Apply Sub Menu
// (BlueprintCallable, BlueprintEvent)

void UUI_BoosterTickets_SubTab_C::Remove_Ticket_Apply_Sub_Menu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BoosterTickets_SubTab_C", "Remove Ticket Apply Sub Menu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_BoosterTickets_SubTab.UI_BoosterTickets_SubTab_C.ActivateBoosterTicketsFinished_Event
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCloudRequestResult              RequestResult                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FBoosterDetails                  Data                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_BoosterTickets_SubTab_C::ActivateBoosterTicketsFinished_Event(const struct FCloudRequestResult& RequestResult, const struct FBoosterDetails& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BoosterTickets_SubTab_C", "ActivateBoosterTicketsFinished_Event");

	Params::UI_BoosterTickets_SubTab_C_ActivateBoosterTicketsFinished_Event Parms{};

	Parms.RequestResult = std::move(RequestResult);
	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_BoosterTickets_SubTab.UI_BoosterTickets_SubTab_C.ActivateBoosterTickets
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           BoosterTicketSku                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   Count                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_BoosterTickets_SubTab_C::ActivateBoosterTickets(const class FString& BoosterTicketSku, int32 Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BoosterTickets_SubTab_C", "ActivateBoosterTickets");

	Params::UI_BoosterTickets_SubTab_C_ActivateBoosterTickets Parms{};

	Parms.BoosterTicketSku = std::move(BoosterTicketSku);
	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_BoosterTickets_SubTab.UI_BoosterTickets_SubTab_C.RemoveIdleWidget
// (BlueprintCallable, BlueprintEvent)

void UUI_BoosterTickets_SubTab_C::RemoveIdleWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BoosterTickets_SubTab_C", "RemoveIdleWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_BoosterTickets_SubTab.UI_BoosterTickets_SubTab_C.CreateIdleWidget
// (BlueprintCallable, BlueprintEvent)

void UUI_BoosterTickets_SubTab_C::CreateIdleWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BoosterTickets_SubTab_C", "CreateIdleWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_BoosterTickets_SubTab.UI_BoosterTickets_SubTab_C.FocusTicketIfNeeded
// (BlueprintCallable, BlueprintEvent)

void UUI_BoosterTickets_SubTab_C::FocusTicketIfNeeded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BoosterTickets_SubTab_C", "FocusTicketIfNeeded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_BoosterTickets_SubTab.UI_BoosterTickets_SubTab_C.InitializeTicketWidgets
// (BlueprintCallable, BlueprintEvent)

void UUI_BoosterTickets_SubTab_C::InitializeTicketWidgets()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BoosterTickets_SubTab_C", "InitializeTicketWidgets");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_BoosterTickets_SubTab.UI_BoosterTickets_SubTab_C.JumpIntoShop
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           CosmeticShopDesiredItemToShowcase                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_BoosterTickets_SubTab_C::JumpIntoShop(class UClass* CosmeticShopDesiredItemToShowcase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BoosterTickets_SubTab_C", "JumpIntoShop");

	Params::UI_BoosterTickets_SubTab_C_JumpIntoShop Parms{};

	Parms.CosmeticShopDesiredItemToShowcase = CosmeticShopDesiredItemToShowcase;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_BoosterTickets_SubTab.UI_BoosterTickets_SubTab_C.BndEvt__Input_SeeInShop_K2Node_ComponentBoundEvent_2_OnActionPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_BoosterTickets_SubTab_C::BndEvt__Input_SeeInShop_K2Node_ComponentBoundEvent_2_OnActionPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BoosterTickets_SubTab_C", "BndEvt__Input_SeeInShop_K2Node_ComponentBoundEvent_2_OnActionPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_BoosterTickets_SubTab.UI_BoosterTickets_SubTab_C.TicketPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButton*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_BoosterTickets_SubTab_C::TicketPressed(class UButton* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BoosterTickets_SubTab_C", "TicketPressed");

	Params::UI_BoosterTickets_SubTab_C_TicketPressed Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_BoosterTickets_SubTab.UI_BoosterTickets_SubTab_C.OnTicketCategoryButtonFocused
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UListButtonWidget*                Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_BoosterTickets_SubTab_C::OnTicketCategoryButtonFocused(class UListButtonWidget* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BoosterTickets_SubTab_C", "OnTicketCategoryButtonFocused");

	Params::UI_BoosterTickets_SubTab_C_OnTicketCategoryButtonFocused Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_BoosterTickets_SubTab.UI_BoosterTickets_SubTab_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_BoosterTickets_SubTab_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BoosterTickets_SubTab_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_BoosterTickets_SubTab.UI_BoosterTickets_SubTab_C.Unbind Ticket button events
// (BlueprintCallable, BlueprintEvent)

void UUI_BoosterTickets_SubTab_C::Unbind_Ticket_button_events()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BoosterTickets_SubTab_C", "Unbind Ticket button events");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_BoosterTickets_SubTab.UI_BoosterTickets_SubTab_C.TicketFocused
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButton*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_BoosterTickets_SubTab_C::TicketFocused(class UButton* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BoosterTickets_SubTab_C", "TicketFocused");

	Params::UI_BoosterTickets_SubTab_C_TicketFocused Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_BoosterTickets_SubTab.UI_BoosterTickets_SubTab_C.Bind events to ticket buttons
// (BlueprintCallable, BlueprintEvent)

void UUI_BoosterTickets_SubTab_C::Bind_events_to_ticket_buttons()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BoosterTickets_SubTab_C", "Bind events to ticket buttons");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_BoosterTickets_SubTab.UI_BoosterTickets_SubTab_C.BndEvt__Button_PersonalTickets_K2Node_ComponentBoundEvent_1_OnListButtonFocusEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UListButtonWidget*                Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_BoosterTickets_SubTab_C::BndEvt__Button_PersonalTickets_K2Node_ComponentBoundEvent_1_OnListButtonFocusEvent__DelegateSignature(class UListButtonWidget* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BoosterTickets_SubTab_C", "BndEvt__Button_PersonalTickets_K2Node_ComponentBoundEvent_1_OnListButtonFocusEvent__DelegateSignature");

	Params::UI_BoosterTickets_SubTab_C_BndEvt__Button_PersonalTickets_K2Node_ComponentBoundEvent_1_OnListButtonFocusEvent__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_BoosterTickets_SubTab.UI_BoosterTickets_SubTab_C.BndEvt__Button_LobbyTickets_K2Node_ComponentBoundEvent_0_OnListButtonFocusEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UListButtonWidget*                Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_BoosterTickets_SubTab_C::BndEvt__Button_LobbyTickets_K2Node_ComponentBoundEvent_0_OnListButtonFocusEvent__DelegateSignature(class UListButtonWidget* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BoosterTickets_SubTab_C", "BndEvt__Button_LobbyTickets_K2Node_ComponentBoundEvent_0_OnListButtonFocusEvent__DelegateSignature");

	Params::UI_BoosterTickets_SubTab_C_BndEvt__Button_LobbyTickets_K2Node_ComponentBoundEvent_0_OnListButtonFocusEvent__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_BoosterTickets_SubTab.UI_BoosterTickets_SubTab_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_BoosterTickets_SubTab_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BoosterTickets_SubTab_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_BoosterTickets_SubTab.UI_BoosterTickets_SubTab_C.Fake Focus Ticket Categories
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_BoosterTickets_SubTab_C::Fake_Focus_Ticket_Categories()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BoosterTickets_SubTab_C", "Fake Focus Ticket Categories");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_BoosterTickets_SubTab.UI_BoosterTickets_SubTab_C.Clear Fake Focus on Ticket Categories
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UListButtonWidget*                CategoryToIgnore                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_BoosterTickets_SubTab_C::Clear_Fake_Focus_on_Ticket_Categories(class UListButtonWidget* CategoryToIgnore)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BoosterTickets_SubTab_C", "Clear Fake Focus on Ticket Categories");

	Params::UI_BoosterTickets_SubTab_C_Clear_Fake_Focus_on_Ticket_Categories Parms{};

	Parms.CategoryToIgnore = CategoryToIgnore;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_BoosterTickets_SubTab.UI_BoosterTickets_SubTab_C.Update Input Buttons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    SeeInStoreAvailable                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    FocusedApplicableTicket                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    PlayerHasTicketInStash                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    ActiveDoubleXP_Event                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_BoosterTickets_SubTab_C::Update_Input_Buttons(bool SeeInStoreAvailable, bool FocusedApplicableTicket, bool PlayerHasTicketInStash, bool ActiveDoubleXP_Event)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BoosterTickets_SubTab_C", "Update Input Buttons");

	Params::UI_BoosterTickets_SubTab_C_Update_Input_Buttons Parms{};

	Parms.SeeInStoreAvailable = SeeInStoreAvailable;
	Parms.FocusedApplicableTicket = FocusedApplicableTicket;
	Parms.PlayerHasTicketInStash = PlayerHasTicketInStash;
	Parms.ActiveDoubleXP_Event = ActiveDoubleXP_Event;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_BoosterTickets_SubTab.UI_BoosterTickets_SubTab_C.FocusPersonalTickets
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UUI_BoosterTickets_SubTab_C::FocusPersonalTickets(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BoosterTickets_SubTab_C", "FocusPersonalTickets");

	Params::UI_BoosterTickets_SubTab_C_FocusPersonalTickets Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UI_BoosterTickets_SubTab.UI_BoosterTickets_SubTab_C.Focus Lobby Tickets
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UUI_BoosterTickets_SubTab_C::Focus_Lobby_Tickets(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BoosterTickets_SubTab_C", "Focus Lobby Tickets");

	Params::UI_BoosterTickets_SubTab_C_Focus_Lobby_Tickets Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UI_BoosterTickets_SubTab.UI_BoosterTickets_SubTab_C.GetWidgetToFocus
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UUI_BoosterTickets_SubTab_C::GetWidgetToFocus() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_BoosterTickets_SubTab_C", "GetWidgetToFocus");

	Params::UI_BoosterTickets_SubTab_C_GetWidgetToFocus Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

