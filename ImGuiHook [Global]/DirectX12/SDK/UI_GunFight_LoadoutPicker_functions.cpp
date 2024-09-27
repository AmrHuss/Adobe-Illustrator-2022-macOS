#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GunFight_LoadoutPicker

#include "Basic.hpp"

#include "UI_GunFight_LoadoutPicker_classes.hpp"
#include "UI_GunFight_LoadoutPicker_parameters.hpp"


namespace SDK
{

// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.LoadoutSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   LoadoutIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GunFight_LoadoutPicker_C::LoadoutSelected__DelegateSignature(int32 LoadoutIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "LoadoutSelected__DelegateSignature");

	Params::UI_GunFight_LoadoutPicker_C_LoadoutSelected__DelegateSignature Parms{};

	Parms.LoadoutIndex = LoadoutIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.LoadoutsPrepared__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_GunFight_LoadoutPicker_C::LoadoutsPrepared__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "LoadoutsPrepared__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.ExecuteUbergraph_UI_GunFight_LoadoutPicker
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GunFight_LoadoutPicker_C::ExecuteUbergraph_UI_GunFight_LoadoutPicker(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "ExecuteUbergraph_UI_GunFight_LoadoutPicker");

	Params::UI_GunFight_LoadoutPicker_C_ExecuteUbergraph_UI_GunFight_LoadoutPicker Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.BndEvt__UI_GunFight_LoadoutPicker_InputRight_arrow_1_K2Node_ComponentBoundEvent_2_OnActionReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_GunFight_LoadoutPicker_C::BndEvt__UI_GunFight_LoadoutPicker_InputRight_arrow_1_K2Node_ComponentBoundEvent_2_OnActionReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "BndEvt__UI_GunFight_LoadoutPicker_InputRight_arrow_1_K2Node_ComponentBoundEvent_2_OnActionReleasedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GunFight_LoadoutPicker_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "Tick");

	Params::UI_GunFight_LoadoutPicker_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.StartListeningClose
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PlayerIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EInputMode                              InputMode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GunFight_LoadoutPicker_C::StartListeningClose(int32 PlayerIndex, EInputMode InputMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "StartListeningClose");

	Params::UI_GunFight_LoadoutPicker_C_StartListeningClose Parms{};

	Parms.PlayerIndex = PlayerIndex;
	Parms.InputMode = InputMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.Close
// (BlueprintCallable, BlueprintEvent)

void UUI_GunFight_LoadoutPicker_C::Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.HandleGameMenuClose
// (BlueprintCallable, BlueprintEvent)

void UUI_GunFight_LoadoutPicker_C::HandleGameMenuClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "HandleGameMenuClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.BndEvt__UI_GunFight_LoadoutPicker_Input_Select_K2Node_ComponentBoundEvent_3_OnActionPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_GunFight_LoadoutPicker_C::BndEvt__UI_GunFight_LoadoutPicker_Input_Select_K2Node_ComponentBoundEvent_3_OnActionPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "BndEvt__UI_GunFight_LoadoutPicker_Input_Select_K2Node_ComponentBoundEvent_3_OnActionPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.ShowPickLoadoutWarning
// (BlueprintCallable, BlueprintEvent)

void UUI_GunFight_LoadoutPicker_C::ShowPickLoadoutWarning()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "ShowPickLoadoutWarning");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.CheckIfLocalPlayerIsGettingKicked
// (BlueprintCallable, BlueprintEvent)

void UUI_GunFight_LoadoutPicker_C::CheckIfLocalPlayerIsGettingKicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "CheckIfLocalPlayerIsGettingKicked");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMenuWidget*                      MenuWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GunFight_LoadoutPicker_C::CustomEvent_0(class UMenuWidget* MenuWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "CustomEvent_0");

	Params::UI_GunFight_LoadoutPicker_C_CustomEvent_0 Parms{};

	Parms.MenuWidget = MenuWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.OpenPlayerMenu
// (BlueprintCallable, BlueprintEvent)

void UUI_GunFight_LoadoutPicker_C::OpenPlayerMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "OpenPlayerMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.StopListeningForNavigation
// (BlueprintCallable, BlueprintEvent)

void UUI_GunFight_LoadoutPicker_C::StopListeningForNavigation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "StopListeningForNavigation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.DirectionLeft_Event
// (BlueprintCallable, BlueprintEvent)

void UUI_GunFight_LoadoutPicker_C::DirectionLeft_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "DirectionLeft_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.StartListeningForNavigation
// (BlueprintCallable, BlueprintEvent)

