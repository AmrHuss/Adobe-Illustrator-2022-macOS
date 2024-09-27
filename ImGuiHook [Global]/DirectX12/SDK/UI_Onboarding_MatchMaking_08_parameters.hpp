#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Onboarding_MatchMaking_08

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function UI_Onboarding_MatchMaking_08.UI_Onboarding_MatchMaking_08_C.ExecuteUbergraph_UI_Onboarding_MatchMaking_08
// 0x0180 (0x0180 - 0x0000)
struct UI_Onboarding_MatchMaking_08_C_ExecuteUbergraph_UI_Onboarding_MatchMaking_08 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable; // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0008(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0050(0x0018)()
	class FText                                   CallFunc_MakeLiteralText_ReturnValue_1;            // 0x0068(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0080(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00C0(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_MakeLiteralText_ReturnValue_2;            // 0x0100(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0118(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0158(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0168(0x0018)()
};
static_assert(alignof(UI_Onboarding_MatchMaking_08_C_ExecuteUbergraph_UI_Onboarding_MatchMaking_08) == 0x000008, "Wrong alignment on UI_Onboarding_MatchMaking_08_C_ExecuteUbergraph_UI_Onboarding_MatchMaking_08");
static_assert(sizeof(UI_Onboarding_MatchMaking_08_C_ExecuteUbergraph_UI_Onboarding_MatchMaking_08) == 0x000180, "Wrong size on UI_Onboarding_MatchMaking_08_C_ExecuteUbergraph_UI_Onboarding_MatchMaking_08");
static_assert(offsetof(UI_Onboarding_MatchMaking_08_C_ExecuteUbergraph_UI_Onboarding_MatchMaking_08, EntryPoint) == 0x000000, "Member 'UI_Onboarding_MatchMaking_08_C_ExecuteUbergraph_UI_Onboarding_MatchMaking_08::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_MatchMaking_08_C_ExecuteUbergraph_UI_Onboarding_MatchMaking_08, Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable) == 0x000004, "Member 'UI_Onboarding_MatchMaking_08_C_ExecuteUbergraph_UI_Onboarding_MatchMaking_08::Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_MatchMaking_08_C_ExecuteUbergraph_UI_Onboarding_MatchMaking_08, Temp_bool_Has_Been_Initd_Variable) == 0x000005, "Member 'UI_Onboarding_MatchMaking_08_C_ExecuteUbergraph_UI_Onboarding_MatchMaking_08::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_MatchMaking_08_C_ExecuteUbergraph_UI_Onboarding_MatchMaking_08, Temp_bool_IsClosed_Variable) == 0x000006, "Member 'UI_Onboarding_MatchMaking_08_C_ExecuteUbergraph_UI_Onboarding_MatchMaking_08::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_MatchMaking_08_C_ExecuteUbergraph_UI_Onboarding_MatchMaking_08, K2Node_Event_MyGeometry) == 0x000008, "Member 'UI_Onboarding_MatchMaking_08_C_ExecuteUbergraph_UI_Onboarding_MatchMaking_08::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_MatchMaking_08_C_ExecuteUbergraph_UI_Onboarding_MatchMaking_08, K2Node_Event_InDeltaTime) == 0x000040, "Member 'UI_Onboarding_MatchMaking_08_C_ExecuteUbergraph_UI_Onboarding_MatchMaking_08::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_MatchMaking_08_C_ExecuteUbergraph_UI_Onboarding_MatchMaking_08, CallFunc_GetOwningPlayer_ReturnValue) == 0x000048, "Member 'UI_Onboarding_MatchMaking_08_C_ExecuteUbergraph_UI_Onboarding_MatchMaking_08::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_MatchMaking_08_C_ExecuteUbergraph_UI_Onboarding_MatchMaking_08, CallFunc_MakeLiteralText_ReturnValue) == 0x000050, "Member 'UI_Onboarding_MatchMaking_08_C_ExecuteUbergraph_UI_Onboarding_MatchMaking_08::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_MatchMaking_08_C_ExecuteUbergraph_UI_Onboarding_MatchMaking_08, CallFunc_MakeLiteralText_ReturnValue_1) == 0x000068, "Member 'UI_Onboarding_MatchMaking_08_C_ExecuteUbergraph_UI_Onboarding_MatchMaking_08::CallFunc_MakeLiteralText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_MatchMaking_08_C_ExecuteUbergraph_UI_Onboarding_MatchMaking_08, K2Node_MakeStruct_FormatArgumentData) == 0x000080, "Member 'UI_Onboarding_MatchMaking_08_C_ExecuteUbergraph_UI_Onboarding_MatchMaking_08::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_MatchMaking_08_C_ExecuteUbergraph_UI_Onboarding_MatchMaking_08, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000C0, "Member 'UI_Onboarding_MatchMaking_08_C_ExecuteUbergraph_UI_Onboarding_MatchMaking_08::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_MatchMaking_08_C_ExecuteUbergraph_UI_Onboarding_MatchMaking_08, CallFunc_MakeLiteralText_ReturnValue_2) == 0x000100, "Member 'UI_Onboarding_MatchMaking_08_C_ExecuteUbergraph_UI_Onboarding_MatchMaking_08::CallFunc_MakeLiteralText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_MatchMaking_08_C_ExecuteUbergraph_UI_Onboarding_MatchMaking_08, K2Node_MakeStruct_FormatArgumentData_2) == 0x000118, "Member 'UI_Onboarding_MatchMaking_08_C_ExecuteUbergraph_UI_Onboarding_MatchMaking_08::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_MatchMaking_08_C_ExecuteUbergraph_UI_Onboarding_MatchMaking_08, K2Node_MakeArray_Array) == 0x000158, "Member 'UI_Onboarding_MatchMaking_08_C_ExecuteUbergraph_UI_Onboarding_MatchMaking_08::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_MatchMaking_08_C_ExecuteUbergraph_UI_Onboarding_MatchMaking_08, CallFunc_Format_ReturnValue) == 0x000168, "Member 'UI_Onboarding_MatchMaking_08_C_ExecuteUbergraph_UI_Onboarding_MatchMaking_08::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function UI_Onboarding_MatchMaking_08.UI_Onboarding_MatchMaking_08_C.Tick
// 0x003C (0x003C - 0x0000)
struct UI_Onboarding_MatchMaking_08_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_Onboarding_MatchMaking_08_C_Tick) == 0x000004, "Wrong alignment on UI_Onboarding_MatchMaking_08_C_Tick");
static_assert(sizeof(UI_Onboarding_MatchMaking_08_C_Tick) == 0x00003C, "Wrong size on UI_Onboarding_MatchMaking_08_C_Tick");
static_assert(offsetof(UI_Onboarding_MatchMaking_08_C_Tick, MyGeometry) == 0x000000, "Member 'UI_Onboarding_MatchMaking_08_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(UI_Onboarding_MatchMaking_08_C_Tick, InDeltaTime) == 0x000038, "Member 'UI_Onboarding_MatchMaking_08_C_Tick::InDeltaTime' has a wrong offset!");

}

