#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LeaderboardSystemMonitor

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Flame_structs.hpp"


namespace SDK::Params
{

// Function BP_LeaderboardSystemMonitor.BP_LeaderboardSystemMonitor_C.ExecuteUbergraph_BP_LeaderboardSystemMonitor
// 0x0024 (0x0024 - 0x0000)
struct BP_LeaderboardSystemMonitor_C_ExecuteUbergraph_BP_LeaderboardSystemMonitor final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLeaderboardReadContext                K2Node_Event_BoardContext;                         // 0x0004(0x0014)(ConstParm, NoDestructor)
	class FName                                   K2Node_Event_BoardName;                            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_PlayerValue;                          // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LeaderboardSystemMonitor_C_ExecuteUbergraph_BP_LeaderboardSystemMonitor) == 0x000004, "Wrong alignment on BP_LeaderboardSystemMonitor_C_ExecuteUbergraph_BP_LeaderboardSystemMonitor");
static_assert(sizeof(BP_LeaderboardSystemMonitor_C_ExecuteUbergraph_BP_LeaderboardSystemMonitor) == 0x000024, "Wrong size on BP_LeaderboardSystemMonitor_C_ExecuteUbergraph_BP_LeaderboardSystemMonitor");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_ExecuteUbergraph_BP_LeaderboardSystemMonitor, EntryPoint) == 0x000000, "Member 'BP_LeaderboardSystemMonitor_C_ExecuteUbergraph_BP_LeaderboardSystemMonitor::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_ExecuteUbergraph_BP_LeaderboardSystemMonitor, K2Node_Event_BoardContext) == 0x000004, "Member 'BP_LeaderboardSystemMonitor_C_ExecuteUbergraph_BP_LeaderboardSystemMonitor::K2Node_Event_BoardContext' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_ExecuteUbergraph_BP_LeaderboardSystemMonitor, K2Node_Event_BoardName) == 0x000018, "Member 'BP_LeaderboardSystemMonitor_C_ExecuteUbergraph_BP_LeaderboardSystemMonitor::K2Node_Event_BoardName' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_ExecuteUbergraph_BP_LeaderboardSystemMonitor, K2Node_Event_PlayerValue) == 0x000020, "Member 'BP_LeaderboardSystemMonitor_C_ExecuteUbergraph_BP_LeaderboardSystemMonitor::K2Node_Event_PlayerValue' has a wrong offset!");

// Function BP_LeaderboardSystemMonitor.BP_LeaderboardSystemMonitor_C.OnLeaderboardWriteCall
// 0x000C (0x000C - 0x0000)
struct BP_LeaderboardSystemMonitor_C_OnLeaderboardWriteCall final
{
public:
	class FName                                   BoardName;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PlayerValue;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LeaderboardSystemMonitor_C_OnLeaderboardWriteCall) == 0x000004, "Wrong alignment on BP_LeaderboardSystemMonitor_C_OnLeaderboardWriteCall");
static_assert(sizeof(BP_LeaderboardSystemMonitor_C_OnLeaderboardWriteCall) == 0x00000C, "Wrong size on BP_LeaderboardSystemMonitor_C_OnLeaderboardWriteCall");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_OnLeaderboardWriteCall, BoardName) == 0x000000, "Member 'BP_LeaderboardSystemMonitor_C_OnLeaderboardWriteCall::BoardName' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_OnLeaderboardWriteCall, PlayerValue) == 0x000008, "Member 'BP_LeaderboardSystemMonitor_C_OnLeaderboardWriteCall::PlayerValue' has a wrong offset!");

// Function BP_LeaderboardSystemMonitor.BP_LeaderboardSystemMonitor_C.OnLeaderboardReadCall
// 0x0014 (0x0014 - 0x0000)
struct BP_LeaderboardSystemMonitor_C_OnLeaderboardReadCall final
{
public:
	struct FLeaderboardReadContext                BoardContext;                                      // 0x0000(0x0014)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(BP_LeaderboardSystemMonitor_C_OnLeaderboardReadCall) == 0x000004, "Wrong alignment on BP_LeaderboardSystemMonitor_C_OnLeaderboardReadCall");
static_assert(sizeof(BP_LeaderboardSystemMonitor_C_OnLeaderboardReadCall) == 0x000014, "Wrong size on BP_LeaderboardSystemMonitor_C_OnLeaderboardReadCall");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_OnLeaderboardReadCall, BoardContext) == 0x000000, "Member 'BP_LeaderboardSystemMonitor_C_OnLeaderboardReadCall::BoardContext' has a wrong offset!");

