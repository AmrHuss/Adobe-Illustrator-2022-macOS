#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Cheat_Tab_PlayerCharacter

#include "Basic.hpp"

#include "F_CheatButton_Player_structs.hpp"


namespace SDK::Params
{

// Function UI_Cheat_Tab_PlayerCharacter.UI_Cheat_Tab_PlayerCharacter_C.ExecuteUbergraph_UI_Cheat_Tab_PlayerCharacter
// 0x0168 (0x0168 - 0x0000)
struct UI_Cheat_Tab_PlayerCharacter_C_ExecuteUbergraph_UI_Cheat_Tab_PlayerCharacter final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FF_CheatButton_Player                  K2Node_CustomEvent_Cheat_button_structure;         // 0x0010(0x0080)(ContainsInstancedReference, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_Cheat_Button_Player_C*              CallFunc_Create_ReturnValue;                       // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUniformGridSlot*                       CallFunc_AddChildToUniformGrid_ReturnValue;        // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A9[0x3];                                       // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FF_CheatButton_Player                  CallFunc_Array_Get_Item;                           // 0x00B8(0x0080)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_139[0x7];                                      // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0140(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0151(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_152[0x6];                                      // 0x0152(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue_1;            // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UUI_Cheat_Button_Player_C*        K2Node_CustomEvent_Hovered_cheat_widget;           // 0x0160(0x0008)(ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Cheat_Tab_PlayerCharacter_C_ExecuteUbergraph_UI_Cheat_Tab_PlayerCharacter) == 0x000008, "Wrong alignment on UI_Cheat_Tab_PlayerCharacter_C_ExecuteUbergraph_UI_Cheat_Tab_PlayerCharacter");
static_assert(sizeof(UI_Cheat_Tab_PlayerCharacter_C_ExecuteUbergraph_UI_Cheat_Tab_PlayerCharacter) == 0x000168, "Wrong size on UI_Cheat_Tab_PlayerCharacter_C_ExecuteUbergraph_UI_Cheat_Tab_PlayerCharacter");
static_assert(offsetof(UI_Cheat_Tab_PlayerCharacter_C_ExecuteUbergraph_UI_Cheat_Tab_PlayerCharacter, EntryPoint) == 0x000000, "Member 'UI_Cheat_Tab_PlayerCharacter_C_ExecuteUbergraph_UI_Cheat_Tab_PlayerCharacter::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_Cheat_Tab_PlayerCharacter_C_ExecuteUbergraph_UI_Cheat_Tab_PlayerCharacter, Temp_int_Array_Index_Variable) == 0x000004, "Member 'UI_Cheat_Tab_PlayerCharacter_C_ExecuteUbergraph_UI_Cheat_Tab_PlayerCharacter::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UI_Cheat_Tab_PlayerCharacter_C_ExecuteUbergraph_UI_Cheat_Tab_PlayerCharacter, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'UI_Cheat_Tab_PlayerCharacter_C_ExecuteUbergraph_UI_Cheat_Tab_PlayerCharacter::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UI_Cheat_Tab_PlayerCharacter_C_ExecuteUbergraph_UI_Cheat_Tab_PlayerCharacter, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'UI_Cheat_Tab_PlayerCharacter_C_ExecuteUbergraph_UI_Cheat_Tab_PlayerCharacter::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Cheat_Tab_PlayerCharacter_C_ExecuteUbergraph_UI_Cheat_Tab_PlayerCharacter, K2Node_CustomEvent_Cheat_button_structure) == 0x000010, "Member 'UI_Cheat_Tab_PlayerCharacter_C_ExecuteUbergraph_UI_Cheat_Tab_PlayerCharacter::K2Node_CustomEvent_Cheat_button_structure' has a wrong offset!");
static_assert(offsetof(UI_Cheat_Tab_PlayerCharacter_C_ExecuteUbergraph_UI_Cheat_Tab_PlayerCharacter, CallFunc_GetOwningPlayer_ReturnValue) == 0x000090, "Member 'UI_Cheat_Tab_PlayerCharacter_C_ExecuteUbergraph_UI_Cheat_Tab_PlayerCharacter::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Cheat_Tab_PlayerCharacter_C_ExecuteUbergraph_UI_Cheat_Tab_PlayerCharacter, CallFunc_Create_ReturnValue) == 0x000098, "Member 'UI_Cheat_Tab_PlayerCharacter_C_ExecuteUbergraph_UI_Cheat_Tab_PlayerCharacter::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Cheat_Tab_PlayerCharacter_C_ExecuteUbergraph_UI_Cheat_Tab_PlayerCharacter, CallFunc_AddChildToUniformGrid_ReturnValue) == 0x0000A0, "Member 'UI_Cheat_Tab_PlayerCharacter_C_ExecuteUbergraph_UI_Cheat_Tab_PlayerCharacter::CallFunc_AddChildToUniformGrid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Cheat_Tab_PlayerCharacter_C_ExecuteUbergraph_UI_Cheat_Tab_PlayerCharacter, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x0000A8, "Member 'UI_Cheat_Tab_PlayerCharacter_C_ExecuteUbergraph_UI_Cheat_Tab_PlayerCharacter::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Cheat_Tab_PlayerCharacter_C_ExecuteUbergraph_UI_Cheat_Tab_PlayerCharacter, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000AC, "Member 'UI_Cheat_Tab_PlayerCharacter_C_ExecuteUbergraph_UI_Cheat_Tab_PlayerCharacter::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Cheat_Tab_PlayerCharacter_C_ExecuteUbergraph_UI_Cheat_Tab_PlayerCharacter, CallFunc_Add_IntInt_ReturnValue_2) == 0x0000B0, "Member 'UI_Cheat_Tab_PlayerCharacter_C_ExecuteUbergraph_UI_Cheat_Tab_PlayerCharacter::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_Cheat_Tab_PlayerCharacter_C_ExecuteUbergraph_UI_Cheat_Tab_PlayerCharacter, CallFunc_Array_Add_ReturnValue) == 0x0000B4, "Member 'UI_Cheat_Tab_PlayerCharacter_C_ExecuteUbergraph_UI_Cheat_Tab_PlayerCharacter::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Cheat_Tab_PlayerCharacter_C_ExecuteUbergraph_UI_Cheat_Tab_PlayerCharacter, CallFunc_Array_Get_Item) == 0x0000B8, "Member 'UI_Cheat_Tab_PlayerCharacter_C_ExecuteUbergraph_UI_Cheat_Tab_PlayerCharacter::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UI_Cheat_Tab_PlayerCharacter_C_ExecuteUbergraph_UI_Cheat_Tab_PlayerCharacter, CallFunc_IsValid_ReturnValue) == 0x000138, "Member 'UI_Cheat_Tab_PlayerCharacter_C_ExecuteUbergraph_UI_Cheat_Tab_PlayerCharacter::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Cheat_Tab_PlayerCharacter_C_ExecuteUbergraph_UI_Cheat_Tab_PlayerCharacter, CallFunc_GetChildAt_ReturnValue) == 0x000140, "Member 'UI_Cheat_Tab_PlayerCharacter_C_ExecuteUbergraph_UI_Cheat_Tab_PlayerCharacter::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Cheat_Tab_PlayerCharacter_C_ExecuteUbergraph_UI_Cheat_Tab_PlayerCharacter, CallFunc_Array_Length_ReturnValue) == 0x000148, "Member 'UI_Cheat_Tab_PlayerCharacter_C_ExecuteUbergraph_UI_Cheat_Tab_PlayerCharacter::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Cheat_Tab_PlayerCharacter_C_ExecuteUbergraph_UI_Cheat_Tab_PlayerCharacter, CallFunc_Array_Length_ReturnValue_1) == 0x00014C, "Member 'UI_Cheat_Tab_PlayerCharacter_C_ExecuteUbergraph_UI_Cheat_Tab_PlayerCharacter::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Cheat_Tab_PlayerCharacter_C_ExecuteUbergraph_UI_Cheat_Tab_PlayerCharacter, CallFunc_Less_IntInt_ReturnValue) == 0x000150, "Member 'UI_Cheat_Tab_PlayerCharacter_C_ExecuteUbergraph_UI_Cheat_Tab_PlayerCharacter::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Cheat_Tab_PlayerCharacter_C_ExecuteUbergraph_UI_Cheat_Tab_PlayerCharacter, CallFunc_Greater_IntInt_ReturnValue) == 0x000151, "Member 'UI_Cheat_Tab_PlayerCharacter_C_ExecuteUbergraph_UI_Cheat_Tab_PlayerCharacter::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Cheat_Tab_PlayerCharacter_C_ExecuteUbergraph_UI_Cheat_Tab_PlayerCharacter, CallFunc_GetOwningPlayer_ReturnValue_1) == 0x000158, "Member 'UI_Cheat_Tab_PlayerCharacter_C_ExecuteUbergraph_UI_Cheat_Tab_PlayerCharacter::CallFunc_GetOwningPlayer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Cheat_Tab_PlayerCharacter_C_ExecuteUbergraph_UI_Cheat_Tab_PlayerCharacter, K2Node_CustomEvent_Hovered_cheat_widget) == 0x000160, "Member 'UI_Cheat_Tab_PlayerCharacter_C_ExecuteUbergraph_UI_Cheat_Tab_PlayerCharacter::K2Node_CustomEvent_Hovered_cheat_widget' has a wrong offset!");

