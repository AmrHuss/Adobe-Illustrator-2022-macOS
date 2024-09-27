#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Cheat_Tab_PlayerCharacter

#include "Basic.hpp"

#include "UI_Cheat_Tab_PlayerCharacter_classes.hpp"
#include "UI_Cheat_Tab_PlayerCharacter_parameters.hpp"


namespace SDK
{

// Function UI_Cheat_Tab_PlayerCharacter.UI_Cheat_Tab_PlayerCharacter_C.ExecuteUbergraph_UI_Cheat_Tab_PlayerCharacter
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Cheat_Tab_PlayerCharacter_C::ExecuteUbergraph_UI_Cheat_Tab_PlayerCharacter(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Cheat_Tab_PlayerCharacter_C", "ExecuteUbergraph_UI_Cheat_Tab_PlayerCharacter");

	Params::UI_Cheat_Tab_PlayerCharacter_C_ExecuteUbergraph_UI_Cheat_Tab_PlayerCharacter Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Cheat_Tab_PlayerCharacter.UI_Cheat_Tab_PlayerCharacter_C.Cheat button player character unhovered
// (BlueprintCallable, BlueprintEvent)

void UUI_Cheat_Tab_PlayerCharacter_C::Cheat_button_player_character_unhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Cheat_Tab_PlayerCharacter_C", "Cheat button player character unhovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Cheat_Tab_PlayerCharacter.UI_Cheat_Tab_PlayerCharacter_C.Cheat button player character hovered
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Cheat_Button_Player_C*        Hovered_cheat_widget                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Cheat_Tab_PlayerCharacter_C::Cheat_button_player_character_hovered(const class UUI_Cheat_Button_Player_C*& Hovered_cheat_widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Cheat_Tab_PlayerCharacter_C", "Cheat button player character hovered");

	Params::UI_Cheat_Tab_PlayerCharacter_C_Cheat_button_player_character_hovered Parms{};

	Parms.Hovered_cheat_widget = Hovered_cheat_widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Cheat_Tab_PlayerCharacter.UI_Cheat_Tab_PlayerCharacter_C.Create button for cheat widget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FF_CheatButton_Player            Cheat_button_structure                                 (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)

void UUI_Cheat_Tab_PlayerCharacter_C::Create_button_for_cheat_widget(const struct FF_CheatButton_Player& Cheat_button_structure)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Cheat_Tab_PlayerCharacter_C", "Create button for cheat widget");

	Params::UI_Cheat_Tab_PlayerCharacter_C_Create_button_for_cheat_widget Parms{};

	Parms.Cheat_button_structure = std::move(Cheat_button_structure);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Cheat_Tab_PlayerCharacter.UI_Cheat_Tab_PlayerCharacter_C.Initialize cheat tab
// (BlueprintCallable, BlueprintEvent)

void UUI_Cheat_Tab_PlayerCharacter_C::Initialize_cheat_tab()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Cheat_Tab_PlayerCharacter_C", "Initialize cheat tab");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_Cheat_Tab_PlayerCharacter.UI_Cheat_Tab_PlayerCharacter_C.Toggle HUD
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Is_Checked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Cheat_Tab_PlayerCharacter_C::Toggle_HUD(bool Is_Checked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Cheat_Tab_PlayerCharacter_C", "Toggle HUD");

	Params::UI_Cheat_Tab_PlayerCharacter_C_Toggle_HUD Parms{};

	Parms.Is_Checked = Is_Checked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Cheat_Tab_PlayerCharacter.UI_Cheat_Tab_PlayerCharacter_C.GetWidgetToFocus
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UUI_Cheat_Tab_PlayerCharacter_C::GetWidgetToFocus() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Cheat_Tab_PlayerCharacter_C", "GetWidgetToFocus");

	Params::UI_Cheat_Tab_PlayerCharacter_C_GetWidgetToFocus Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