void UUI_GunFight_LoadoutPicker_C::StartListeningForNavigation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "StartListeningForNavigation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.PlayerMenuReleased
// (BlueprintCallable, BlueprintEvent)

void UUI_GunFight_LoadoutPicker_C::PlayerMenuReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "PlayerMenuReleased");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.StartListeningForPlayerMenuOpens
// (BlueprintCallable, BlueprintEvent)

void UUI_GunFight_LoadoutPicker_C::StartListeningForPlayerMenuOpens()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "StartListeningForPlayerMenuOpens");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.PlayErrorAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   LoadoutIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GunFight_LoadoutPicker_C::PlayErrorAnim(int32 LoadoutIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "PlayErrorAnim");

	Params::UI_GunFight_LoadoutPicker_C_PlayErrorAnim Parms{};

	Parms.LoadoutIndex = LoadoutIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.HC_Update
// (BlueprintCallable, BlueprintEvent)

void UUI_GunFight_LoadoutPicker_C::HC_Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "HC_Update");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.UpdateLoadoutWidgetPlayerCount
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   LoadoutIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   PlayerCount                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GunFight_LoadoutPicker_C::UpdateLoadoutWidgetPlayerCount(int32 LoadoutIndex, int32 PlayerCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "UpdateLoadoutWidgetPlayerCount");

	Params::UI_GunFight_LoadoutPicker_C_UpdateLoadoutWidgetPlayerCount Parms{};

	Parms.LoadoutIndex = LoadoutIndex;
	Parms.PlayerCount = PlayerCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.BndEvt__Input_BreakLock_K2Node_ComponentBoundEvent_1_OnActionPressedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_GunFight_LoadoutPicker_C::BndEvt__Input_BreakLock_K2Node_ComponentBoundEvent_1_OnActionPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "BndEvt__Input_BreakLock_K2Node_ComponentBoundEvent_1_OnActionPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.StartListeningForMoveStick
// (BlueprintCallable, BlueprintEvent)

void UUI_GunFight_LoadoutPicker_C::StartListeningForMoveStick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "StartListeningForMoveStick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.MoveRightInputEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   AxisValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GunFight_LoadoutPicker_C::MoveRightInputEvent(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "MoveRightInputEvent");

	Params::UI_GunFight_LoadoutPicker_C_MoveRightInputEvent Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.BndEvt__InputLeft_arrow_K2Node_ComponentBoundEvent_10_OnActionReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_GunFight_LoadoutPicker_C::BndEvt__InputLeft_arrow_K2Node_ComponentBoundEvent_10_OnActionReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "BndEvt__InputLeft_arrow_K2Node_ComponentBoundEvent_10_OnActionReleasedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.SetInputStartTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Reset                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_GunFight_LoadoutPicker_C::SetInputStartTime(bool Reset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "SetInputStartTime");

	Params::UI_GunFight_LoadoutPicker_C_SetInputStartTime Parms{};

	Parms.Reset = Reset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.OpenGameMenu
// (BlueprintCallable, BlueprintEvent)

void UUI_GunFight_LoadoutPicker_C::OpenGameMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "OpenGameMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.OnGameMenuClosed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFlameWidget*                     FlameWidget                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GunFight_LoadoutPicker_C::OnGameMenuClosed(class UFlameWidget* FlameWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "OnGameMenuClosed");

	Params::UI_GunFight_LoadoutPicker_C_OnGameMenuClosed Parms{};

	Parms.FlameWidget = FlameWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.GamemenuHolded
// (BlueprintCallable, BlueprintEvent)

void UUI_GunFight_LoadoutPicker_C::GamemenuHolded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "GamemenuHolded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.StartListeningForMenuOpens
// (BlueprintCallable, BlueprintEvent)

void UUI_GunFight_LoadoutPicker_C::StartListeningForMenuOpens()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "StartListeningForMenuOpens");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.GamemenuReleased
// (BlueprintCallable, BlueprintEvent)

void UUI_GunFight_LoadoutPicker_C::GamemenuReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "GamemenuReleased");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.GamemenuPressed
// (BlueprintCallable, BlueprintEvent)

void UUI_GunFight_LoadoutPicker_C::GamemenuPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "GamemenuPressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.TimeOutLock
// (BlueprintCallable, BlueprintEvent)