// Function UI_Cheat_Tab_PlayerCharacter.UI_Cheat_Tab_PlayerCharacter_C.Cheat button player character hovered
// 0x0008 (0x0008 - 0x0000)
struct UI_Cheat_Tab_PlayerCharacter_C_Cheat_button_player_character_hovered final
{
public:
	const class UUI_Cheat_Button_Player_C*        Hovered_cheat_widget;                              // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Cheat_Tab_PlayerCharacter_C_Cheat_button_player_character_hovered) == 0x000008, "Wrong alignment on UI_Cheat_Tab_PlayerCharacter_C_Cheat_button_player_character_hovered");
static_assert(sizeof(UI_Cheat_Tab_PlayerCharacter_C_Cheat_button_player_character_hovered) == 0x000008, "Wrong size on UI_Cheat_Tab_PlayerCharacter_C_Cheat_button_player_character_hovered");
static_assert(offsetof(UI_Cheat_Tab_PlayerCharacter_C_Cheat_button_player_character_hovered, Hovered_cheat_widget) == 0x000000, "Member 'UI_Cheat_Tab_PlayerCharacter_C_Cheat_button_player_character_hovered::Hovered_cheat_widget' has a wrong offset!");

// Function UI_Cheat_Tab_PlayerCharacter.UI_Cheat_Tab_PlayerCharacter_C.Create button for cheat widget
// 0x0080 (0x0080 - 0x0000)
struct UI_Cheat_Tab_PlayerCharacter_C_Create_button_for_cheat_widget final
{
public:
	struct FF_CheatButton_Player                  Cheat_button_structure;                            // 0x0000(0x0080)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};
static_assert(alignof(UI_Cheat_Tab_PlayerCharacter_C_Create_button_for_cheat_widget) == 0x000008, "Wrong alignment on UI_Cheat_Tab_PlayerCharacter_C_Create_button_for_cheat_widget");
static_assert(sizeof(UI_Cheat_Tab_PlayerCharacter_C_Create_button_for_cheat_widget) == 0x000080, "Wrong size on UI_Cheat_Tab_PlayerCharacter_C_Create_button_for_cheat_widget");
static_assert(offsetof(UI_Cheat_Tab_PlayerCharacter_C_Create_button_for_cheat_widget, Cheat_button_structure) == 0x000000, "Member 'UI_Cheat_Tab_PlayerCharacter_C_Create_button_for_cheat_widget::Cheat_button_structure' has a wrong offset!");

// Function UI_Cheat_Tab_PlayerCharacter.UI_Cheat_Tab_PlayerCharacter_C.Toggle HUD
// 0x0050 (0x0050 - 0x0000)
struct UI_Cheat_Tab_PlayerCharacter_C_Toggle_HUD final
{
public:
	bool                                          Is_Checked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUI_HUD_C*                              CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UUI_HUD_C*>                      CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x0018(0x0010)(ReferenceParm, ContainsInstancedReference)
	class ABP_PlayerController_Script_C*          K2Node_DynamicCast_AsBP_Player_Controller_Script;  // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUI_HUD_C*                              CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_Cheat_Tab_PlayerCharacter_C_Toggle_HUD) == 0x000008, "Wrong alignment on UI_Cheat_Tab_PlayerCharacter_C_Toggle_HUD");
static_assert(sizeof(UI_Cheat_Tab_PlayerCharacter_C_Toggle_HUD) == 0x000050, "Wrong size on UI_Cheat_Tab_PlayerCharacter_C_Toggle_HUD");
static_assert(offsetof(UI_Cheat_Tab_PlayerCharacter_C_Toggle_HUD, Is_Checked) == 0x000000, "Member 'UI_Cheat_Tab_PlayerCharacter_C_Toggle_HUD::Is_Checked' has a wrong offset!");
static_assert(offsetof(UI_Cheat_Tab_PlayerCharacter_C_Toggle_HUD, CallFunc_Create_ReturnValue) == 0x000008, "Member 'UI_Cheat_Tab_PlayerCharacter_C_Toggle_HUD::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Cheat_Tab_PlayerCharacter_C_Toggle_HUD, CallFunc_GetOwningPlayer_ReturnValue) == 0x000010, "Member 'UI_Cheat_Tab_PlayerCharacter_C_Toggle_HUD::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Cheat_Tab_PlayerCharacter_C_Toggle_HUD, CallFunc_GetAllWidgetsOfClass_FoundWidgets) == 0x000018, "Member 'UI_Cheat_Tab_PlayerCharacter_C_Toggle_HUD::CallFunc_GetAllWidgetsOfClass_FoundWidgets' has a wrong offset!");
static_assert(offsetof(UI_Cheat_Tab_PlayerCharacter_C_Toggle_HUD, K2Node_DynamicCast_AsBP_Player_Controller_Script) == 0x000028, "Member 'UI_Cheat_Tab_PlayerCharacter_C_Toggle_HUD::K2Node_DynamicCast_AsBP_Player_Controller_Script' has a wrong offset!");
static_assert(offsetof(UI_Cheat_Tab_PlayerCharacter_C_Toggle_HUD, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'UI_Cheat_Tab_PlayerCharacter_C_Toggle_HUD::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_Cheat_Tab_PlayerCharacter_C_Toggle_HUD, CallFunc_Array_Get_Item) == 0x000038, "Member 'UI_Cheat_Tab_PlayerCharacter_C_Toggle_HUD::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UI_Cheat_Tab_PlayerCharacter_C_Toggle_HUD, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'UI_Cheat_Tab_PlayerCharacter_C_Toggle_HUD::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Cheat_Tab_PlayerCharacter_C_Toggle_HUD, CallFunc_Array_Length_ReturnValue) == 0x000044, "Member 'UI_Cheat_Tab_PlayerCharacter_C_Toggle_HUD::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Cheat_Tab_PlayerCharacter_C_Toggle_HUD, CallFunc_Greater_IntInt_ReturnValue) == 0x000048, "Member 'UI_Cheat_Tab_PlayerCharacter_C_Toggle_HUD::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function UI_Cheat_Tab_PlayerCharacter.UI_Cheat_Tab_PlayerCharacter_C.GetWidgetToFocus
// 0x0028 (0x0028 - 0x0000)
struct UI_Cheat_Tab_PlayerCharacter_C_GetWidgetToFocus final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_Cheat_Button_Player_C*              K2Node_DynamicCast_AsUI_Cheat_Button_Player;       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_Cheat_Tab_PlayerCharacter_C_GetWidgetToFocus) == 0x000008, "Wrong alignment on UI_Cheat_Tab_PlayerCharacter_C_GetWidgetToFocus");
static_assert(sizeof(UI_Cheat_Tab_PlayerCharacter_C_GetWidgetToFocus) == 0x000028, "Wrong size on UI_Cheat_Tab_PlayerCharacter_C_GetWidgetToFocus");
static_assert(offsetof(UI_Cheat_Tab_PlayerCharacter_C_GetWidgetToFocus, ReturnValue) == 0x000000, "Member 'UI_Cheat_Tab_PlayerCharacter_C_GetWidgetToFocus::ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Cheat_Tab_PlayerCharacter_C_GetWidgetToFocus, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'UI_Cheat_Tab_PlayerCharacter_C_GetWidgetToFocus::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Cheat_Tab_PlayerCharacter_C_GetWidgetToFocus, CallFunc_GetChildAt_ReturnValue) == 0x000010, "Member 'UI_Cheat_Tab_PlayerCharacter_C_GetWidgetToFocus::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Cheat_Tab_PlayerCharacter_C_GetWidgetToFocus, K2Node_DynamicCast_AsUI_Cheat_Button_Player) == 0x000018, "Member 'UI_Cheat_Tab_PlayerCharacter_C_GetWidgetToFocus::K2Node_DynamicCast_AsUI_Cheat_Button_Player' has a wrong offset!");
static_assert(offsetof(UI_Cheat_Tab_PlayerCharacter_C_GetWidgetToFocus, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'UI_Cheat_Tab_PlayerCharacter_C_GetWidgetToFocus::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_Cheat_Tab_PlayerCharacter_C_GetWidgetToFocus, CallFunc_IsValid_ReturnValue_1) == 0x000021, "Member 'UI_Cheat_Tab_PlayerCharacter_C_GetWidgetToFocus::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Cheat_Tab_PlayerCharacter_C_GetWidgetToFocus, CallFunc_IsValid_ReturnValue_2) == 0x000022, "Member 'UI_Cheat_Tab_PlayerCharacter_C_GetWidgetToFocus::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

}

