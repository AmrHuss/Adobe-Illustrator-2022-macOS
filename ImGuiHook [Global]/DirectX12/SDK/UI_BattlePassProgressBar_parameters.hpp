#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_BattlePassProgressBar

#include "Basic.hpp"

#include "E_BattlePassProgressBarParameter_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function UI_BattlePassProgressBar.UI_BattlePassProgressBar_C.ExecuteUbergraph_UI_BattlePassProgressBar
// 0x00C8 (0x00C8 - 0x0000)
struct UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	float                                         K2Node_CustomEvent_BaseXP;                         // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_AwardedXP;                      // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_BoostXP;                        // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUI_RewardScreen_BattlePass_C*          K2Node_CustomEvent_RewardScreen;                   // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsLevelUp;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_33[0x1];                                       // 0x0033(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_CustomEvent_Time;                           // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_2;    // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_3;    // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E[0x2];                                       // 0x003E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0040(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0058(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationTimeRange_ReturnValue;       // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue_1;         // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue_1;       // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0073(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue_2;       // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75[0x3];                                       // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationTimeRange_ReturnValue_1;     // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x008C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_9C[0x4];                                       // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x00A0(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue_2;         // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A9[0x3];                                       // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x00AC(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_BC[0x4];                                       // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_2;        // 0x00C0(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar) == 0x000008, "Wrong alignment on UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar");
static_assert(sizeof(UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar) == 0x0000C8, "Wrong size on UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar");
static_assert(offsetof(UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar, EntryPoint) == 0x000000, "Member 'UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar, CallFunc_IsValid_ReturnValue_1) == 0x000005, "Member 'UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar, K2Node_CustomEvent_BaseXP) == 0x000018, "Member 'UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar::K2Node_CustomEvent_BaseXP' has a wrong offset!");
static_assert(offsetof(UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar, K2Node_CustomEvent_AwardedXP) == 0x00001C, "Member 'UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar::K2Node_CustomEvent_AwardedXP' has a wrong offset!");
static_assert(offsetof(UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar, K2Node_CustomEvent_BoostXP) == 0x000020, "Member 'UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar::K2Node_CustomEvent_BoostXP' has a wrong offset!");
static_assert(offsetof(UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar, K2Node_CustomEvent_RewardScreen) == 0x000028, "Member 'UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar::K2Node_CustomEvent_RewardScreen' has a wrong offset!");
static_assert(offsetof(UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar, K2Node_CustomEvent_IsLevelUp) == 0x000030, "Member 'UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar::K2Node_CustomEvent_IsLevelUp' has a wrong offset!");
static_assert(offsetof(UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000031, "Member 'UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x000032, "Member 'UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar, K2Node_CustomEvent_Time) == 0x000034, "Member 'UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar::K2Node_CustomEvent_Time' has a wrong offset!");
static_assert(offsetof(UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar, CallFunc_Not_PreBool_ReturnValue) == 0x000038, "Member 'UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar, CallFunc_IsValid_ReturnValue_2) == 0x000039, "Member 'UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar, CallFunc_EqualEqual_ObjectObject_ReturnValue_2) == 0x00003A, "Member 'UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar::CallFunc_EqualEqual_ObjectObject_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar, CallFunc_IsValid_ReturnValue_3) == 0x00003B, "Member 'UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar, CallFunc_EqualEqual_ObjectObject_ReturnValue_3) == 0x00003C, "Member 'UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar::CallFunc_EqualEqual_ObjectObject_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar, CallFunc_IsValid_ReturnValue_4) == 0x00003D, "Member 'UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar, K2Node_CreateDelegate_OutputDelegate_1) == 0x000040, "Member 'UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar, CallFunc_IsValid_ReturnValue_5) == 0x000050, "Member 'UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000058, "Member 'UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000060, "Member 'UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar, CallFunc_PlayAnimationTimeRange_ReturnValue) == 0x000068, "Member 'UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar::CallFunc_PlayAnimationTimeRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar, CallFunc_Greater_FloatFloat_ReturnValue_1) == 0x000070, "Member 'UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar::CallFunc_Greater_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000071, "Member 'UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar, CallFunc_LessEqual_FloatFloat_ReturnValue_1) == 0x000072, "Member 'UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar::CallFunc_LessEqual_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar, CallFunc_BooleanAND_ReturnValue) == 0x000073, "Member 'UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar, CallFunc_LessEqual_FloatFloat_ReturnValue_2) == 0x000074, "Member 'UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar::CallFunc_LessEqual_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000078, "Member 'UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x00007C, "Member 'UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar, CallFunc_PlayAnimationTimeRange_ReturnValue_1) == 0x000080, "Member 'UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar::CallFunc_PlayAnimationTimeRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar, CallFunc_Add_FloatFloat_ReturnValue) == 0x000088, "Member 'UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar, K2Node_CreateDelegate_OutputDelegate_2) == 0x00008C, "Member 'UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x0000A0, "Member 'UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar, CallFunc_Greater_FloatFloat_ReturnValue_2) == 0x0000A8, "Member 'UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar::CallFunc_Greater_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar, K2Node_CreateDelegate_OutputDelegate_3) == 0x0000AC, "Member 'UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar, CallFunc_K2_SetTimerDelegate_ReturnValue_2) == 0x0000C0, "Member 'UI_BattlePassProgressBar_C_ExecuteUbergraph_UI_BattlePassProgressBar::CallFunc_K2_SetTimerDelegate_ReturnValue_2' has a wrong offset!");

