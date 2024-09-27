#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_BoosterSlot_Crate

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Flame_structs.hpp"


namespace SDK::Params
{

// Function UI_BoosterSlot_Crate.UI_BoosterSlot_Crate_C.ExecuteUbergraph_UI_BoosterSlot_Crate
// 0x0008 (0x0008 - 0x0000)
struct UI_BoosterSlot_Crate_C_ExecuteUbergraph_UI_BoosterSlot_Crate final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_BoosterSlot_Crate_C_ExecuteUbergraph_UI_BoosterSlot_Crate) == 0x000004, "Wrong alignment on UI_BoosterSlot_Crate_C_ExecuteUbergraph_UI_BoosterSlot_Crate");
static_assert(sizeof(UI_BoosterSlot_Crate_C_ExecuteUbergraph_UI_BoosterSlot_Crate) == 0x000008, "Wrong size on UI_BoosterSlot_Crate_C_ExecuteUbergraph_UI_BoosterSlot_Crate");
static_assert(offsetof(UI_BoosterSlot_Crate_C_ExecuteUbergraph_UI_BoosterSlot_Crate, EntryPoint) == 0x000000, "Member 'UI_BoosterSlot_Crate_C_ExecuteUbergraph_UI_BoosterSlot_Crate::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_BoosterSlot_Crate_C_ExecuteUbergraph_UI_BoosterSlot_Crate, K2Node_Event_IsDesignTime) == 0x000004, "Member 'UI_BoosterSlot_Crate_C_ExecuteUbergraph_UI_BoosterSlot_Crate::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function UI_BoosterSlot_Crate.UI_BoosterSlot_Crate_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_BoosterSlot_Crate_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_BoosterSlot_Crate_C_PreConstruct) == 0x000001, "Wrong alignment on UI_BoosterSlot_Crate_C_PreConstruct");
static_assert(sizeof(UI_BoosterSlot_Crate_C_PreConstruct) == 0x000001, "Wrong size on UI_BoosterSlot_Crate_C_PreConstruct");
static_assert(offsetof(UI_BoosterSlot_Crate_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_BoosterSlot_Crate_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UI_BoosterSlot_Crate.UI_BoosterSlot_Crate_C.UpdateUI
// 0x0140 (0x0140 - 0x0000)
struct UI_BoosterSlot_Crate_C_UpdateUI final
{
public:
	class AHumanPlayerController*                 CallFunc_GetFlameController_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerController_Script_C*          K2Node_DynamicCast_AsBP_Player_Controller_Script;  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_BoosterSlot_Crate_Icon_C*           CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x002C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUICoreObject*                          CallFunc_GetUICoreObject_ReturnValue;              // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class UClass*, int32>                    CallFunc_Get_Rewards_by_Booster_Level_Rewards;     // 0x0050(0x0050)()
	TArray<class UClass*>                         CallFunc_Map_Keys_Keys;                            // 0x00A0(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B4[0x4];                                       // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_Array_Get_Item;                           // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetClassDisplayName_ReturnValue;          // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AItem*                                  CallFunc_GetClassDefaultObject_ReturnValue;        // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Map_Find_Value;                           // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_ED[0x3];                                       // 0x00ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_GetIcon_ReturnValue;                      // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x00F8(0x0018)()
	int32                                         CallFunc_GetRarity_ReturnValue;                    // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x0114(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_115[0x3];                                      // 0x0115(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemRarity                            CallFunc_GetItemRarity_ReturnValue;                // 0x0118(0x0028)(ConstParm)
};
static_assert(alignof(UI_BoosterSlot_Crate_C_UpdateUI) == 0x000008, "Wrong alignment on UI_BoosterSlot_Crate_C_UpdateUI");
static_assert(sizeof(UI_BoosterSlot_Crate_C_UpdateUI) == 0x000140, "Wrong size on UI_BoosterSlot_Crate_C_UpdateUI");
static_assert(offsetof(UI_BoosterSlot_Crate_C_UpdateUI, CallFunc_GetFlameController_ReturnValue) == 0x000000, "Member 'UI_BoosterSlot_Crate_C_UpdateUI::CallFunc_GetFlameController_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BoosterSlot_Crate_C_UpdateUI, Temp_int_Array_Index_Variable) == 0x000008, "Member 'UI_BoosterSlot_Crate_C_UpdateUI::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UI_BoosterSlot_Crate_C_UpdateUI, K2Node_DynamicCast_AsBP_Player_Controller_Script) == 0x000010, "Member 'UI_BoosterSlot_Crate_C_UpdateUI::K2Node_DynamicCast_AsBP_Player_Controller_Script' has a wrong offset!");
static_assert(offsetof(UI_BoosterSlot_Crate_C_UpdateUI, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'UI_BoosterSlot_Crate_C_UpdateUI::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_BoosterSlot_Crate_C_UpdateUI, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'UI_BoosterSlot_Crate_C_UpdateUI::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UI_BoosterSlot_Crate_C_UpdateUI, CallFunc_Create_ReturnValue) == 0x000020, "Member 'UI_BoosterSlot_Crate_C_UpdateUI::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BoosterSlot_Crate_C_UpdateUI, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'UI_BoosterSlot_Crate_C_UpdateUI::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BoosterSlot_Crate_C_UpdateUI, K2Node_MakeStruct_Margin) == 0x00002C, "Member 'UI_BoosterSlot_Crate_C_UpdateUI::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(UI_BoosterSlot_Crate_C_UpdateUI, CallFunc_AddChildToHorizontalBox_ReturnValue) == 0x000040, "Member 'UI_BoosterSlot_Crate_C_UpdateUI::CallFunc_AddChildToHorizontalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BoosterSlot_Crate_C_UpdateUI, CallFunc_GetUICoreObject_ReturnValue) == 0x000048, "Member 'UI_BoosterSlot_Crate_C_UpdateUI::CallFunc_GetUICoreObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BoosterSlot_Crate_C_UpdateUI, CallFunc_Get_Rewards_by_Booster_Level_Rewards) == 0x000050, "Member 'UI_BoosterSlot_Crate_C_UpdateUI::CallFunc_Get_Rewards_by_Booster_Level_Rewards' has a wrong offset!");
static_assert(offsetof(UI_BoosterSlot_Crate_C_UpdateUI, CallFunc_Map_Keys_Keys) == 0x0000A0, "Member 'UI_BoosterSlot_Crate_C_UpdateUI::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(UI_BoosterSlot_Crate_C_UpdateUI, CallFunc_Array_Length_ReturnValue) == 0x0000B0, "Member 'UI_BoosterSlot_Crate_C_UpdateUI::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BoosterSlot_Crate_C_UpdateUI, CallFunc_Array_Get_Item) == 0x0000B8, "Member 'UI_BoosterSlot_Crate_C_UpdateUI::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UI_BoosterSlot_Crate_C_UpdateUI, CallFunc_Less_IntInt_ReturnValue) == 0x0000C0, "Member 'UI_BoosterSlot_Crate_C_UpdateUI::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BoosterSlot_Crate_C_UpdateUI, CallFunc_GetClassDisplayName_ReturnValue) == 0x0000C8, "Member 'UI_BoosterSlot_Crate_C_UpdateUI::CallFunc_GetClassDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BoosterSlot_Crate_C_UpdateUI, CallFunc_Conv_StringToName_ReturnValue) == 0x0000D8, "Member 'UI_BoosterSlot_Crate_C_UpdateUI::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BoosterSlot_Crate_C_UpdateUI, CallFunc_GetClassDefaultObject_ReturnValue) == 0x0000E0, "Member 'UI_BoosterSlot_Crate_C_UpdateUI::CallFunc_GetClassDefaultObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BoosterSlot_Crate_C_UpdateUI, CallFunc_Map_Find_Value) == 0x0000E8, "Member 'UI_BoosterSlot_Crate_C_UpdateUI::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(UI_BoosterSlot_Crate_C_UpdateUI, CallFunc_Map_Find_ReturnValue) == 0x0000EC, "Member 'UI_BoosterSlot_Crate_C_UpdateUI::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BoosterSlot_Crate_C_UpdateUI, CallFunc_GetIcon_ReturnValue) == 0x0000F0, "Member 'UI_BoosterSlot_Crate_C_UpdateUI::CallFunc_GetIcon_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BoosterSlot_Crate_C_UpdateUI, CallFunc_Conv_IntToText_ReturnValue) == 0x0000F8, "Member 'UI_BoosterSlot_Crate_C_UpdateUI::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BoosterSlot_Crate_C_UpdateUI, CallFunc_GetRarity_ReturnValue) == 0x000110, "Member 'UI_BoosterSlot_Crate_C_UpdateUI::CallFunc_GetRarity_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BoosterSlot_Crate_C_UpdateUI, CallFunc_IsValidClass_ReturnValue) == 0x000114, "Member 'UI_BoosterSlot_Crate_C_UpdateUI::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BoosterSlot_Crate_C_UpdateUI, CallFunc_GetItemRarity_ReturnValue) == 0x000118, "Member 'UI_BoosterSlot_Crate_C_UpdateUI::CallFunc_GetItemRarity_ReturnValue' has a wrong offset!");

// Function UI_BoosterSlot_Crate.UI_BoosterSlot_Crate_C.SetBoosterLevel
// 0x0004 (0x0004 - 0x0000)
struct UI_BoosterSlot_Crate_C_SetBoosterLevel final
{
public:
	int32                                         Level_0;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_BoosterSlot_Crate_C_SetBoosterLevel) == 0x000004, "Wrong alignment on UI_BoosterSlot_Crate_C_SetBoosterLevel");
static_assert(sizeof(UI_BoosterSlot_Crate_C_SetBoosterLevel) == 0x000004, "Wrong size on UI_BoosterSlot_Crate_C_SetBoosterLevel");
static_assert(offsetof(UI_BoosterSlot_Crate_C_SetBoosterLevel, Level_0) == 0x000000, "Member 'UI_BoosterSlot_Crate_C_SetBoosterLevel::Level_0' has a wrong offset!");

}

