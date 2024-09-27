#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GunFight_PlayerIndicator

#include "Basic.hpp"


namespace SDK::Params
{

// Function UI_GunFight_PlayerIndicator.UI_GunFight_PlayerIndicator_C.ExecuteUbergraph_UI_GunFight_PlayerIndicator
// 0x0030 (0x0030 - 0x0000)
struct UI_GunFight_PlayerIndicator_C_ExecuteUbergraph_UI_GunFight_PlayerIndicator final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_PlayerWasKicked;                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_1;                            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_Health;                         // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             K2Node_Select_Default;                             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_GunFight_PlayerIndicator_C_ExecuteUbergraph_UI_GunFight_PlayerIndicator) == 0x000008, "Wrong alignment on UI_GunFight_PlayerIndicator_C_ExecuteUbergraph_UI_GunFight_PlayerIndicator");
static_assert(sizeof(UI_GunFight_PlayerIndicator_C_ExecuteUbergraph_UI_GunFight_PlayerIndicator) == 0x000030, "Wrong size on UI_GunFight_PlayerIndicator_C_ExecuteUbergraph_UI_GunFight_PlayerIndicator");
static_assert(offsetof(UI_GunFight_PlayerIndicator_C_ExecuteUbergraph_UI_GunFight_PlayerIndicator, EntryPoint) == 0x000000, "Member 'UI_GunFight_PlayerIndicator_C_ExecuteUbergraph_UI_GunFight_PlayerIndicator::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_GunFight_PlayerIndicator_C_ExecuteUbergraph_UI_GunFight_PlayerIndicator, K2Node_CustomEvent_PlayerWasKicked) == 0x000004, "Member 'UI_GunFight_PlayerIndicator_C_ExecuteUbergraph_UI_GunFight_PlayerIndicator::K2Node_CustomEvent_PlayerWasKicked' has a wrong offset!");
static_assert(offsetof(UI_GunFight_PlayerIndicator_C_ExecuteUbergraph_UI_GunFight_PlayerIndicator, Temp_bool_Variable) == 0x000005, "Member 'UI_GunFight_PlayerIndicator_C_ExecuteUbergraph_UI_GunFight_PlayerIndicator::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UI_GunFight_PlayerIndicator_C_ExecuteUbergraph_UI_GunFight_PlayerIndicator, Temp_object_Variable) == 0x000008, "Member 'UI_GunFight_PlayerIndicator_C_ExecuteUbergraph_UI_GunFight_PlayerIndicator::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(UI_GunFight_PlayerIndicator_C_ExecuteUbergraph_UI_GunFight_PlayerIndicator, Temp_object_Variable_1) == 0x000010, "Member 'UI_GunFight_PlayerIndicator_C_ExecuteUbergraph_UI_GunFight_PlayerIndicator::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_GunFight_PlayerIndicator_C_ExecuteUbergraph_UI_GunFight_PlayerIndicator, K2Node_CustomEvent_Health) == 0x000018, "Member 'UI_GunFight_PlayerIndicator_C_ExecuteUbergraph_UI_GunFight_PlayerIndicator::K2Node_CustomEvent_Health' has a wrong offset!");
static_assert(offsetof(UI_GunFight_PlayerIndicator_C_ExecuteUbergraph_UI_GunFight_PlayerIndicator, K2Node_Select_Default) == 0x000020, "Member 'UI_GunFight_PlayerIndicator_C_ExecuteUbergraph_UI_GunFight_PlayerIndicator::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UI_GunFight_PlayerIndicator_C_ExecuteUbergraph_UI_GunFight_PlayerIndicator, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000028, "Member 'UI_GunFight_PlayerIndicator_C_ExecuteUbergraph_UI_GunFight_PlayerIndicator::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_GunFight_PlayerIndicator_C_ExecuteUbergraph_UI_GunFight_PlayerIndicator, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000029, "Member 'UI_GunFight_PlayerIndicator_C_ExecuteUbergraph_UI_GunFight_PlayerIndicator::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");

// Function UI_GunFight_PlayerIndicator.UI_GunFight_PlayerIndicator_C.SetDisconnectIcon
// 0x0001 (0x0001 - 0x0000)
struct UI_GunFight_PlayerIndicator_C_SetDisconnectIcon final
{
public:
	bool                                          PlayerWasKicked;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_GunFight_PlayerIndicator_C_SetDisconnectIcon) == 0x000001, "Wrong alignment on UI_GunFight_PlayerIndicator_C_SetDisconnectIcon");
static_assert(sizeof(UI_GunFight_PlayerIndicator_C_SetDisconnectIcon) == 0x000001, "Wrong size on UI_GunFight_PlayerIndicator_C_SetDisconnectIcon");
static_assert(offsetof(UI_GunFight_PlayerIndicator_C_SetDisconnectIcon, PlayerWasKicked) == 0x000000, "Member 'UI_GunFight_PlayerIndicator_C_SetDisconnectIcon::PlayerWasKicked' has a wrong offset!");

// Function UI_GunFight_PlayerIndicator.UI_GunFight_PlayerIndicator_C.Set Player Health
// 0x0004 (0x0004 - 0x0000)
struct UI_GunFight_PlayerIndicator_C_Set_Player_Health final
{
public:
	float                                         Health;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_GunFight_PlayerIndicator_C_Set_Player_Health) == 0x000004, "Wrong alignment on UI_GunFight_PlayerIndicator_C_Set_Player_Health");
static_assert(sizeof(UI_GunFight_PlayerIndicator_C_Set_Player_Health) == 0x000004, "Wrong size on UI_GunFight_PlayerIndicator_C_Set_Player_Health");
static_assert(offsetof(UI_GunFight_PlayerIndicator_C_Set_Player_Health, Health) == 0x000000, "Member 'UI_GunFight_PlayerIndicator_C_Set_Player_Health::Health' has a wrong offset!");

}