void UUI_GunFight_LoadoutPicker_C::TimeOutLock()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "TimeOutLock");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.FocusFirstLoadout
// (BlueprintCallable, BlueprintEvent)

void UUI_GunFight_LoadoutPicker_C::FocusFirstLoadout()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "FocusFirstLoadout");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.SetRemainingPreRoundTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   StartsIn                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GunFight_LoadoutPicker_C::SetRemainingPreRoundTime(int32 StartsIn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "SetRemainingPreRoundTime");

	Params::UI_GunFight_LoadoutPicker_C_SetRemainingPreRoundTime Parms{};

	Parms.StartsIn = StartsIn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_GunFight_LoadoutPicker_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.ShowLoadoutsDelayed
// (BlueprintCallable, BlueprintEvent)

void UUI_GunFight_LoadoutPicker_C::ShowLoadoutsDelayed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "ShowLoadoutsDelayed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.PutLoadoutOnCooldown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GunFight_LoadoutPicker_C::PutLoadoutOnCooldown(int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "PutLoadoutOnCooldown");

	Params::UI_GunFight_LoadoutPicker_C_PutLoadoutOnCooldown Parms{};

	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.Input_Allow
// (BlueprintCallable, BlueprintEvent)

void UUI_GunFight_LoadoutPicker_C::Input_Allow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "Input_Allow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.Input_Block
// (BlueprintCallable, BlueprintEvent)

void UUI_GunFight_LoadoutPicker_C::Input_Block()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "Input_Block");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.UpdateLoadoutState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   LoadoutIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EGunFight_LoadoutState                  State                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GunFight_LoadoutPicker_C::UpdateLoadoutState(int32 LoadoutIndex, EGunFight_LoadoutState State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "UpdateLoadoutState");

	Params::UI_GunFight_LoadoutPicker_C_UpdateLoadoutState Parms{};

	Parms.LoadoutIndex = LoadoutIndex;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.BndEvt__Input_BreakLock_K2Node_ComponentBoundEvent_17_OnActionHoldEvent__DelegateSignature
// (BlueprintEvent)

void UUI_GunFight_LoadoutPicker_C::BndEvt__Input_BreakLock_K2Node_ComponentBoundEvent_17_OnActionHoldEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "BndEvt__Input_BreakLock_K2Node_ComponentBoundEvent_17_OnActionHoldEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.LoadoutBreakLock
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Gunfight_LoadoutWidget_C*     Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GunFight_LoadoutPicker_C::LoadoutBreakLock(class UUI_Gunfight_LoadoutWidget_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "LoadoutBreakLock");

	Params::UI_GunFight_LoadoutPicker_C_LoadoutBreakLock Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_GunFight_LoadoutPicker_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "PreConstruct");

	Params::UI_GunFight_LoadoutPicker_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.LoadoutWidgetPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Gunfight_LoadoutWidget_C*     Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GunFight_LoadoutPicker_C::LoadoutWidgetPressed(class UUI_Gunfight_LoadoutWidget_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "LoadoutWidgetPressed");

	Params::UI_GunFight_LoadoutPicker_C_LoadoutWidgetPressed Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.LoadoutWidgetFocused
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Gunfight_LoadoutWidget_C*     Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GunFight_LoadoutPicker_C::LoadoutWidgetFocused(class UUI_Gunfight_LoadoutWidget_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "LoadoutWidgetFocused");

	Params::UI_GunFight_LoadoutPicker_C_LoadoutWidgetFocused Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_GunFight_LoadoutPicker_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.DesignTime_InitUI
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_GunFight_LoadoutPicker_C::DesignTime_InitUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "DesignTime_InitUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.GetAllLoadoutWidgets
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UUI_Gunfight_LoadoutWidget_C*>LoadoutWidgets_0                                       (Parm, OutParm, ContainsInstancedReference)

void UUI_GunFight_LoadoutPicker_C::GetAllLoadoutWidgets(TArray<class UUI_Gunfight_LoadoutWidget_C*>* LoadoutWidgets_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "GetAllLoadoutWidgets");

	Params::UI_GunFight_LoadoutPicker_C_GetAllLoadoutWidgets Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (LoadoutWidgets_0 != nullptr)
		*LoadoutWidgets_0 = std::move(Parms.LoadoutWidgets_0);
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.FillLoadoutWidgets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_GunFight_LoadoutPicker_C::FillLoadoutWidgets()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "FillLoadoutWidgets");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.GetAvailableLoadouts
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UUI_Gunfight_LoadoutWidget_C*>AvailableLoadoutWidgets                                (Parm, OutParm, ContainsInstancedReference)

