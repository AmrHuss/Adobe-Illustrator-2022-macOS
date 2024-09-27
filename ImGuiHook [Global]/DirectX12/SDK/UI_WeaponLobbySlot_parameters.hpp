#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_WeaponLobbySlot

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UI_WeaponLobbySlot.UI_WeaponLobbySlot_C.ExecuteUbergraph_UI_WeaponLobbySlot
// 0x0098 (0x0098 - 0x0000)
struct UI_WeaponLobbySlot_C_ExecuteUbergraph_UI_WeaponLobbySlot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0008(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UButton*                                K2Node_ComponentBoundEvent_Sender;                 // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHumanPlayerController*                 K2Node_DynamicCast_AsHuman_Player_Controller;      // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_62[0x6];                                       // 0x0062(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UShelterMainTabControl*                 CallFunc_GetShelterUI_ReturnValue;                 // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71[0x3];                                       // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UUI_LobbyBase_C*>                CallFunc_GetAllOpenedWidgets_OutWidgets;           // 0x0078(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89[0x3];                                       // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_WeaponLobbySlot_C_ExecuteUbergraph_UI_WeaponLobbySlot) == 0x000008, "Wrong alignment on UI_WeaponLobbySlot_C_ExecuteUbergraph_UI_WeaponLobbySlot");
static_assert(sizeof(UI_WeaponLobbySlot_C_ExecuteUbergraph_UI_WeaponLobbySlot) == 0x000098, "Wrong size on UI_WeaponLobbySlot_C_ExecuteUbergraph_UI_WeaponLobbySlot");
static_assert(offsetof(UI_WeaponLobbySlot_C_ExecuteUbergraph_UI_WeaponLobbySlot, EntryPoint) == 0x000000, "Member 'UI_WeaponLobbySlot_C_ExecuteUbergraph_UI_WeaponLobbySlot::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_WeaponLobbySlot_C_ExecuteUbergraph_UI_WeaponLobbySlot, CallFunc_Not_PreBool_ReturnValue) == 0x000004, "Member 'UI_WeaponLobbySlot_C_ExecuteUbergraph_UI_WeaponLobbySlot::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_WeaponLobbySlot_C_ExecuteUbergraph_UI_WeaponLobbySlot, K2Node_Event_IsDesignTime) == 0x000005, "Member 'UI_WeaponLobbySlot_C_ExecuteUbergraph_UI_WeaponLobbySlot::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UI_WeaponLobbySlot_C_ExecuteUbergraph_UI_WeaponLobbySlot, K2Node_Event_MyGeometry) == 0x000008, "Member 'UI_WeaponLobbySlot_C_ExecuteUbergraph_UI_WeaponLobbySlot::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(UI_WeaponLobbySlot_C_ExecuteUbergraph_UI_WeaponLobbySlot, K2Node_Event_InDeltaTime) == 0x000040, "Member 'UI_WeaponLobbySlot_C_ExecuteUbergraph_UI_WeaponLobbySlot::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(UI_WeaponLobbySlot_C_ExecuteUbergraph_UI_WeaponLobbySlot, K2Node_ComponentBoundEvent_Sender) == 0x000048, "Member 'UI_WeaponLobbySlot_C_ExecuteUbergraph_UI_WeaponLobbySlot::K2Node_ComponentBoundEvent_Sender' has a wrong offset!");
static_assert(offsetof(UI_WeaponLobbySlot_C_ExecuteUbergraph_UI_WeaponLobbySlot, CallFunc_GetOwningPlayer_ReturnValue) == 0x000050, "Member 'UI_WeaponLobbySlot_C_ExecuteUbergraph_UI_WeaponLobbySlot::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_WeaponLobbySlot_C_ExecuteUbergraph_UI_WeaponLobbySlot, K2Node_DynamicCast_AsHuman_Player_Controller) == 0x000058, "Member 'UI_WeaponLobbySlot_C_ExecuteUbergraph_UI_WeaponLobbySlot::K2Node_DynamicCast_AsHuman_Player_Controller' has a wrong offset!");
static_assert(offsetof(UI_WeaponLobbySlot_C_ExecuteUbergraph_UI_WeaponLobbySlot, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'UI_WeaponLobbySlot_C_ExecuteUbergraph_UI_WeaponLobbySlot::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_WeaponLobbySlot_C_ExecuteUbergraph_UI_WeaponLobbySlot, CallFunc_MakeLiteralByte_ReturnValue) == 0x000061, "Member 'UI_WeaponLobbySlot_C_ExecuteUbergraph_UI_WeaponLobbySlot::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_WeaponLobbySlot_C_ExecuteUbergraph_UI_WeaponLobbySlot, CallFunc_GetShelterUI_ReturnValue) == 0x000068, "Member 'UI_WeaponLobbySlot_C_ExecuteUbergraph_UI_WeaponLobbySlot::CallFunc_GetShelterUI_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_WeaponLobbySlot_C_ExecuteUbergraph_UI_WeaponLobbySlot, CallFunc_IsValid_ReturnValue) == 0x000070, "Member 'UI_WeaponLobbySlot_C_ExecuteUbergraph_UI_WeaponLobbySlot::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_WeaponLobbySlot_C_ExecuteUbergraph_UI_WeaponLobbySlot, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000074, "Member 'UI_WeaponLobbySlot_C_ExecuteUbergraph_UI_WeaponLobbySlot::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_WeaponLobbySlot_C_ExecuteUbergraph_UI_WeaponLobbySlot, CallFunc_GetAllOpenedWidgets_OutWidgets) == 0x000078, "Member 'UI_WeaponLobbySlot_C_ExecuteUbergraph_UI_WeaponLobbySlot::CallFunc_GetAllOpenedWidgets_OutWidgets' has a wrong offset!");
static_assert(offsetof(UI_WeaponLobbySlot_C_ExecuteUbergraph_UI_WeaponLobbySlot, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000088, "Member 'UI_WeaponLobbySlot_C_ExecuteUbergraph_UI_WeaponLobbySlot::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_WeaponLobbySlot_C_ExecuteUbergraph_UI_WeaponLobbySlot, CallFunc_Array_Length_ReturnValue) == 0x00008C, "Member 'UI_WeaponLobbySlot_C_ExecuteUbergraph_UI_WeaponLobbySlot::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_WeaponLobbySlot_C_ExecuteUbergraph_UI_WeaponLobbySlot, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000090, "Member 'UI_WeaponLobbySlot_C_ExecuteUbergraph_UI_WeaponLobbySlot::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

// Function UI_WeaponLobbySlot.UI_WeaponLobbySlot_C.BndEvt__InteractButton_K2Node_ComponentBoundEvent_203_OnButtonFocusEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_WeaponLobbySlot_C_BndEvt__InteractButton_K2Node_ComponentBoundEvent_203_OnButtonFocusEvent__DelegateSignature final
{
public:
	class UButton*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_WeaponLobbySlot_C_BndEvt__InteractButton_K2Node_ComponentBoundEvent_203_OnButtonFocusEvent__DelegateSignature) == 0x000008, "Wrong alignment on UI_WeaponLobbySlot_C_BndEvt__InteractButton_K2Node_ComponentBoundEvent_203_OnButtonFocusEvent__DelegateSignature");
static_assert(sizeof(UI_WeaponLobbySlot_C_BndEvt__InteractButton_K2Node_ComponentBoundEvent_203_OnButtonFocusEvent__DelegateSignature) == 0x000008, "Wrong size on UI_WeaponLobbySlot_C_BndEvt__InteractButton_K2Node_ComponentBoundEvent_203_OnButtonFocusEvent__DelegateSignature");
static_assert(offsetof(UI_WeaponLobbySlot_C_BndEvt__InteractButton_K2Node_ComponentBoundEvent_203_OnButtonFocusEvent__DelegateSignature, Sender) == 0x000000, "Member 'UI_WeaponLobbySlot_C_BndEvt__InteractButton_K2Node_ComponentBoundEvent_203_OnButtonFocusEvent__DelegateSignature::Sender' has a wrong offset!");

// Function UI_WeaponLobbySlot.UI_WeaponLobbySlot_C.Tick
// 0x003C (0x003C - 0x0000)
struct UI_WeaponLobbySlot_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_WeaponLobbySlot_C_Tick) == 0x000004, "Wrong alignment on UI_WeaponLobbySlot_C_Tick");
static_assert(sizeof(UI_WeaponLobbySlot_C_Tick) == 0x00003C, "Wrong size on UI_WeaponLobbySlot_C_Tick");
static_assert(offsetof(UI_WeaponLobbySlot_C_Tick, MyGeometry) == 0x000000, "Member 'UI_WeaponLobbySlot_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(UI_WeaponLobbySlot_C_Tick, InDeltaTime) == 0x000038, "Member 'UI_WeaponLobbySlot_C_Tick::InDeltaTime' has a wrong offset!");

// Function UI_WeaponLobbySlot.UI_WeaponLobbySlot_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_WeaponLobbySlot_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_WeaponLobbySlot_C_PreConstruct) == 0x000001, "Wrong alignment on UI_WeaponLobbySlot_C_PreConstruct");
static_assert(sizeof(UI_WeaponLobbySlot_C_PreConstruct) == 0x000001, "Wrong size on UI_WeaponLobbySlot_C_PreConstruct");
static_assert(offsetof(UI_WeaponLobbySlot_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_WeaponLobbySlot_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UI_WeaponLobbySlot.UI_WeaponLobbySlot_C.UpdateWeaponName
// 0x0040 (0x0040 - 0x0000)
struct UI_WeaponLobbySlot_C_UpdateWeaponName final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3[0x5];                                        // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class AItem*                                  CallFunc_GetItemObsolete_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AItem*                                  CallFunc_GetItemObsolete_ReturnValue_1;            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetItemName_ReturnValue;                  // 0x0020(0x0018)()
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_WeaponLobbySlot_C_UpdateWeaponName) == 0x000008, "Wrong alignment on UI_WeaponLobbySlot_C_UpdateWeaponName");
static_assert(sizeof(UI_WeaponLobbySlot_C_UpdateWeaponName) == 0x000040, "Wrong size on UI_WeaponLobbySlot_C_UpdateWeaponName");
static_assert(offsetof(UI_WeaponLobbySlot_C_UpdateWeaponName, Temp_bool_Variable) == 0x000000, "Member 'UI_WeaponLobbySlot_C_UpdateWeaponName::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UI_WeaponLobbySlot_C_UpdateWeaponName, Temp_byte_Variable) == 0x000001, "Member 'UI_WeaponLobbySlot_C_UpdateWeaponName::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UI_WeaponLobbySlot_C_UpdateWeaponName, Temp_byte_Variable_1) == 0x000002, "Member 'UI_WeaponLobbySlot_C_UpdateWeaponName::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_WeaponLobbySlot_C_UpdateWeaponName, CallFunc_GetItemObsolete_ReturnValue) == 0x000008, "Member 'UI_WeaponLobbySlot_C_UpdateWeaponName::CallFunc_GetItemObsolete_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_WeaponLobbySlot_C_UpdateWeaponName, CallFunc_GetItemObsolete_ReturnValue_1) == 0x000010, "Member 'UI_WeaponLobbySlot_C_UpdateWeaponName::CallFunc_GetItemObsolete_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_WeaponLobbySlot_C_UpdateWeaponName, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'UI_WeaponLobbySlot_C_UpdateWeaponName::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_WeaponLobbySlot_C_UpdateWeaponName, CallFunc_IsValid_ReturnValue_1) == 0x000019, "Member 'UI_WeaponLobbySlot_C_UpdateWeaponName::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_WeaponLobbySlot_C_UpdateWeaponName, CallFunc_GetItemName_ReturnValue) == 0x000020, "Member 'UI_WeaponLobbySlot_C_UpdateWeaponName::CallFunc_GetItemName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_WeaponLobbySlot_C_UpdateWeaponName, K2Node_Select_Default) == 0x000038, "Member 'UI_WeaponLobbySlot_C_UpdateWeaponName::K2Node_Select_Default' has a wrong offset!");

// Function UI_WeaponLobbySlot.UI_WeaponLobbySlot_C.SetCount
// 0x0004 (0x0004 - 0x0000)
struct UI_WeaponLobbySlot_C_SetCount final
{
public:
	int32                                         Count_0;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_WeaponLobbySlot_C_SetCount) == 0x000004, "Wrong alignment on UI_WeaponLobbySlot_C_SetCount");
static_assert(sizeof(UI_WeaponLobbySlot_C_SetCount) == 0x000004, "Wrong size on UI_WeaponLobbySlot_C_SetCount");
static_assert(offsetof(UI_WeaponLobbySlot_C_SetCount, Count_0) == 0x000000, "Member 'UI_WeaponLobbySlot_C_SetCount::Count_0' has a wrong offset!");

}

