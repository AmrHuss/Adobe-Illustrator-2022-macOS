#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GSC_Team

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_GSC_Team.BP_GSC_Team_C.ExecuteUbergraph_BP_GSC_Team
// 0x0028 (0x0028 - 0x0000)
struct BP_GSC_Team_C_ExecuteUbergraph_BP_GSC_Team final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GSC_Team_C_ExecuteUbergraph_BP_GSC_Team) == 0x000008, "Wrong alignment on BP_GSC_Team_C_ExecuteUbergraph_BP_GSC_Team");
static_assert(sizeof(BP_GSC_Team_C_ExecuteUbergraph_BP_GSC_Team) == 0x000028, "Wrong size on BP_GSC_Team_C_ExecuteUbergraph_BP_GSC_Team");
static_assert(offsetof(BP_GSC_Team_C_ExecuteUbergraph_BP_GSC_Team, EntryPoint) == 0x000000, "Member 'BP_GSC_Team_C_ExecuteUbergraph_BP_GSC_Team::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_GSC_Team_C_ExecuteUbergraph_BP_GSC_Team, CallFunc_GetDisplayName_ReturnValue) == 0x000008, "Member 'BP_GSC_Team_C_ExecuteUbergraph_BP_GSC_Team::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GSC_Team_C_ExecuteUbergraph_BP_GSC_Team, CallFunc_Concat_StrStr_ReturnValue) == 0x000018, "Member 'BP_GSC_Team_C_ExecuteUbergraph_BP_GSC_Team::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");

// Function BP_GSC_Team.BP_GSC_Team_C.Get Empty Slot Count
// 0x000C (0x000C - 0x0000)
struct BP_GSC_Team_C_Get_Empty_Slot_Count final
{
public:
	int32                                         Empty_Slots;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GSC_Team_C_Get_Empty_Slot_Count) == 0x000004, "Wrong alignment on BP_GSC_Team_C_Get_Empty_Slot_Count");
