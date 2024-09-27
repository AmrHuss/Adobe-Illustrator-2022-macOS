#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_WeaponWideListSlot

#include "Basic.hpp"

#include "UI_WeaponWideListSlot_classes.hpp"
#include "UI_WeaponWideListSlot_parameters.hpp"


namespace SDK
{

// Function UI_WeaponWideListSlot.UI_WeaponWideListSlot_C.ExecuteUbergraph_UI_WeaponWideListSlot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_WeaponWideListSlot_C::ExecuteUbergraph_UI_WeaponWideListSlot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_WeaponWideListSlot_C", "ExecuteUbergraph_UI_WeaponWideListSlot");

	Params::UI_WeaponWideListSlot_C_ExecuteUbergraph_UI_WeaponWideListSlot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_WeaponWideListSlot.UI_WeaponWideListSlot_C.OnInputChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PlayerIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EInputMode                              InputMode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_WeaponWideListSlot_C::OnInputChanged(int32 PlayerIndex, EInputMode InputMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_WeaponWideListSlot_C", "OnInputChanged");

	Params::UI_WeaponWideListSlot_C_OnInputChanged Parms{};

	Parms.PlayerIndex = PlayerIndex;
	Parms.InputMode = InputMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_WeaponWideListSlot.UI_WeaponWideListSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_WeaponWideListSlot_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_WeaponWideListSlot_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_WeaponWideListSlot.UI_WeaponWideListSlot_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_WeaponWideListSlot_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_WeaponWideListSlot_C", "OnMouseLeave");

	Params::UI_WeaponWideListSlot_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_WeaponWideListSlot.UI_WeaponWideListSlot_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_WeaponWideListSlot_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_WeaponWideListSlot_C", "OnMouseEnter");

	Params::UI_WeaponWideListSlot_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_WeaponWideListSlot.UI_WeaponWideListSlot_C.FocusCheckAgainFrameLater
// (BlueprintCallable, BlueprintEvent)

void UUI_WeaponWideListSlot_C::FocusCheckAgainFrameLater()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_WeaponWideListSlot_C", "FocusCheckAgainFrameLater");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_WeaponWideListSlot.UI_WeaponWideListSlot_C.UseCustomNavigationRules
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RuleIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_WeaponWideListSlot_C::UseCustomNavigationRules(int32 RuleIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_WeaponWideListSlot_C", "UseCustomNavigationRules");

	Params::UI_WeaponWideListSlot_C_UseCustomNavigationRules Parms{};

	Parms.RuleIndex = RuleIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_WeaponWideListSlot.UI_WeaponWideListSlot_C.OnTryFocusSlot
// (Event, Public, BlueprintEvent)

void UUI_WeaponWideListSlot_C::OnTryFocusSlot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_WeaponWideListSlot_C", "OnTryFocusSlot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_WeaponWideListSlot.UI_WeaponWideListSlot_C.OnItemChanged
// (Event, Public, BlueprintEvent)

void UUI_WeaponWideListSlot_C::OnItemChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_WeaponWideListSlot_C", "OnItemChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_WeaponWideListSlot.UI_WeaponWideListSlot_C.BndEvt__InteractButton_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UButton*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_WeaponWideListSlot_C::BndEvt__InteractButton_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature(class UButton* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_WeaponWideListSlot_C", "BndEvt__InteractButton_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature");

	Params::UI_WeaponWideListSlot_C_BndEvt__InteractButton_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_WeaponWideListSlot.UI_WeaponWideListSlot_C.BndEvt__InteractButton_K2Node_ComponentBoundEvent_82_OnButtonFocusEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UButton*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_WeaponWideListSlot_C::BndEvt__InteractButton_K2Node_ComponentBoundEvent_82_OnButtonFocusEvent__DelegateSignature(class UButton* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_WeaponWideListSlot_C", "BndEvt__InteractButton_K2Node_ComponentBoundEvent_82_OnButtonFocusEvent__DelegateSignature");

	Params::UI_WeaponWideListSlot_C_BndEvt__InteractButton_K2Node_ComponentBoundEvent_82_OnButtonFocusEvent__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_WeaponWideListSlot.UI_WeaponWideListSlot_C.BndEvt__FlameButton_0_K2Node_ComponentBoundEvent_37_OnButtonFocusEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UButton*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_WeaponWideListSlot_C::BndEvt__FlameButton_0_K2Node_ComponentBoundEvent_37_OnButtonFocusEvent__DelegateSignature(class UButton* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_WeaponWideListSlot_C", "BndEvt__FlameButton_0_K2Node_ComponentBoundEvent_37_OnButtonFocusEvent__DelegateSignature");

	Params::UI_WeaponWideListSlot_C_BndEvt__FlameButton_0_K2Node_ComponentBoundEvent_37_OnButtonFocusEvent__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_WeaponWideListSlot.UI_WeaponWideListSlot_C.UpdateItemCount
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_WeaponWideListSlot_C::UpdateItemCount()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_WeaponWideListSlot_C", "UpdateItemCount");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_WeaponWideListSlot.UI_WeaponWideListSlot_C.SetRowTint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                      Tint                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_WeaponWideListSlot_C::SetRowTint(const struct FSlateColor& Tint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_WeaponWideListSlot_C", "SetRowTint");

	Params::UI_WeaponWideListSlot_C_SetRowTint Parms{};

	Parms.Tint = std::move(Tint);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_WeaponWideListSlot.UI_WeaponWideListSlot_C.UpdateWeaponName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_WeaponWideListSlot_C::UpdateWeaponName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_WeaponWideListSlot_C", "UpdateWeaponName");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_WeaponWideListSlot.UI_WeaponWideListSlot_C.UpdateCaliber
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_WeaponWideListSlot_C::UpdateCaliber()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_WeaponWideListSlot_C", "UpdateCaliber");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_WeaponWideListSlot.UI_WeaponWideListSlot_C.UpdateWeaponBPName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_WeaponWideListSlot_C::UpdateWeaponBPName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_WeaponWideListSlot_C", "UpdateWeaponBPName");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_WeaponWideListSlot.UI_WeaponWideListSlot_C.UpdateItemOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ItemCountIn                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_WeaponWideListSlot_C::UpdateItemOpacity(int32 ItemCountIn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_WeaponWideListSlot_C", "UpdateItemOpacity");

	Params::UI_WeaponWideListSlot_C_UpdateItemOpacity Parms{};

	Parms.ItemCountIn = ItemCountIn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_WeaponWideListSlot.UI_WeaponWideListSlot_C.UpdateIndicators
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_WeaponWideListSlot_C::UpdateIndicators()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_WeaponWideListSlot_C", "UpdateIndicators");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_WeaponWideListSlot.UI_WeaponWideListSlot_C.HasAllPartsOBS
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                           WeaponPlanIn                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AStash*                           Stash                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUI_WeaponWideListSlot_C::HasAllPartsOBS(class UClass* WeaponPlanIn, class AStash* Stash)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_WeaponWideListSlot_C", "HasAllPartsOBS");

	Params::UI_WeaponWideListSlot_C_HasAllPartsOBS Parms{};

	Parms.WeaponPlanIn = WeaponPlanIn;
	Parms.Stash = Stash;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UI_WeaponWideListSlot.UI_WeaponWideListSlot_C.SetIndicatorColorOBS
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Condition                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                           WeaponPlanIn                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AStash*                           Stash                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_WeaponWideListSlot_C::SetIndicatorColorOBS(bool Condition, class UClass* WeaponPlanIn, class AStash* Stash)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_WeaponWideListSlot_C", "SetIndicatorColorOBS");

	Params::UI_WeaponWideListSlot_C_SetIndicatorColorOBS Parms{};

	Parms.Condition = Condition;
	Parms.WeaponPlanIn = WeaponPlanIn;
	Parms.Stash = Stash;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_WeaponWideListSlot.UI_WeaponWideListSlot_C.CN_CategoryExpandibles
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UUI_WeaponWideListSlot_C::CN_CategoryExpandibles(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_WeaponWideListSlot_C", "CN_CategoryExpandibles");

	Params::UI_WeaponWideListSlot_C_CN_CategoryExpandibles Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UI_WeaponWideListSlot.UI_WeaponWideListSlot_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UUI_WeaponWideListSlot_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_WeaponWideListSlot_C", "OnFocusReceived");

	Params::UI_WeaponWideListSlot_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UI_WeaponWideListSlot.UI_WeaponWideListSlot_C.Update Hover State
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_WeaponWideListSlot_C::Update_Hover_State()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_WeaponWideListSlot_C", "Update Hover State");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_WeaponWideListSlot.UI_WeaponWideListSlot_C.GetShelterStash
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_ShelterStash_C*               NewParam                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_WeaponWideListSlot_C::GetShelterStash(class UUI_ShelterStash_C** NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_WeaponWideListSlot_C", "GetShelterStash");

	Params::UI_WeaponWideListSlot_C_GetShelterStash Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function UI_WeaponWideListSlot.UI_WeaponWideListSlot_C.UpdateArrowVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsFocused                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_WeaponWideListSlot_C::UpdateArrowVisibility(bool IsFocused)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_WeaponWideListSlot_C", "UpdateArrowVisibility");

	Params::UI_WeaponWideListSlot_C_UpdateArrowVisibility Parms{};

	Parms.IsFocused = IsFocused;

	UObject::ProcessEvent(Func, &Parms);
}

}