void UUI_GunFight_LoadoutPicker_C::GetAvailableLoadouts(TArray<class UUI_Gunfight_LoadoutWidget_C*>* AvailableLoadoutWidgets)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "GetAvailableLoadouts");

	Params::UI_GunFight_LoadoutPicker_C_GetAvailableLoadouts Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AvailableLoadoutWidgets != nullptr)
		*AvailableLoadoutWidgets = std::move(Parms.AvailableLoadoutWidgets);
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.GetLoadoutWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Loadout_Index                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Gunfight_LoadoutWidget_C*     LoadoutWidget                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GunFight_LoadoutPicker_C::GetLoadoutWidget(int32 Loadout_Index, class UUI_Gunfight_LoadoutWidget_C** LoadoutWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "GetLoadoutWidget");

	Params::UI_GunFight_LoadoutPicker_C_GetLoadoutWidget Parms{};

	Parms.Loadout_Index = Loadout_Index;

	UObject::ProcessEvent(Func, &Parms);

	if (LoadoutWidget != nullptr)
		*LoadoutWidget = Parms.LoadoutWidget;
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.SetWidgetSwitcherIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GunFight_LoadoutPicker_C::SetWidgetSwitcherIndex(int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "SetWidgetSwitcherIndex");

	Params::UI_GunFight_LoadoutPicker_C_SetWidgetSwitcherIndex Parms{};

	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.GetWidgetSwitcherIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Index_0                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GunFight_LoadoutPicker_C::GetWidgetSwitcherIndex(int32* Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "GetWidgetSwitcherIndex");

	Params::UI_GunFight_LoadoutPicker_C_GetWidgetSwitcherIndex Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Index_0 != nullptr)
		*Index_0 = Parms.Index_0;
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.UpdateHC_Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CrownsBalance                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GunFight_LoadoutPicker_C::UpdateHC_Text(int32 CrownsBalance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "UpdateHC_Text");

	Params::UI_GunFight_LoadoutPicker_C_UpdateHC_Text Parms{};

	Parms.CrownsBalance = CrownsBalance;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.UpdateTicketCount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Count                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GunFight_LoadoutPicker_C::UpdateTicketCount(int32 Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "UpdateTicketCount");

	Params::UI_GunFight_LoadoutPicker_C_UpdateTicketCount Parms{};

	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.UpdateTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Time                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_GunFight_LoadoutPicker_C::UpdateTime(const class FText& Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "UpdateTime");

	Params::UI_GunFight_LoadoutPicker_C_UpdateTime Parms{};

	Parms.Time = std::move(Time);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.UpdateLoadoutHint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGunFight_LoadoutState                  LoadoutState                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GunFight_LoadoutPicker_C::UpdateLoadoutHint(EGunFight_LoadoutState LoadoutState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "UpdateLoadoutHint");

	Params::UI_GunFight_LoadoutPicker_C_UpdateLoadoutHint Parms{};

	Parms.LoadoutState = LoadoutState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.UpdateButtonVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGunFight_LoadoutState                  LoadoutState                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GunFight_LoadoutPicker_C::UpdateButtonVisibility(EGunFight_LoadoutState LoadoutState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "UpdateButtonVisibility");

	Params::UI_GunFight_LoadoutPicker_C_UpdateButtonVisibility Parms{};

	Parms.LoadoutState = LoadoutState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.OpenCheatMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_GunFight_LoadoutPicker_C::OpenCheatMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "OpenCheatMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.CustomLoadoutNavigationCooldown
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UUI_GunFight_LoadoutPicker_C::CustomLoadoutNavigationCooldown(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "CustomLoadoutNavigationCooldown");

	Params::UI_GunFight_LoadoutPicker_C_CustomLoadoutNavigationCooldown Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.GetAvailableHC
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   HC                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_GunFight_LoadoutPicker_C::GetAvailableHC(int32* HC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "GetAvailableHC");

	Params::UI_GunFight_LoadoutPicker_C_GetAvailableHC Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (HC != nullptr)
		*HC = Parms.HC;
}


// Function UI_GunFight_LoadoutPicker.UI_GunFight_LoadoutPicker_C.GetWidgetToFocus
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UUI_GunFight_LoadoutPicker_C::GetWidgetToFocus() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_GunFight_LoadoutPicker_C", "GetWidgetToFocus");

	Params::UI_GunFight_LoadoutPicker_C_GetWidgetToFocus Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

