#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VoiceLine

#include "Basic.hpp"

#include "EArchetypesGroup_structs.hpp"
#include "FArchetypesVoiceLines_structs.hpp"
#include "FVoiceLine_structs.hpp"


namespace SDK::Params
{

// Function BP_VoiceLine.BP_VoiceLine_C.Play
// 0x0148 (0x0148 - 0x0000)
struct BP_VoiceLine_C_Play final
{
public:
	bool                                          WasPlayed;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	EArchetypesGroup                              Temp_byte_Variable;                                // 0x0001(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x2];                                        // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Character_Tutorial_C*               K2Node_DynamicCast_AsBP_Character_Tutorial;        // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFArchetypesVoiceLines                 CallFunc_Array_Get_Item;                           // 0x0028(0x0050)(HasGetValueTypeHash)
	EArchetypesGroup                              CallFunc_GetArchetypeGroup_Group;                  // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFVoiceLine                            CallFunc_Map_Find_Value;                           // 0x0090(0x0030)(HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Map_Length_ReturnValue;                   // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_EC[0x4];                                       // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_101[0x7];                                      // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFVoiceLine                            CallFunc_Map_Find_Value_1;                         // 0x0108(0x0030)(HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_PlayVoiceLine_WasPlayed;                  // 0x013A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_PlayVoiceLine_WasPlayed_1;                // 0x013B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_VoiceLine_C_Play) == 0x000008, "Wrong alignment on BP_VoiceLine_C_Play");
static_assert(sizeof(BP_VoiceLine_C_Play) == 0x000148, "Wrong size on BP_VoiceLine_C_Play");
static_assert(offsetof(BP_VoiceLine_C_Play, WasPlayed) == 0x000000, "Member 'BP_VoiceLine_C_Play::WasPlayed' has a wrong offset!");
static_assert(offsetof(BP_VoiceLine_C_Play, Temp_byte_Variable) == 0x000001, "Member 'BP_VoiceLine_C_Play::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_VoiceLine_C_Play, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BP_VoiceLine_C_Play::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_VoiceLine_C_Play, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'BP_VoiceLine_C_Play::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_VoiceLine_C_Play, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_VoiceLine_C_Play::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VoiceLine_C_Play, CallFunc_GetPlayerPawn_ReturnValue) == 0x000010, "Member 'BP_VoiceLine_C_Play::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VoiceLine_C_Play, K2Node_DynamicCast_AsBP_Character_Tutorial) == 0x000018, "Member 'BP_VoiceLine_C_Play::K2Node_DynamicCast_AsBP_Character_Tutorial' has a wrong offset!");
static_assert(offsetof(BP_VoiceLine_C_Play, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_VoiceLine_C_Play::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_VoiceLine_C_Play, CallFunc_Array_Get_Item) == 0x000028, "Member 'BP_VoiceLine_C_Play::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_VoiceLine_C_Play, CallFunc_GetArchetypeGroup_Group) == 0x000078, "Member 'BP_VoiceLine_C_Play::CallFunc_GetArchetypeGroup_Group' has a wrong offset!");
static_assert(offsetof(BP_VoiceLine_C_Play, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000080, "Member 'BP_VoiceLine_C_Play::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VoiceLine_C_Play, CallFunc_Map_Find_Value) == 0x000090, "Member 'BP_VoiceLine_C_Play::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_VoiceLine_C_Play, CallFunc_Map_Find_ReturnValue) == 0x0000C0, "Member 'BP_VoiceLine_C_Play::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VoiceLine_C_Play, CallFunc_Concat_StrStr_ReturnValue) == 0x0000C8, "Member 'BP_VoiceLine_C_Play::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VoiceLine_C_Play, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000D8, "Member 'BP_VoiceLine_C_Play::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_VoiceLine_C_Play, CallFunc_Map_Length_ReturnValue) == 0x0000E8, "Member 'BP_VoiceLine_C_Play::CallFunc_Map_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VoiceLine_C_Play, CallFunc_Concat_StrStr_ReturnValue_2) == 0x0000F0, "Member 'BP_VoiceLine_C_Play::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_VoiceLine_C_Play, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000100, "Member 'BP_VoiceLine_C_Play::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VoiceLine_C_Play, CallFunc_Map_Find_Value_1) == 0x000108, "Member 'BP_VoiceLine_C_Play::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(BP_VoiceLine_C_Play, CallFunc_Map_Find_ReturnValue_1) == 0x000138, "Member 'BP_VoiceLine_C_Play::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_VoiceLine_C_Play, CallFunc_BooleanAND_ReturnValue) == 0x000139, "Member 'BP_VoiceLine_C_Play::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VoiceLine_C_Play, CallFunc_PlayVoiceLine_WasPlayed) == 0x00013A, "Member 'BP_VoiceLine_C_Play::CallFunc_PlayVoiceLine_WasPlayed' has a wrong offset!");
static_assert(offsetof(BP_VoiceLine_C_Play, CallFunc_PlayVoiceLine_WasPlayed_1) == 0x00013B, "Member 'BP_VoiceLine_C_Play::CallFunc_PlayVoiceLine_WasPlayed_1' has a wrong offset!");
static_assert(offsetof(BP_VoiceLine_C_Play, CallFunc_Array_Length_ReturnValue) == 0x00013C, "Member 'BP_VoiceLine_C_Play::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_VoiceLine_C_Play, CallFunc_Less_IntInt_ReturnValue) == 0x000140, "Member 'BP_VoiceLine_C_Play::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}

