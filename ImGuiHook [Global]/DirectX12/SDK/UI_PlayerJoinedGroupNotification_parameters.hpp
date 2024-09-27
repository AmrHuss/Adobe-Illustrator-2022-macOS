#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_PlayerJoinedGroupNotification

#include "Basic.hpp"


namespace SDK::Params
{

// Function UI_PlayerJoinedGroupNotification.UI_PlayerJoinedGroupNotification_C.ExecuteUbergraph_UI_PlayerJoinedGroupNotification
// 0x00A8 (0x00A8 - 0x0000)
struct UI_PlayerJoinedGroupNotification_C_ExecuteUbergraph_UI_PlayerJoinedGroupNotification final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0040(0x0010)(ZeroConstructor, NoDestructor)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0050(0x0018)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocalPlayer_ReturnValue;                // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0078(0x0018)()
	class FText                                   CallFunc_MakeLiteralText_ReturnValue_1;            // 0x0090(0x0018)()
};
static_assert(alignof(UI_PlayerJoinedGroupNotification_C_ExecuteUbergraph_UI_PlayerJoinedGroupNotification) == 0x000008, "Wrong alignment on UI_PlayerJoinedGroupNotification_C_ExecuteUbergraph_UI_PlayerJoinedGroupNotification");
static_assert(sizeof(UI_PlayerJoinedGroupNotification_C_ExecuteUbergraph_UI_PlayerJoinedGroupNotification) == 0x0000A8, "Wrong size on UI_PlayerJoinedGroupNotification_C_ExecuteUbergraph_UI_PlayerJoinedGroupNotification");
static_assert(offsetof(UI_PlayerJoinedGroupNotification_C_ExecuteUbergraph_UI_PlayerJoinedGroupNotification, EntryPoint) == 0x000000, "Member 'UI_PlayerJoinedGroupNotification_C_ExecuteUbergraph_UI_PlayerJoinedGroupNotification::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_PlayerJoinedGroupNotification_C_ExecuteUbergraph_UI_PlayerJoinedGroupNotification, CallFunc_Conv_TextToString_ReturnValue) == 0x000008, "Member 'UI_PlayerJoinedGroupNotification_C_ExecuteUbergraph_UI_PlayerJoinedGroupNotification::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_PlayerJoinedGroupNotification_C_ExecuteUbergraph_UI_PlayerJoinedGroupNotification, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'UI_PlayerJoinedGroupNotification_C_ExecuteUbergraph_UI_PlayerJoinedGroupNotification::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_PlayerJoinedGroupNotification_C_ExecuteUbergraph_UI_PlayerJoinedGroupNotification, CallFunc_Concat_StrStr_ReturnValue) == 0x000020, "Member 'UI_PlayerJoinedGroupNotification_C_ExecuteUbergraph_UI_PlayerJoinedGroupNotification::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_PlayerJoinedGroupNotification_C_ExecuteUbergraph_UI_PlayerJoinedGroupNotification, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000030, "Member 'UI_PlayerJoinedGroupNotification_C_ExecuteUbergraph_UI_PlayerJoinedGroupNotification::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_PlayerJoinedGroupNotification_C_ExecuteUbergraph_UI_PlayerJoinedGroupNotification, K2Node_CreateDelegate_OutputDelegate) == 0x000040, "Member 'UI_PlayerJoinedGroupNotification_C_ExecuteUbergraph_UI_PlayerJoinedGroupNotification::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UI_PlayerJoinedGroupNotification_C_ExecuteUbergraph_UI_PlayerJoinedGroupNotification, CallFunc_Conv_StringToText_ReturnValue) == 0x000050, "Member 'UI_PlayerJoinedGroupNotification_C_ExecuteUbergraph_UI_PlayerJoinedGroupNotification::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_PlayerJoinedGroupNotification_C_ExecuteUbergraph_UI_PlayerJoinedGroupNotification, CallFunc_PlayAnimation_ReturnValue_1) == 0x000068, "Member 'UI_PlayerJoinedGroupNotification_C_ExecuteUbergraph_UI_PlayerJoinedGroupNotification::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_PlayerJoinedGroupNotification_C_ExecuteUbergraph_UI_PlayerJoinedGroupNotification, CallFunc_IsLocalPlayer_ReturnValue) == 0x000070, "Member 'UI_PlayerJoinedGroupNotification_C_ExecuteUbergraph_UI_PlayerJoinedGroupNotification::CallFunc_IsLocalPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_PlayerJoinedGroupNotification_C_ExecuteUbergraph_UI_PlayerJoinedGroupNotification, CallFunc_MakeLiteralText_ReturnValue) == 0x000078, "Member 'UI_PlayerJoinedGroupNotification_C_ExecuteUbergraph_UI_PlayerJoinedGroupNotification::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_PlayerJoinedGroupNotification_C_ExecuteUbergraph_UI_PlayerJoinedGroupNotification, CallFunc_MakeLiteralText_ReturnValue_1) == 0x000090, "Member 'UI_PlayerJoinedGroupNotification_C_ExecuteUbergraph_UI_PlayerJoinedGroupNotification::CallFunc_MakeLiteralText_ReturnValue_1' has a wrong offset!");

// Function UI_PlayerJoinedGroupNotification.UI_PlayerJoinedGroupNotification_C.ToString
// 0x0060 (0x0060 - 0x0000)
struct UI_PlayerJoinedGroupNotification_C_ToString final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NetIdToString_ReturnValue;           // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_PlayerJoinedGroupNotification_C_ToString) == 0x000008, "Wrong alignment on UI_PlayerJoinedGroupNotification_C_ToString");
static_assert(sizeof(UI_PlayerJoinedGroupNotification_C_ToString) == 0x000060, "Wrong size on UI_PlayerJoinedGroupNotification_C_ToString");
static_assert(offsetof(UI_PlayerJoinedGroupNotification_C_ToString, ReturnValue) == 0x000000, "Member 'UI_PlayerJoinedGroupNotification_C_ToString::ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_PlayerJoinedGroupNotification_C_ToString, CallFunc_GetDisplayName_ReturnValue) == 0x000010, "Member 'UI_PlayerJoinedGroupNotification_C_ToString::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_PlayerJoinedGroupNotification_C_ToString, CallFunc_Conv_NetIdToString_ReturnValue) == 0x000020, "Member 'UI_PlayerJoinedGroupNotification_C_ToString::CallFunc_Conv_NetIdToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_PlayerJoinedGroupNotification_C_ToString, CallFunc_Concat_StrStr_ReturnValue) == 0x000030, "Member 'UI_PlayerJoinedGroupNotification_C_ToString::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_PlayerJoinedGroupNotification_C_ToString, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000040, "Member 'UI_PlayerJoinedGroupNotification_C_ToString::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_PlayerJoinedGroupNotification_C_ToString, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000050, "Member 'UI_PlayerJoinedGroupNotification_C_ToString::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");

}

