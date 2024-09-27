#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_PlayerPresence_Full

#include "Basic.hpp"

#include "Flame_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function UI_PlayerPresence_Full.UI_PlayerPresence_Full_C.ExecuteUbergraph_UI_PlayerPresence_Full
// 0x0008 (0x0008 - 0x0000)
struct UI_PlayerPresence_Full_C_ExecuteUbergraph_UI_PlayerPresence_Full final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPlayerPresence                               K2Node_Event_InPresence;                           // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_PlayerPresence_Full_C_ExecuteUbergraph_UI_PlayerPresence_Full) == 0x000004, "Wrong alignment on UI_PlayerPresence_Full_C_ExecuteUbergraph_UI_PlayerPresence_Full");
static_assert(sizeof(UI_PlayerPresence_Full_C_ExecuteUbergraph_UI_PlayerPresence_Full) == 0x000008, "Wrong size on UI_PlayerPresence_Full_C_ExecuteUbergraph_UI_PlayerPresence_Full");
static_assert(offsetof(UI_PlayerPresence_Full_C_ExecuteUbergraph_UI_PlayerPresence_Full, EntryPoint) == 0x000000, "Member 'UI_PlayerPresence_Full_C_ExecuteUbergraph_UI_PlayerPresence_Full::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_PlayerPresence_Full_C_ExecuteUbergraph_UI_PlayerPresence_Full, K2Node_Event_InPresence) == 0x000004, "Member 'UI_PlayerPresence_Full_C_ExecuteUbergraph_UI_PlayerPresence_Full::K2Node_Event_InPresence' has a wrong offset!");

// Function UI_PlayerPresence_Full.UI_PlayerPresence_Full_C.OnPresenceUpdated
// 0x0001 (0x0001 - 0x0000)
struct UI_PlayerPresence_Full_C_OnPresenceUpdated final
{
public:
	EPlayerPresence                               InPresence;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_PlayerPresence_Full_C_OnPresenceUpdated) == 0x000001, "Wrong alignment on UI_PlayerPresence_Full_C_OnPresenceUpdated");
static_assert(sizeof(UI_PlayerPresence_Full_C_OnPresenceUpdated) == 0x000001, "Wrong size on UI_PlayerPresence_Full_C_OnPresenceUpdated");
static_assert(offsetof(UI_PlayerPresence_Full_C_OnPresenceUpdated, InPresence) == 0x000000, "Member 'UI_PlayerPresence_Full_C_OnPresenceUpdated::InPresence' has a wrong offset!");

