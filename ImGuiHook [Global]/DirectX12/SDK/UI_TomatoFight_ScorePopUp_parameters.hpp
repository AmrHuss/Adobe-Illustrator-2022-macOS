#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_TomatoFight_ScorePopUp

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Struct_GunFightStatistics_structs.hpp"


namespace SDK::Params
{

// Function UI_TomatoFight_ScorePopUp.UI_TomatoFight_ScorePopUp_C.ExecuteUbergraph_UI_TomatoFight_ScorePopUp
// 0x00C8 (0x00C8 - 0x0000)
struct UI_TomatoFight_ScorePopUp_C_ExecuteUbergraph_UI_TomatoFight_ScorePopUp final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_GunFightStatistics             CallFunc_GetStatisticGunFight_Statistic;           // 0x0008(0x0050)(HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0058(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0068(0x0010)(ZeroConstructor, NoDestructor)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue_1;               // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_GameState_TomatoFight_C*            K2Node_DynamicCast_AsBP_Game_State_Tomato_Fight;   // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_GameState_TomatoFight_C*            K2Node_DynamicCast_AsBP_Game_State_Tomato_Fight_1; // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B2[0x6];                                       // 0x00B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerState_TomatoFight_C*          K2Node_DynamicCast_AsBP_Player_State_Tomato_Fight; // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_TomatoFight_ScorePopUp_C_ExecuteUbergraph_UI_TomatoFight_ScorePopUp) == 0x000008, "Wrong alignment on UI_TomatoFight_ScorePopUp_C_ExecuteUbergraph_UI_TomatoFight_ScorePopUp");
static_assert(sizeof(UI_TomatoFight_ScorePopUp_C_ExecuteUbergraph_UI_TomatoFight_ScorePopUp) == 0x0000C8, "Wrong size on UI_TomatoFight_ScorePopUp_C_ExecuteUbergraph_UI_TomatoFight_ScorePopUp");
static_assert(offsetof(UI_TomatoFight_ScorePopUp_C_ExecuteUbergraph_UI_TomatoFight_ScorePopUp, EntryPoint) == 0x000000, "Member 'UI_TomatoFight_ScorePopUp_C_ExecuteUbergraph_UI_TomatoFight_ScorePopUp::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_TomatoFight_ScorePopUp_C_ExecuteUbergraph_UI_TomatoFight_ScorePopUp, CallFunc_GetStatisticGunFight_Statistic) == 0x000008, "Member 'UI_TomatoFight_ScorePopUp_C_ExecuteUbergraph_UI_TomatoFight_ScorePopUp::CallFunc_GetStatisticGunFight_Statistic' has a wrong offset!");
static_assert(offsetof(UI_TomatoFight_ScorePopUp_C_ExecuteUbergraph_UI_TomatoFight_ScorePopUp, K2Node_CreateDelegate_OutputDelegate) == 0x000058, "Member 'UI_TomatoFight_ScorePopUp_C_ExecuteUbergraph_UI_TomatoFight_ScorePopUp::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_TomatoFight_ScorePopUp_C_ExecuteUbergraph_UI_TomatoFight_ScorePopUp, K2Node_CreateDelegate_OutputDelegate_1) == 0x000068, "Member 'UI_TomatoFight_ScorePopUp_C_ExecuteUbergraph_UI_TomatoFight_ScorePopUp::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(UI_TomatoFight_ScorePopUp_C_ExecuteUbergraph_UI_TomatoFight_ScorePopUp, CallFunc_GetGameState_ReturnValue) == 0x000078, "Member 'UI_TomatoFight_ScorePopUp_C_ExecuteUbergraph_UI_TomatoFight_ScorePopUp::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_TomatoFight_ScorePopUp_C_ExecuteUbergraph_UI_TomatoFight_ScorePopUp, CallFunc_GetGameState_ReturnValue_1) == 0x000080, "Member 'UI_TomatoFight_ScorePopUp_C_ExecuteUbergraph_UI_TomatoFight_ScorePopUp::CallFunc_GetGameState_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_TomatoFight_ScorePopUp_C_ExecuteUbergraph_UI_TomatoFight_ScorePopUp, K2Node_DynamicCast_AsBP_Game_State_Tomato_Fight) == 0x000088, "Member 'UI_TomatoFight_ScorePopUp_C_ExecuteUbergraph_UI_TomatoFight_ScorePopUp::K2Node_DynamicCast_AsBP_Game_State_Tomato_Fight' has a wrong offset!");
static_assert(offsetof(UI_TomatoFight_ScorePopUp_C_ExecuteUbergraph_UI_TomatoFight_ScorePopUp, K2Node_DynamicCast_bSuccess) == 0x000090, "Member 'UI_TomatoFight_ScorePopUp_C_ExecuteUbergraph_UI_TomatoFight_ScorePopUp::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_TomatoFight_ScorePopUp_C_ExecuteUbergraph_UI_TomatoFight_ScorePopUp, K2Node_DynamicCast_AsBP_Game_State_Tomato_Fight_1) == 0x000098, "Member 'UI_TomatoFight_ScorePopUp_C_ExecuteUbergraph_UI_TomatoFight_ScorePopUp::K2Node_DynamicCast_AsBP_Game_State_Tomato_Fight_1' has a wrong offset!");
static_assert(offsetof(UI_TomatoFight_ScorePopUp_C_ExecuteUbergraph_UI_TomatoFight_ScorePopUp, K2Node_DynamicCast_bSuccess_1) == 0x0000A0, "Member 'UI_TomatoFight_ScorePopUp_C_ExecuteUbergraph_UI_TomatoFight_ScorePopUp::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(UI_TomatoFight_ScorePopUp_C_ExecuteUbergraph_UI_TomatoFight_ScorePopUp, CallFunc_GetOwningPlayer_ReturnValue) == 0x0000A8, "Member 'UI_TomatoFight_ScorePopUp_C_ExecuteUbergraph_UI_TomatoFight_ScorePopUp::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_TomatoFight_ScorePopUp_C_ExecuteUbergraph_UI_TomatoFight_ScorePopUp, CallFunc_IsValid_ReturnValue) == 0x0000B0, "Member 'UI_TomatoFight_ScorePopUp_C_ExecuteUbergraph_UI_TomatoFight_ScorePopUp::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_TomatoFight_ScorePopUp_C_ExecuteUbergraph_UI_TomatoFight_ScorePopUp, CallFunc_IsValid_ReturnValue_1) == 0x0000B1, "Member 'UI_TomatoFight_ScorePopUp_C_ExecuteUbergraph_UI_TomatoFight_ScorePopUp::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_TomatoFight_ScorePopUp_C_ExecuteUbergraph_UI_TomatoFight_ScorePopUp, K2Node_DynamicCast_AsBP_Player_State_Tomato_Fight) == 0x0000B8, "Member 'UI_TomatoFight_ScorePopUp_C_ExecuteUbergraph_UI_TomatoFight_ScorePopUp::K2Node_DynamicCast_AsBP_Player_State_Tomato_Fight' has a wrong offset!");
static_assert(offsetof(UI_TomatoFight_ScorePopUp_C_ExecuteUbergraph_UI_TomatoFight_ScorePopUp, K2Node_DynamicCast_bSuccess_2) == 0x0000C0, "Member 'UI_TomatoFight_ScorePopUp_C_ExecuteUbergraph_UI_TomatoFight_ScorePopUp::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(UI_TomatoFight_ScorePopUp_C_ExecuteUbergraph_UI_TomatoFight_ScorePopUp, CallFunc_IsValid_ReturnValue_2) == 0x0000C1, "Member 'UI_TomatoFight_ScorePopUp_C_ExecuteUbergraph_UI_TomatoFight_ScorePopUp::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

// Function UI_TomatoFight_ScorePopUp.UI_TomatoFight_ScorePopUp_C.Fade In New Score
// 0x0120 (0x0120 - 0x0000)
struct UI_TomatoFight_ScorePopUp_C_Fade_In_New_Score final
{
public:
	int32                                         New_Score;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Received_Score;                                    // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Temp_text_Variable;                                // 0x0008(0x0018)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0028(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable_1;                              // 0x0070(0x0018)()
	bool                                          Temp_bool_Variable;                                // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x0090(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00A8(0x0040)(HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_EC[0x4];                                       // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00F0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0100(0x0018)()
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_TomatoFight_ScorePopUp_C_Fade_In_New_Score) == 0x000008, "Wrong alignment on UI_TomatoFight_ScorePopUp_C_Fade_In_New_Score");
static_assert(sizeof(UI_TomatoFight_ScorePopUp_C_Fade_In_New_Score) == 0x000120, "Wrong size on UI_TomatoFight_ScorePopUp_C_Fade_In_New_Score");
static_assert(offsetof(UI_TomatoFight_ScorePopUp_C_Fade_In_New_Score, New_Score) == 0x000000, "Member 'UI_TomatoFight_ScorePopUp_C_Fade_In_New_Score::New_Score' has a wrong offset!");
static_assert(offsetof(UI_TomatoFight_ScorePopUp_C_Fade_In_New_Score, Received_Score) == 0x000004, "Member 'UI_TomatoFight_ScorePopUp_C_Fade_In_New_Score::Received_Score' has a wrong offset!");
static_assert(offsetof(UI_TomatoFight_ScorePopUp_C_Fade_In_New_Score, Temp_text_Variable) == 0x000008, "Member 'UI_TomatoFight_ScorePopUp_C_Fade_In_New_Score::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(UI_TomatoFight_ScorePopUp_C_Fade_In_New_Score, CallFunc_PlayAnimation_ReturnValue) == 0x000020, "Member 'UI_TomatoFight_ScorePopUp_C_Fade_In_New_Score::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_TomatoFight_ScorePopUp_C_Fade_In_New_Score, K2Node_MakeStruct_FormatArgumentData) == 0x000028, "Member 'UI_TomatoFight_ScorePopUp_C_Fade_In_New_Score::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(UI_TomatoFight_ScorePopUp_C_Fade_In_New_Score, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000068, "Member 'UI_TomatoFight_ScorePopUp_C_Fade_In_New_Score::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_TomatoFight_ScorePopUp_C_Fade_In_New_Score, Temp_text_Variable_1) == 0x000070, "Member 'UI_TomatoFight_ScorePopUp_C_Fade_In_New_Score::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_TomatoFight_ScorePopUp_C_Fade_In_New_Score, Temp_bool_Variable) == 0x000088, "Member 'UI_TomatoFight_ScorePopUp_C_Fade_In_New_Score::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UI_TomatoFight_ScorePopUp_C_Fade_In_New_Score, K2Node_Select_Default) == 0x000090, "Member 'UI_TomatoFight_ScorePopUp_C_Fade_In_New_Score::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UI_TomatoFight_ScorePopUp_C_Fade_In_New_Score, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000A8, "Member 'UI_TomatoFight_ScorePopUp_C_Fade_In_New_Score::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(UI_TomatoFight_ScorePopUp_C_Fade_In_New_Score, CallFunc_Subtract_IntInt_ReturnValue) == 0x0000E8, "Member 'UI_TomatoFight_ScorePopUp_C_Fade_In_New_Score::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_TomatoFight_ScorePopUp_C_Fade_In_New_Score, K2Node_MakeArray_Array) == 0x0000F0, "Member 'UI_TomatoFight_ScorePopUp_C_Fade_In_New_Score::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UI_TomatoFight_ScorePopUp_C_Fade_In_New_Score, CallFunc_Format_ReturnValue) == 0x000100, "Member 'UI_TomatoFight_ScorePopUp_C_Fade_In_New_Score::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_TomatoFight_ScorePopUp_C_Fade_In_New_Score, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000118, "Member 'UI_TomatoFight_ScorePopUp_C_Fade_In_New_Score::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");

}