static_assert(sizeof(BP_GSC_Team_C_Get_Empty_Slot_Count) == 0x00000C, "Wrong size on BP_GSC_Team_C_Get_Empty_Slot_Count");
static_assert(offsetof(BP_GSC_Team_C_Get_Empty_Slot_Count, Empty_Slots) == 0x000000, "Member 'BP_GSC_Team_C_Get_Empty_Slot_Count::Empty_Slots' has a wrong offset!");
static_assert(offsetof(BP_GSC_Team_C_Get_Empty_Slot_Count, CallFunc_Array_Length_ReturnValue) == 0x000004, "Member 'BP_GSC_Team_C_Get_Empty_Slot_Count::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GSC_Team_C_Get_Empty_Slot_Count, CallFunc_Subtract_IntInt_ReturnValue) == 0x000008, "Member 'BP_GSC_Team_C_Get_Empty_Slot_Count::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");

// Function BP_GSC_Team.BP_GSC_Team_C.Add Player
// 0x0088 (0x0088 - 0x0000)
struct BP_GSC_Team_C_Add_Player final
{
public:
	class ABP_PlayerController_Teams_C*           Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Success;                                           // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class ABP_PlayerState_Teams_C*                K2Node_DynamicCast_AsBP_Player_State_Teams;        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue_1;             // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Get_Empty_Slot_Count_Empty_Slots;         // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_GSC_Team_C_Add_Player) == 0x000008, "Wrong alignment on BP_GSC_Team_C_Add_Player");
static_assert(sizeof(BP_GSC_Team_C_Add_Player) == 0x000088, "Wrong size on BP_GSC_Team_C_Add_Player");
static_assert(offsetof(BP_GSC_Team_C_Add_Player, Player) == 0x000000, "Member 'BP_GSC_Team_C_Add_Player::Player' has a wrong offset!");
static_assert(offsetof(BP_GSC_Team_C_Add_Player, Success) == 0x000008, "Member 'BP_GSC_Team_C_Add_Player::Success' has a wrong offset!");
static_assert(offsetof(BP_GSC_Team_C_Add_Player, CallFunc_GetDisplayName_ReturnValue) == 0x000010, "Member 'BP_GSC_Team_C_Add_Player::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GSC_Team_C_Add_Player, K2Node_DynamicCast_AsBP_Player_State_Teams) == 0x000020, "Member 'BP_GSC_Team_C_Add_Player::K2Node_DynamicCast_AsBP_Player_State_Teams' has a wrong offset!");
static_assert(offsetof(BP_GSC_Team_C_Add_Player, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_GSC_Team_C_Add_Player::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_GSC_Team_C_Add_Player, CallFunc_Concat_StrStr_ReturnValue) == 0x000030, "Member 'BP_GSC_Team_C_Add_Player::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GSC_Team_C_Add_Player, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000040, "Member 'BP_GSC_Team_C_Add_Player::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_GSC_Team_C_Add_Player, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'BP_GSC_Team_C_Add_Player::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GSC_Team_C_Add_Player, CallFunc_GetDisplayName_ReturnValue_1) == 0x000058, "Member 'BP_GSC_Team_C_Add_Player::CallFunc_GetDisplayName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_GSC_Team_C_Add_Player, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000068, "Member 'BP_GSC_Team_C_Add_Player::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_GSC_Team_C_Add_Player, CallFunc_Get_Empty_Slot_Count_Empty_Slots) == 0x000078, "Member 'BP_GSC_Team_C_Add_Player::CallFunc_Get_Empty_Slot_Count_Empty_Slots' has a wrong offset!");
static_assert(offsetof(BP_GSC_Team_C_Add_Player, CallFunc_Array_AddUnique_ReturnValue) == 0x00007C, "Member 'BP_GSC_Team_C_Add_Player::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GSC_Team_C_Add_Player, CallFunc_Greater_IntInt_ReturnValue) == 0x000080, "Member 'BP_GSC_Team_C_Add_Player::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GSC_Team_C_Add_Player, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000081, "Member 'BP_GSC_Team_C_Add_Player::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

// Function BP_GSC_Team.BP_GSC_Team_C.Get Member Count
// 0x0008 (0x0008 - 0x0000)
struct BP_GSC_Team_C_Get_Member_Count final
{
public:
	int32                                         Members;                                           // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GSC_Team_C_Get_Member_Count) == 0x000004, "Wrong alignment on BP_GSC_Team_C_Get_Member_Count");
static_assert(sizeof(BP_GSC_Team_C_Get_Member_Count) == 0x000008, "Wrong size on BP_GSC_Team_C_Get_Member_Count");
static_assert(offsetof(BP_GSC_Team_C_Get_Member_Count, Members) == 0x000000, "Member 'BP_GSC_Team_C_Get_Member_Count::Members' has a wrong offset!");
static_assert(offsetof(BP_GSC_Team_C_Get_Member_Count, CallFunc_Array_Length_ReturnValue) == 0x000004, "Member 'BP_GSC_Team_C_Get_Member_Count::CallFunc_Array_Length_ReturnValue' has a wrong offset!");

// Function BP_GSC_Team.BP_GSC_Team_C.Remove Player
// 0x0020 (0x0020 - 0x0000)
struct BP_GSC_Team_C_Remove_Player final
{
public:
	class ABP_PlayerController_Teams_C*           Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Is_Player_in_Team_Is_in_Team;             // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerState_Teams_C*                K2Node_DynamicCast_AsBP_Player_State_Teams;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_GSC_Team_C_Remove_Player) == 0x000008, "Wrong alignment on BP_GSC_Team_C_Remove_Player");
static_assert(sizeof(BP_GSC_Team_C_Remove_Player) == 0x000020, "Wrong size on BP_GSC_Team_C_Remove_Player");
static_assert(offsetof(BP_GSC_Team_C_Remove_Player, Player) == 0x000000, "Member 'BP_GSC_Team_C_Remove_Player::Player' has a wrong offset!");
static_assert(offsetof(BP_GSC_Team_C_Remove_Player, ReturnValue) == 0x000008, "Member 'BP_GSC_Team_C_Remove_Player::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GSC_Team_C_Remove_Player, CallFunc_Is_Player_in_Team_Is_in_Team) == 0x000009, "Member 'BP_GSC_Team_C_Remove_Player::CallFunc_Is_Player_in_Team_Is_in_Team' has a wrong offset!");
static_assert(offsetof(BP_GSC_Team_C_Remove_Player, K2Node_DynamicCast_AsBP_Player_State_Teams) == 0x000010, "Member 'BP_GSC_Team_C_Remove_Player::K2Node_DynamicCast_AsBP_Player_State_Teams' has a wrong offset!");
static_assert(offsetof(BP_GSC_Team_C_Remove_Player, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_GSC_Team_C_Remove_Player::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_GSC_Team_C_Remove_Player, CallFunc_Array_RemoveItem_ReturnValue) == 0x000019, "Member 'BP_GSC_Team_C_Remove_Player::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");

// Function BP_GSC_Team.BP_GSC_Team_C.Is Player in Team
// 0x0020 (0x0020 - 0x0000)
struct BP_GSC_Team_C_Is_Player_in_Team final
{
public:
	class ABP_PlayerController_Teams_C*           Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Is_in_Team;                                        // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerState_Teams_C*                K2Node_DynamicCast_AsBP_Player_State_Teams;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_GSC_Team_C_Is_Player_in_Team) == 0x000008, "Wrong alignment on BP_GSC_Team_C_Is_Player_in_Team");
static_assert(sizeof(BP_GSC_Team_C_Is_Player_in_Team) == 0x000020, "Wrong size on BP_GSC_Team_C_Is_Player_in_Team");
static_assert(offsetof(BP_GSC_Team_C_Is_Player_in_Team, Player) == 0x000000, "Member 'BP_GSC_Team_C_Is_Player_in_Team::Player' has a wrong offset!");
static_assert(offsetof(BP_GSC_Team_C_Is_Player_in_Team, Is_in_Team) == 0x000008, "Member 'BP_GSC_Team_C_Is_Player_in_Team::Is_in_Team' has a wrong offset!");
static_assert(offsetof(BP_GSC_Team_C_Is_Player_in_Team, CallFunc_IsValid_ReturnValue) == 0x000009, "Member 'BP_GSC_Team_C_Is_Player_in_Team::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GSC_Team_C_Is_Player_in_Team, K2Node_DynamicCast_AsBP_Player_State_Teams) == 0x000010, "Member 'BP_GSC_Team_C_Is_Player_in_Team::K2Node_DynamicCast_AsBP_Player_State_Teams' has a wrong offset!");
static_assert(offsetof(BP_GSC_Team_C_Is_Player_in_Team, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_GSC_Team_C_Is_Player_in_Team::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_GSC_Team_C_Is_Player_in_Team, CallFunc_Array_Contains_ReturnValue) == 0x000019, "Member 'BP_GSC_Team_C_Is_Player_in_Team::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");

// Function BP_GSC_Team.BP_GSC_Team_C.Get Side
// 0x0008 (0x0008 - 0x0000)
struct BP_GSC_Team_C_Get_Side final
{
public:
	class FName                                   Side_0;                                            // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GSC_Team_C_Get_Side) == 0x000004, "Wrong alignment on BP_GSC_Team_C_Get_Side");
static_assert(sizeof(BP_GSC_Team_C_Get_Side) == 0x000008, "Wrong size on BP_GSC_Team_C_Get_Side");
static_assert(offsetof(BP_GSC_Team_C_Get_Side, Side_0) == 0x000000, "Member 'BP_GSC_Team_C_Get_Side::Side_0' has a wrong offset!");

// Function BP_GSC_Team.BP_GSC_Team_C.Set Side
// 0x0098 (0x0098 - 0x0000)
struct BP_GSC_Team_C_Set_Side final
{
public:
	class FName                                   Side_0;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Success;                                           // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_GameState_Teams_C*                  K2Node_DynamicCast_AsBP_Game_State_Teams;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_22[0x2];                                       // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class ABP_PlayerState_Teams_C*                CallFunc_Array_Get_Item;                           // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A[0x2];                                       // 0x008A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_GSC_Team_C_Set_Side) == 0x000008, "Wrong alignment on BP_GSC_Team_C_Set_Side");
static_assert(sizeof(BP_GSC_Team_C_Set_Side) == 0x000098, "Wrong size on BP_GSC_Team_C_Set_Side");
static_assert(offsetof(BP_GSC_Team_C_Set_Side, Side_0) == 0x000000, "Member 'BP_GSC_Team_C_Set_Side::Side_0' has a wrong offset!");
static_assert(offsetof(BP_GSC_Team_C_Set_Side, Success) == 0x000008, "Member 'BP_GSC_Team_C_Set_Side::Success' has a wrong offset!");
static_assert(offsetof(BP_GSC_Team_C_Set_Side, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'BP_GSC_Team_C_Set_Side::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_GSC_Team_C_Set_Side, CallFunc_GetGameState_ReturnValue) == 0x000010, "Member 'BP_GSC_Team_C_Set_Side::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GSC_Team_C_Set_Side, K2Node_DynamicCast_AsBP_Game_State_Teams) == 0x000018, "Member 'BP_GSC_Team_C_Set_Side::K2Node_DynamicCast_AsBP_Game_State_Teams' has a wrong offset!");
static_assert(offsetof(BP_GSC_Team_C_Set_Side, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_GSC_Team_C_Set_Side::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_GSC_Team_C_Set_Side, CallFunc_IsDedicatedServer_ReturnValue) == 0x000021, "Member 'BP_GSC_Team_C_Set_Side::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GSC_Team_C_Set_Side, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'BP_GSC_Team_C_Set_Side::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_GSC_Team_C_Set_Side, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'BP_GSC_Team_C_Set_Side::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GSC_Team_C_Set_Side, CallFunc_GetDisplayName_ReturnValue) == 0x000030, "Member 'BP_GSC_Team_C_Set_Side::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GSC_Team_C_Set_Side, CallFunc_Conv_NameToString_ReturnValue) == 0x000040, "Member 'BP_GSC_Team_C_Set_Side::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GSC_Team_C_Set_Side, CallFunc_Concat_StrStr_ReturnValue) == 0x000050, "Member 'BP_GSC_Team_C_Set_Side::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GSC_Team_C_Set_Side, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000060, "Member 'BP_GSC_Team_C_Set_Side::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_GSC_Team_C_Set_Side, CallFunc_Array_Get_Item) == 0x000070, "Member 'BP_GSC_Team_C_Set_Side::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_GSC_Team_C_Set_Side, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000078, "Member 'BP_GSC_Team_C_Set_Side::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_GSC_Team_C_Set_Side, CallFunc_IsValid_ReturnValue) == 0x000088, "Member 'BP_GSC_Team_C_Set_Side::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GSC_Team_C_Set_Side, CallFunc_IsValid_ReturnValue_1) == 0x000089, "Member 'BP_GSC_Team_C_Set_Side::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_GSC_Team_C_Set_Side, CallFunc_Array_Length_ReturnValue) == 0x00008C, "Member 'BP_GSC_Team_C_Set_Side::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GSC_Team_C_Set_Side, CallFunc_Less_IntInt_ReturnValue) == 0x000090, "Member 'BP_GSC_Team_C_Set_Side::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function BP_GSC_Team.BP_GSC_Team_C.Set Team Index
// 0x0058 (0x0058 - 0x0000)
struct BP_GSC_Team_C_Set_Team_Index final
{
public:
	int32                                         TeamIndex_0;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Success;                                           // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GSC_Team_C_Set_Team_Index) == 0x000008, "Wrong alignment on BP_GSC_Team_C_Set_Team_Index");
static_assert(sizeof(BP_GSC_Team_C_Set_Team_Index) == 0x000058, "Wrong size on BP_GSC_Team_C_Set_Team_Index");
static_assert(offsetof(BP_GSC_Team_C_Set_Team_Index, TeamIndex_0) == 0x000000, "Member 'BP_GSC_Team_C_Set_Team_Index::TeamIndex_0' has a wrong offset!");
static_assert(offsetof(BP_GSC_Team_C_Set_Team_Index, Success) == 0x000004, "Member 'BP_GSC_Team_C_Set_Team_Index::Success' has a wrong offset!");
static_assert(offsetof(BP_GSC_Team_C_Set_Team_Index, CallFunc_IsDedicatedServer_ReturnValue) == 0x000005, "Member 'BP_GSC_Team_C_Set_Team_Index::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GSC_Team_C_Set_Team_Index, CallFunc_GetDisplayName_ReturnValue) == 0x000008, "Member 'BP_GSC_Team_C_Set_Team_Index::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GSC_Team_C_Set_Team_Index, CallFunc_Concat_StrStr_ReturnValue) == 0x000018, "Member 'BP_GSC_Team_C_Set_Team_Index::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GSC_Team_C_Set_Team_Index, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000028, "Member 'BP_GSC_Team_C_Set_Team_Index::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_GSC_Team_C_Set_Team_Index, CallFunc_Conv_IntToString_ReturnValue) == 0x000038, "Member 'BP_GSC_Team_C_Set_Team_Index::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_GSC_Team_C_Set_Team_Index, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000048, "Member 'BP_GSC_Team_C_Set_Team_Index::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");

// Function BP_GSC_Team.BP_GSC_Team_C.Get Team Index
// 0x0004 (0x0004 - 0x0000)
struct BP_GSC_Team_C_Get_Team_Index final
{
public:
	int32                                         Index_0;                                           // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_GSC_Team_C_Get_Team_Index) == 0x000004, "Wrong alignment on BP_GSC_Team_C_Get_Team_Index");
static_assert(sizeof(BP_GSC_Team_C_Get_Team_Index) == 0x000004, "Wrong size on BP_GSC_Team_C_Get_Team_Index");
static_assert(offsetof(BP_GSC_Team_C_Get_Team_Index, Index_0) == 0x000000, "Member 'BP_GSC_Team_C_Get_Team_Index::Index_0' has a wrong offset!");

// Function BP_GSC_Team.BP_GSC_Team_C.Get Members
// 0x0010 (0x0010 - 0x0000)
struct BP_GSC_Team_C_Get_Members final
{
public:
	TArray<class ABP_PlayerState_Teams_C*>        Member_States_0;                                   // 0x0000(0x0010)(Parm, OutParm)
};
static_assert(alignof(BP_GSC_Team_C_Get_Members) == 0x000008, "Wrong alignment on BP_GSC_Team_C_Get_Members");
static_assert(sizeof(BP_GSC_Team_C_Get_Members) == 0x000010, "Wrong size on BP_GSC_Team_C_Get_Members");
static_assert(offsetof(BP_GSC_Team_C_Get_Members, Member_States_0) == 0x000000, "Member 'BP_GSC_Team_C_Get_Members::Member_States_0' has a wrong offset!");

}