// Function UI_PlayerPresence_Full.UI_PlayerPresence_Full_C.UpdatePresenceDescription
// 0x00B0 (0x00B0 - 0x0000)
struct UI_PlayerPresence_Full_C_UpdatePresenceDescription final
{
public:
	EPlayerPresence                               Presence;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPlayerPresence                               Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              CallFunc_GetPresenceVisibility_Visibility;         // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3[0x5];                                        // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0008(0x0018)()
	class FText                                   Temp_text_Variable_1;                              // 0x0020(0x0018)()
	class FText                                   Temp_text_Variable_2;                              // 0x0038(0x0018)()
	class FText                                   Temp_text_Variable_3;                              // 0x0050(0x0018)()
	class FText                                   Temp_text_Variable_4;                              // 0x0068(0x0018)()
	class FText                                   Temp_text_Variable_5;                              // 0x0080(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x0098(0x0018)()
};
static_assert(alignof(UI_PlayerPresence_Full_C_UpdatePresenceDescription) == 0x000008, "Wrong alignment on UI_PlayerPresence_Full_C_UpdatePresenceDescription");
static_assert(sizeof(UI_PlayerPresence_Full_C_UpdatePresenceDescription) == 0x0000B0, "Wrong size on UI_PlayerPresence_Full_C_UpdatePresenceDescription");
static_assert(offsetof(UI_PlayerPresence_Full_C_UpdatePresenceDescription, Presence) == 0x000000, "Member 'UI_PlayerPresence_Full_C_UpdatePresenceDescription::Presence' has a wrong offset!");
static_assert(offsetof(UI_PlayerPresence_Full_C_UpdatePresenceDescription, Temp_byte_Variable) == 0x000001, "Member 'UI_PlayerPresence_Full_C_UpdatePresenceDescription::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UI_PlayerPresence_Full_C_UpdatePresenceDescription, CallFunc_GetPresenceVisibility_Visibility) == 0x000002, "Member 'UI_PlayerPresence_Full_C_UpdatePresenceDescription::CallFunc_GetPresenceVisibility_Visibility' has a wrong offset!");
static_assert(offsetof(UI_PlayerPresence_Full_C_UpdatePresenceDescription, Temp_text_Variable) == 0x000008, "Member 'UI_PlayerPresence_Full_C_UpdatePresenceDescription::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(UI_PlayerPresence_Full_C_UpdatePresenceDescription, Temp_text_Variable_1) == 0x000020, "Member 'UI_PlayerPresence_Full_C_UpdatePresenceDescription::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_PlayerPresence_Full_C_UpdatePresenceDescription, Temp_text_Variable_2) == 0x000038, "Member 'UI_PlayerPresence_Full_C_UpdatePresenceDescription::Temp_text_Variable_2' has a wrong offset!");
static_assert(offsetof(UI_PlayerPresence_Full_C_UpdatePresenceDescription, Temp_text_Variable_3) == 0x000050, "Member 'UI_PlayerPresence_Full_C_UpdatePresenceDescription::Temp_text_Variable_3' has a wrong offset!");
static_assert(offsetof(UI_PlayerPresence_Full_C_UpdatePresenceDescription, Temp_text_Variable_4) == 0x000068, "Member 'UI_PlayerPresence_Full_C_UpdatePresenceDescription::Temp_text_Variable_4' has a wrong offset!");
static_assert(offsetof(UI_PlayerPresence_Full_C_UpdatePresenceDescription, Temp_text_Variable_5) == 0x000080, "Member 'UI_PlayerPresence_Full_C_UpdatePresenceDescription::Temp_text_Variable_5' has a wrong offset!");
static_assert(offsetof(UI_PlayerPresence_Full_C_UpdatePresenceDescription, K2Node_Select_Default) == 0x000098, "Member 'UI_PlayerPresence_Full_C_UpdatePresenceDescription::K2Node_Select_Default' has a wrong offset!");

// Function UI_PlayerPresence_Full.UI_PlayerPresence_Full_C.GetPresenceVisibility
// 0x0003 (0x0003 - 0x0000)
struct UI_PlayerPresence_Full_C_GetPresenceVisibility final
{
public:
	EPlayerPresence                               Presence;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Visibility_0;                                      // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_PlayerPresence_Full_C_GetPresenceVisibility) == 0x000001, "Wrong alignment on UI_PlayerPresence_Full_C_GetPresenceVisibility");
static_assert(sizeof(UI_PlayerPresence_Full_C_GetPresenceVisibility) == 0x000003, "Wrong size on UI_PlayerPresence_Full_C_GetPresenceVisibility");
static_assert(offsetof(UI_PlayerPresence_Full_C_GetPresenceVisibility, Presence) == 0x000000, "Member 'UI_PlayerPresence_Full_C_GetPresenceVisibility::Presence' has a wrong offset!");
static_assert(offsetof(UI_PlayerPresence_Full_C_GetPresenceVisibility, Visibility_0) == 0x000001, "Member 'UI_PlayerPresence_Full_C_GetPresenceVisibility::Visibility_0' has a wrong offset!");
static_assert(offsetof(UI_PlayerPresence_Full_C_GetPresenceVisibility, K2Node_SwitchEnum_CmpSuccess) == 0x000002, "Member 'UI_PlayerPresence_Full_C_GetPresenceVisibility::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function UI_PlayerPresence_Full.UI_PlayerPresence_Full_C.UpdatePresenceIcon
// 0x0028 (0x0028 - 0x0000)
struct UI_PlayerPresence_Full_C_UpdatePresenceIcon final
{
public:
	EPlayerPresence                               Presence;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           IconColor;                                         // 0x0004(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             IconTexture;                                       // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              CallFunc_GetPresenceVisibility_Visibility;         // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_PlayerPresence_Full_C_UpdatePresenceIcon) == 0x000008, "Wrong alignment on UI_PlayerPresence_Full_C_UpdatePresenceIcon");
static_assert(sizeof(UI_PlayerPresence_Full_C_UpdatePresenceIcon) == 0x000028, "Wrong size on UI_PlayerPresence_Full_C_UpdatePresenceIcon");
static_assert(offsetof(UI_PlayerPresence_Full_C_UpdatePresenceIcon, Presence) == 0x000000, "Member 'UI_PlayerPresence_Full_C_UpdatePresenceIcon::Presence' has a wrong offset!");
static_assert(offsetof(UI_PlayerPresence_Full_C_UpdatePresenceIcon, IconColor) == 0x000004, "Member 'UI_PlayerPresence_Full_C_UpdatePresenceIcon::IconColor' has a wrong offset!");
static_assert(offsetof(UI_PlayerPresence_Full_C_UpdatePresenceIcon, IconTexture) == 0x000018, "Member 'UI_PlayerPresence_Full_C_UpdatePresenceIcon::IconTexture' has a wrong offset!");
static_assert(offsetof(UI_PlayerPresence_Full_C_UpdatePresenceIcon, CallFunc_GetPresenceVisibility_Visibility) == 0x000020, "Member 'UI_PlayerPresence_Full_C_UpdatePresenceIcon::CallFunc_GetPresenceVisibility_Visibility' has a wrong offset!");
static_assert(offsetof(UI_PlayerPresence_Full_C_UpdatePresenceIcon, K2Node_SwitchEnum_CmpSuccess) == 0x000021, "Member 'UI_PlayerPresence_Full_C_UpdatePresenceIcon::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

}