// Function UI_BattlePassProgressBar.UI_BattlePassProgressBar_C.Animation Timer
// 0x0004 (0x0004 - 0x0000)
struct UI_BattlePassProgressBar_C_Animation_Timer final
{
public:
	float                                         Time;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_BattlePassProgressBar_C_Animation_Timer) == 0x000004, "Wrong alignment on UI_BattlePassProgressBar_C_Animation_Timer");
static_assert(sizeof(UI_BattlePassProgressBar_C_Animation_Timer) == 0x000004, "Wrong size on UI_BattlePassProgressBar_C_Animation_Timer");
static_assert(offsetof(UI_BattlePassProgressBar_C_Animation_Timer, Time) == 0x000000, "Member 'UI_BattlePassProgressBar_C_Animation_Timer::Time' has a wrong offset!");

// Function UI_BattlePassProgressBar.UI_BattlePassProgressBar_C.EventPlayBarAnimation
// 0x0020 (0x0020 - 0x0000)
struct UI_BattlePassProgressBar_C_EventPlayBarAnimation final
{
public:
	float                                         BaseXP;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AwardedXP;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BoostXP;                                           // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUI_RewardScreen_BattlePass_C*          RewardScreen;                                      // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsLevelUp;                                         // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_BattlePassProgressBar_C_EventPlayBarAnimation) == 0x000008, "Wrong alignment on UI_BattlePassProgressBar_C_EventPlayBarAnimation");
static_assert(sizeof(UI_BattlePassProgressBar_C_EventPlayBarAnimation) == 0x000020, "Wrong size on UI_BattlePassProgressBar_C_EventPlayBarAnimation");
static_assert(offsetof(UI_BattlePassProgressBar_C_EventPlayBarAnimation, BaseXP) == 0x000000, "Member 'UI_BattlePassProgressBar_C_EventPlayBarAnimation::BaseXP' has a wrong offset!");
static_assert(offsetof(UI_BattlePassProgressBar_C_EventPlayBarAnimation, AwardedXP) == 0x000004, "Member 'UI_BattlePassProgressBar_C_EventPlayBarAnimation::AwardedXP' has a wrong offset!");
static_assert(offsetof(UI_BattlePassProgressBar_C_EventPlayBarAnimation, BoostXP) == 0x000008, "Member 'UI_BattlePassProgressBar_C_EventPlayBarAnimation::BoostXP' has a wrong offset!");
static_assert(offsetof(UI_BattlePassProgressBar_C_EventPlayBarAnimation, RewardScreen) == 0x000010, "Member 'UI_BattlePassProgressBar_C_EventPlayBarAnimation::RewardScreen' has a wrong offset!");
static_assert(offsetof(UI_BattlePassProgressBar_C_EventPlayBarAnimation, IsLevelUp) == 0x000018, "Member 'UI_BattlePassProgressBar_C_EventPlayBarAnimation::IsLevelUp' has a wrong offset!");

// Function UI_BattlePassProgressBar.UI_BattlePassProgressBar_C.Set Progress Parameter
// 0x002C (0x002C - 0x0000)
struct UI_BattlePassProgressBar_C_Set_Progress_Parameter final
{
public:
	E_BattlePassProgressBarParameter              Parameter;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Value;                                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable;                                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_1;                              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_2;                              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_BattlePassProgressBarParameter              Temp_byte_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_23[0x1];                                       // 0x0023(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Select_Default;                             // 0x0024(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_BattlePassProgressBar_C_Set_Progress_Parameter) == 0x000004, "Wrong alignment on UI_BattlePassProgressBar_C_Set_Progress_Parameter");
static_assert(sizeof(UI_BattlePassProgressBar_C_Set_Progress_Parameter) == 0x00002C, "Wrong size on UI_BattlePassProgressBar_C_Set_Progress_Parameter");
static_assert(offsetof(UI_BattlePassProgressBar_C_Set_Progress_Parameter, Parameter) == 0x000000, "Member 'UI_BattlePassProgressBar_C_Set_Progress_Parameter::Parameter' has a wrong offset!");
static_assert(offsetof(UI_BattlePassProgressBar_C_Set_Progress_Parameter, Value) == 0x000004, "Member 'UI_BattlePassProgressBar_C_Set_Progress_Parameter::Value' has a wrong offset!");
static_assert(offsetof(UI_BattlePassProgressBar_C_Set_Progress_Parameter, Temp_name_Variable) == 0x000008, "Member 'UI_BattlePassProgressBar_C_Set_Progress_Parameter::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(UI_BattlePassProgressBar_C_Set_Progress_Parameter, Temp_name_Variable_1) == 0x000010, "Member 'UI_BattlePassProgressBar_C_Set_Progress_Parameter::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_BattlePassProgressBar_C_Set_Progress_Parameter, Temp_name_Variable_2) == 0x000018, "Member 'UI_BattlePassProgressBar_C_Set_Progress_Parameter::Temp_name_Variable_2' has a wrong offset!");
static_assert(offsetof(UI_BattlePassProgressBar_C_Set_Progress_Parameter, Temp_byte_Variable) == 0x000020, "Member 'UI_BattlePassProgressBar_C_Set_Progress_Parameter::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UI_BattlePassProgressBar_C_Set_Progress_Parameter, CallFunc_IsValid_ReturnValue) == 0x000021, "Member 'UI_BattlePassProgressBar_C_Set_Progress_Parameter::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BattlePassProgressBar_C_Set_Progress_Parameter, CallFunc_IsValid_ReturnValue_1) == 0x000022, "Member 'UI_BattlePassProgressBar_C_Set_Progress_Parameter::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_BattlePassProgressBar_C_Set_Progress_Parameter, K2Node_Select_Default) == 0x000024, "Member 'UI_BattlePassProgressBar_C_Set_Progress_Parameter::K2Node_Select_Default' has a wrong offset!");

// Function UI_BattlePassProgressBar.UI_BattlePassProgressBar_C.Get Dynamic Material
// 0x0010 (0x0010 - 0x0000)
struct UI_BattlePassProgressBar_C_Get_Dynamic_Material final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_BattlePassProgressBar_C_Get_Dynamic_Material) == 0x000008, "Wrong alignment on UI_BattlePassProgressBar_C_Get_Dynamic_Material");
static_assert(sizeof(UI_BattlePassProgressBar_C_Get_Dynamic_Material) == 0x000010, "Wrong size on UI_BattlePassProgressBar_C_Get_Dynamic_Material");
static_assert(offsetof(UI_BattlePassProgressBar_C_Get_Dynamic_Material, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'UI_BattlePassProgressBar_C_Get_Dynamic_Material::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_BattlePassProgressBar_C_Get_Dynamic_Material, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'UI_BattlePassProgressBar_C_Get_Dynamic_Material::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

}