// Function BP_LeaderboardSystemMonitor.BP_LeaderboardSystemMonitor_C.CountReadUntilTime
// 0x0078 (0x0078 - 0x0000)
struct BP_LeaderboardSystemMonitor_C_CountReadUntilTime final
{
public:
	struct FTimespan                              TimeWindow;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	int32                                         CountedItems;                                      // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              LimitTime;                                         // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Count;                                             // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLeaderboardMonitorReadCall            CallFunc_Array_Get_Item;                           // 0x0038(0x0020)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DateTimeDateTime_ReturnValue;     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x3];                                       // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Max_ReturnValue;                          // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_Now_ReturnValue;                          // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_Subtract_DateTimeTimespan_ReturnValue;    // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LeaderboardSystemMonitor_C_CountReadUntilTime) == 0x000008, "Wrong alignment on BP_LeaderboardSystemMonitor_C_CountReadUntilTime");
static_assert(sizeof(BP_LeaderboardSystemMonitor_C_CountReadUntilTime) == 0x000078, "Wrong size on BP_LeaderboardSystemMonitor_C_CountReadUntilTime");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CountReadUntilTime, TimeWindow) == 0x000000, "Member 'BP_LeaderboardSystemMonitor_C_CountReadUntilTime::TimeWindow' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CountReadUntilTime, CountedItems) == 0x000008, "Member 'BP_LeaderboardSystemMonitor_C_CountReadUntilTime::CountedItems' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CountReadUntilTime, LimitTime) == 0x000010, "Member 'BP_LeaderboardSystemMonitor_C_CountReadUntilTime::LimitTime' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CountReadUntilTime, Count) == 0x000018, "Member 'BP_LeaderboardSystemMonitor_C_CountReadUntilTime::Count' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CountReadUntilTime, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'BP_LeaderboardSystemMonitor_C_CountReadUntilTime::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CountReadUntilTime, CallFunc_Subtract_IntInt_ReturnValue) == 0x000020, "Member 'BP_LeaderboardSystemMonitor_C_CountReadUntilTime::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CountReadUntilTime, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000024, "Member 'BP_LeaderboardSystemMonitor_C_CountReadUntilTime::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CountReadUntilTime, Temp_int_Array_Index_Variable) == 0x000028, "Member 'BP_LeaderboardSystemMonitor_C_CountReadUntilTime::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CountReadUntilTime, Temp_int_Variable) == 0x00002C, "Member 'BP_LeaderboardSystemMonitor_C_CountReadUntilTime::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CountReadUntilTime, Temp_bool_Variable) == 0x000030, "Member 'BP_LeaderboardSystemMonitor_C_CountReadUntilTime::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CountReadUntilTime, CallFunc_Add_IntInt_ReturnValue) == 0x000034, "Member 'BP_LeaderboardSystemMonitor_C_CountReadUntilTime::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CountReadUntilTime, CallFunc_Array_Get_Item) == 0x000038, "Member 'BP_LeaderboardSystemMonitor_C_CountReadUntilTime::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CountReadUntilTime, CallFunc_Array_Length_ReturnValue) == 0x000058, "Member 'BP_LeaderboardSystemMonitor_C_CountReadUntilTime::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CountReadUntilTime, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x00005C, "Member 'BP_LeaderboardSystemMonitor_C_CountReadUntilTime::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CountReadUntilTime, CallFunc_Greater_DateTimeDateTime_ReturnValue) == 0x000060, "Member 'BP_LeaderboardSystemMonitor_C_CountReadUntilTime::CallFunc_Greater_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CountReadUntilTime, CallFunc_Max_ReturnValue) == 0x000064, "Member 'BP_LeaderboardSystemMonitor_C_CountReadUntilTime::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CountReadUntilTime, CallFunc_Now_ReturnValue) == 0x000068, "Member 'BP_LeaderboardSystemMonitor_C_CountReadUntilTime::CallFunc_Now_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CountReadUntilTime, CallFunc_Subtract_DateTimeTimespan_ReturnValue) == 0x000070, "Member 'BP_LeaderboardSystemMonitor_C_CountReadUntilTime::CallFunc_Subtract_DateTimeTimespan_ReturnValue' has a wrong offset!");

