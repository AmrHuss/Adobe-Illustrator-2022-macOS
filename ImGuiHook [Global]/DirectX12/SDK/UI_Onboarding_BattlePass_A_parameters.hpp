#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Onboarding_BattlePass_A

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UI_Onboarding_BattlePass_A.UI_Onboarding_BattlePass_A_C.ExecuteUbergraph_UI_Onboarding_BattlePass_A
// 0x0080 (0x0080 - 0x0000)
struct UI_Onboarding_BattlePass_A_C_ExecuteUbergraph_UI_Onboarding_BattlePass_A final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetZOrder_ReturnValue;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUI_Onboarding_BattlePass_B_C*          CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0020(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue_1;            // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UUI_Onboarding_BattlePass_B_C*>  CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x0068(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_Onboarding_BattlePass_A_C_ExecuteUbergraph_UI_Onboarding_BattlePass_A) == 0x000008, "Wrong alignment on UI_Onboarding_BattlePass_A_C_ExecuteUbergraph_UI_Onboarding_BattlePass_A");
static_assert(sizeof(UI_Onboarding_BattlePass_A_C_ExecuteUbergraph_UI_Onboarding_BattlePass_A) == 0x000080, "Wrong size on UI_Onboarding_BattlePass_A_C_ExecuteUbergraph_UI_Onboarding_BattlePass_A");
static_assert(offsetof(UI_Onboarding_BattlePass_A_C_ExecuteUbergraph_UI_Onboarding_BattlePass_A, EntryPoint) == 0x000000, "Member 'UI_Onboarding_BattlePass_A_C_ExecuteUbergraph_UI_Onboarding_BattlePass_A::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_BattlePass_A_C_ExecuteUbergraph_UI_Onboarding_BattlePass_A, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'UI_Onboarding_BattlePass_A_C_ExecuteUbergraph_UI_Onboarding_BattlePass_A::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_BattlePass_A_C_ExecuteUbergraph_UI_Onboarding_BattlePass_A, CallFunc_GetZOrder_ReturnValue) == 0x000010, "Member 'UI_Onboarding_BattlePass_A_C_ExecuteUbergraph_UI_Onboarding_BattlePass_A::CallFunc_GetZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_BattlePass_A_C_ExecuteUbergraph_UI_Onboarding_BattlePass_A, CallFunc_Create_ReturnValue) == 0x000018, "Member 'UI_Onboarding_BattlePass_A_C_ExecuteUbergraph_UI_Onboarding_BattlePass_A::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_BattlePass_A_C_ExecuteUbergraph_UI_Onboarding_BattlePass_A, K2Node_Event_MyGeometry) == 0x000020, "Member 'UI_Onboarding_BattlePass_A_C_ExecuteUbergraph_UI_Onboarding_BattlePass_A::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_BattlePass_A_C_ExecuteUbergraph_UI_Onboarding_BattlePass_A, K2Node_Event_InDeltaTime) == 0x000058, "Member 'UI_Onboarding_BattlePass_A_C_ExecuteUbergraph_UI_Onboarding_BattlePass_A::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_BattlePass_A_C_ExecuteUbergraph_UI_Onboarding_BattlePass_A, CallFunc_GetOwningPlayer_ReturnValue_1) == 0x000060, "Member 'UI_Onboarding_BattlePass_A_C_ExecuteUbergraph_UI_Onboarding_BattlePass_A::CallFunc_GetOwningPlayer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_BattlePass_A_C_ExecuteUbergraph_UI_Onboarding_BattlePass_A, CallFunc_GetAllWidgetsOfClass_FoundWidgets) == 0x000068, "Member 'UI_Onboarding_BattlePass_A_C_ExecuteUbergraph_UI_Onboarding_BattlePass_A::CallFunc_GetAllWidgetsOfClass_FoundWidgets' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_BattlePass_A_C_ExecuteUbergraph_UI_Onboarding_BattlePass_A, CallFunc_Array_Length_ReturnValue) == 0x000078, "Member 'UI_Onboarding_BattlePass_A_C_ExecuteUbergraph_UI_Onboarding_BattlePass_A::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_BattlePass_A_C_ExecuteUbergraph_UI_Onboarding_BattlePass_A, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00007C, "Member 'UI_Onboarding_BattlePass_A_C_ExecuteUbergraph_UI_Onboarding_BattlePass_A::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function UI_Onboarding_BattlePass_A.UI_Onboarding_BattlePass_A_C.Tick
// 0x003C (0x003C - 0x0000)
struct UI_Onboarding_BattlePass_A_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Onboarding_BattlePass_A_C_Tick) == 0x000004, "Wrong alignment on UI_Onboarding_BattlePass_A_C_Tick");
static_assert(sizeof(UI_Onboarding_BattlePass_A_C_Tick) == 0x00003C, "Wrong size on UI_Onboarding_BattlePass_A_C_Tick");
static_assert(offsetof(UI_Onboarding_BattlePass_A_C_Tick, MyGeometry) == 0x000000, "Member 'UI_Onboarding_BattlePass_A_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_BattlePass_A_C_Tick, InDeltaTime) == 0x000038, "Member 'UI_Onboarding_BattlePass_A_C_Tick::InDeltaTime' has a wrong offset!");

}