// Function BP_LeaderboardSystemMonitor.BP_LeaderboardSystemMonitor_C.CheckReadRules
// 0x0080 (0x0080 - 0x0000)
struct BP_LeaderboardSystemMonitor_C_CheckReadRules final
{
public:
	int32                                         NewLocalVar_0;                                     // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_LastIndex_Variable;                       // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_CountReadUntilTime_CountedItems;          // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LeaderboardSystemMonitor_C_CheckReadRules) == 0x000008, "Wrong alignment on BP_LeaderboardSystemMonitor_C_CheckReadRules");
static_assert(sizeof(BP_LeaderboardSystemMonitor_C_CheckReadRules) == 0x000080, "Wrong size on BP_LeaderboardSystemMonitor_C_CheckReadRules");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CheckReadRules, NewLocalVar_0) == 0x000000, "Member 'BP_LeaderboardSystemMonitor_C_CheckReadRules::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CheckReadRules, Temp_int_Variable) == 0x000004, "Member 'BP_LeaderboardSystemMonitor_C_CheckReadRules::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CheckReadRules, Temp_int_LastIndex_Variable) == 0x000008, "Member 'BP_LeaderboardSystemMonitor_C_CheckReadRules::Temp_int_LastIndex_Variable' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CheckReadRules, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00000C, "Member 'BP_LeaderboardSystemMonitor_C_CheckReadRules::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CheckReadRules, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'BP_LeaderboardSystemMonitor_C_CheckReadRules::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CheckReadRules, CallFunc_Array_Length_ReturnValue) == 0x000014, "Member 'BP_LeaderboardSystemMonitor_C_CheckReadRules::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CheckReadRules, CallFunc_Subtract_IntInt_ReturnValue) == 0x000018, "Member 'BP_LeaderboardSystemMonitor_C_CheckReadRules::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CheckReadRules, CallFunc_Conv_IntToString_ReturnValue) == 0x000020, "Member 'BP_LeaderboardSystemMonitor_C_CheckReadRules::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CheckReadRules, CallFunc_CountReadUntilTime_CountedItems) == 0x000030, "Member 'BP_LeaderboardSystemMonitor_C_CheckReadRules::CallFunc_CountReadUntilTime_CountedItems' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CheckReadRules, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000038, "Member 'BP_LeaderboardSystemMonitor_C_CheckReadRules::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CheckReadRules, CallFunc_Greater_IntInt_ReturnValue) == 0x000048, "Member 'BP_LeaderboardSystemMonitor_C_CheckReadRules::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CheckReadRules, CallFunc_Concat_StrStr_ReturnValue) == 0x000050, "Member 'BP_LeaderboardSystemMonitor_C_CheckReadRules::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CheckReadRules, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000060, "Member 'BP_LeaderboardSystemMonitor_C_CheckReadRules::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CheckReadRules, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000070, "Member 'BP_LeaderboardSystemMonitor_C_CheckReadRules::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");

// Function BP_LeaderboardSystemMonitor.BP_LeaderboardSystemMonitor_C.CountWriteUntilTime
// 0x0078 (0x0078 - 0x0000)
struct BP_LeaderboardSystemMonitor_C_CountWriteUntilTime final
{
public:
	struct FTimespan                              TimeWindow;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	int32                                         CountedItems;                                      // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              LimitTime;                                         // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Count;                                             // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLeaderboardMonitorWriteCall           CallFunc_Array_Get_Item;                           // 0x0038(0x0018)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue;                          // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DateTimeDateTime_ReturnValue;     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_Now_ReturnValue;                          // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_Subtract_DateTimeTimespan_ReturnValue;    // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LeaderboardSystemMonitor_C_CountWriteUntilTime) == 0x000008, "Wrong alignment on BP_LeaderboardSystemMonitor_C_CountWriteUntilTime");
static_assert(sizeof(BP_LeaderboardSystemMonitor_C_CountWriteUntilTime) == 0x000078, "Wrong size on BP_LeaderboardSystemMonitor_C_CountWriteUntilTime");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CountWriteUntilTime, TimeWindow) == 0x000000, "Member 'BP_LeaderboardSystemMonitor_C_CountWriteUntilTime::TimeWindow' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CountWriteUntilTime, CountedItems) == 0x000008, "Member 'BP_LeaderboardSystemMonitor_C_CountWriteUntilTime::CountedItems' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CountWriteUntilTime, LimitTime) == 0x000010, "Member 'BP_LeaderboardSystemMonitor_C_CountWriteUntilTime::LimitTime' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CountWriteUntilTime, Count) == 0x000018, "Member 'BP_LeaderboardSystemMonitor_C_CountWriteUntilTime::Count' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CountWriteUntilTime, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'BP_LeaderboardSystemMonitor_C_CountWriteUntilTime::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CountWriteUntilTime, CallFunc_Subtract_IntInt_ReturnValue) == 0x000020, "Member 'BP_LeaderboardSystemMonitor_C_CountWriteUntilTime::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CountWriteUntilTime, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000024, "Member 'BP_LeaderboardSystemMonitor_C_CountWriteUntilTime::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CountWriteUntilTime, Temp_int_Array_Index_Variable) == 0x000028, "Member 'BP_LeaderboardSystemMonitor_C_CountWriteUntilTime::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CountWriteUntilTime, Temp_int_Variable) == 0x00002C, "Member 'BP_LeaderboardSystemMonitor_C_CountWriteUntilTime::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CountWriteUntilTime, Temp_bool_Variable) == 0x000030, "Member 'BP_LeaderboardSystemMonitor_C_CountWriteUntilTime::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CountWriteUntilTime, CallFunc_Array_Get_Item) == 0x000038, "Member 'BP_LeaderboardSystemMonitor_C_CountWriteUntilTime::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CountWriteUntilTime, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'BP_LeaderboardSystemMonitor_C_CountWriteUntilTime::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CountWriteUntilTime, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000054, "Member 'BP_LeaderboardSystemMonitor_C_CountWriteUntilTime::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CountWriteUntilTime, CallFunc_Max_ReturnValue) == 0x000058, "Member 'BP_LeaderboardSystemMonitor_C_CountWriteUntilTime::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CountWriteUntilTime, CallFunc_Add_IntInt_ReturnValue) == 0x00005C, "Member 'BP_LeaderboardSystemMonitor_C_CountWriteUntilTime::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CountWriteUntilTime, CallFunc_Greater_DateTimeDateTime_ReturnValue) == 0x000060, "Member 'BP_LeaderboardSystemMonitor_C_CountWriteUntilTime::CallFunc_Greater_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CountWriteUntilTime, CallFunc_Now_ReturnValue) == 0x000068, "Member 'BP_LeaderboardSystemMonitor_C_CountWriteUntilTime::CallFunc_Now_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CountWriteUntilTime, CallFunc_Subtract_DateTimeTimespan_ReturnValue) == 0x000070, "Member 'BP_LeaderboardSystemMonitor_C_CountWriteUntilTime::CallFunc_Subtract_DateTimeTimespan_ReturnValue' has a wrong offset!");

// Function BP_LeaderboardSystemMonitor.BP_LeaderboardSystemMonitor_C.CheckWriteRules
// 0x0078 (0x0078 - 0x0000)
struct BP_LeaderboardSystemMonitor_C_CheckWriteRules final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_LastIndex_Variable;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_CountWriteUntilTime_CountedItems;         // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LeaderboardSystemMonitor_C_CheckWriteRules) == 0x000008, "Wrong alignment on BP_LeaderboardSystemMonitor_C_CheckWriteRules");
static_assert(sizeof(BP_LeaderboardSystemMonitor_C_CheckWriteRules) == 0x000078, "Wrong size on BP_LeaderboardSystemMonitor_C_CheckWriteRules");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CheckWriteRules, Temp_int_Variable) == 0x000000, "Member 'BP_LeaderboardSystemMonitor_C_CheckWriteRules::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CheckWriteRules, Temp_int_LastIndex_Variable) == 0x000004, "Member 'BP_LeaderboardSystemMonitor_C_CheckWriteRules::Temp_int_LastIndex_Variable' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CheckWriteRules, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000008, "Member 'BP_LeaderboardSystemMonitor_C_CheckWriteRules::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CheckWriteRules, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_LeaderboardSystemMonitor_C_CheckWriteRules::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CheckWriteRules, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'BP_LeaderboardSystemMonitor_C_CheckWriteRules::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CheckWriteRules, CallFunc_Subtract_IntInt_ReturnValue) == 0x000014, "Member 'BP_LeaderboardSystemMonitor_C_CheckWriteRules::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CheckWriteRules, CallFunc_Conv_IntToString_ReturnValue) == 0x000018, "Member 'BP_LeaderboardSystemMonitor_C_CheckWriteRules::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CheckWriteRules, CallFunc_CountWriteUntilTime_CountedItems) == 0x000028, "Member 'BP_LeaderboardSystemMonitor_C_CheckWriteRules::CallFunc_CountWriteUntilTime_CountedItems' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CheckWriteRules, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000030, "Member 'BP_LeaderboardSystemMonitor_C_CheckWriteRules::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CheckWriteRules, CallFunc_Greater_IntInt_ReturnValue) == 0x000040, "Member 'BP_LeaderboardSystemMonitor_C_CheckWriteRules::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CheckWriteRules, CallFunc_Concat_StrStr_ReturnValue) == 0x000048, "Member 'BP_LeaderboardSystemMonitor_C_CheckWriteRules::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CheckWriteRules, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000058, "Member 'BP_LeaderboardSystemMonitor_C_CheckWriteRules::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LeaderboardSystemMonitor_C_CheckWriteRules, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000068, "Member 'BP_LeaderboardSystemMonitor_C_CheckWriteRules::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");

}

