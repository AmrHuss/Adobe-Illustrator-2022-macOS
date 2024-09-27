#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_MusicPlayer_TrackButton

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "Flame_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function UI_MusicPlayer_TrackButton.UI_MusicPlayer_TrackButton_C.ExecuteUbergraph_UI_MusicPlayer_TrackButton
// 0x0098 (0x0098 - 0x0000)
struct UI_MusicPlayer_TrackButton_C_ExecuteUbergraph_UI_MusicPlayer_TrackButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UButton*                                K2Node_ComponentBoundEvent_Sender_2;               // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_GetParentUserWidget_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UButton*                                K2Node_ComponentBoundEvent_Sender_1;               // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_MusicPlayer_C*                      K2Node_DynamicCast_AsUI_Music_Player;              // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UButton*                                K2Node_ComponentBoundEvent_Sender;                 // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlatformGroupDesktop_ReturnValue;       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UUI_CustomCursor_C*>             CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x0050(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UUI_CustomCursor_C*                     CallFunc_Array_Get_Item;                           // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlatformGroupDesktop_ReturnValue_1;     // 0x006D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E[0x2];                                       // 0x006E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UUI_CustomCursor_C*>             CallFunc_GetAllWidgetsOfClass_FoundWidgets_1;      // 0x0070(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_84[0x4];                                       // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUI_CustomCursor_C*                     CallFunc_Array_Get_Item_1;                         // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UI_MusicPlayer_TrackButton_C_ExecuteUbergraph_UI_MusicPlayer_TrackButton) == 0x000008, "Wrong alignment on UI_MusicPlayer_TrackButton_C_ExecuteUbergraph_UI_MusicPlayer_TrackButton");
static_assert(sizeof(UI_MusicPlayer_TrackButton_C_ExecuteUbergraph_UI_MusicPlayer_TrackButton) == 0x000098, "Wrong size on UI_MusicPlayer_TrackButton_C_ExecuteUbergraph_UI_MusicPlayer_TrackButton");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_ExecuteUbergraph_UI_MusicPlayer_TrackButton, EntryPoint) == 0x000000, "Member 'UI_MusicPlayer_TrackButton_C_ExecuteUbergraph_UI_MusicPlayer_TrackButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_ExecuteUbergraph_UI_MusicPlayer_TrackButton, Temp_int_Variable) == 0x000004, "Member 'UI_MusicPlayer_TrackButton_C_ExecuteUbergraph_UI_MusicPlayer_TrackButton::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_ExecuteUbergraph_UI_MusicPlayer_TrackButton, Temp_int_Variable_1) == 0x000008, "Member 'UI_MusicPlayer_TrackButton_C_ExecuteUbergraph_UI_MusicPlayer_TrackButton::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_ExecuteUbergraph_UI_MusicPlayer_TrackButton, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'UI_MusicPlayer_TrackButton_C_ExecuteUbergraph_UI_MusicPlayer_TrackButton::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_ExecuteUbergraph_UI_MusicPlayer_TrackButton, CallFunc_Add_IntInt_ReturnValue_1) == 0x000010, "Member 'UI_MusicPlayer_TrackButton_C_ExecuteUbergraph_UI_MusicPlayer_TrackButton::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_ExecuteUbergraph_UI_MusicPlayer_TrackButton, K2Node_ComponentBoundEvent_Sender_2) == 0x000018, "Member 'UI_MusicPlayer_TrackButton_C_ExecuteUbergraph_UI_MusicPlayer_TrackButton::K2Node_ComponentBoundEvent_Sender_2' has a wrong offset!");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_ExecuteUbergraph_UI_MusicPlayer_TrackButton, CallFunc_GetParentUserWidget_ReturnValue) == 0x000020, "Member 'UI_MusicPlayer_TrackButton_C_ExecuteUbergraph_UI_MusicPlayer_TrackButton::CallFunc_GetParentUserWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_ExecuteUbergraph_UI_MusicPlayer_TrackButton, K2Node_ComponentBoundEvent_Sender_1) == 0x000028, "Member 'UI_MusicPlayer_TrackButton_C_ExecuteUbergraph_UI_MusicPlayer_TrackButton::K2Node_ComponentBoundEvent_Sender_1' has a wrong offset!");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_ExecuteUbergraph_UI_MusicPlayer_TrackButton, K2Node_DynamicCast_AsUI_Music_Player) == 0x000030, "Member 'UI_MusicPlayer_TrackButton_C_ExecuteUbergraph_UI_MusicPlayer_TrackButton::K2Node_DynamicCast_AsUI_Music_Player' has a wrong offset!");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_ExecuteUbergraph_UI_MusicPlayer_TrackButton, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'UI_MusicPlayer_TrackButton_C_ExecuteUbergraph_UI_MusicPlayer_TrackButton::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_ExecuteUbergraph_UI_MusicPlayer_TrackButton, K2Node_ComponentBoundEvent_Sender) == 0x000040, "Member 'UI_MusicPlayer_TrackButton_C_ExecuteUbergraph_UI_MusicPlayer_TrackButton::K2Node_ComponentBoundEvent_Sender' has a wrong offset!");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_ExecuteUbergraph_UI_MusicPlayer_TrackButton, CallFunc_IsPlatformGroupDesktop_ReturnValue) == 0x000048, "Member 'UI_MusicPlayer_TrackButton_C_ExecuteUbergraph_UI_MusicPlayer_TrackButton::CallFunc_IsPlatformGroupDesktop_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_ExecuteUbergraph_UI_MusicPlayer_TrackButton, CallFunc_GetAllWidgetsOfClass_FoundWidgets) == 0x000050, "Member 'UI_MusicPlayer_TrackButton_C_ExecuteUbergraph_UI_MusicPlayer_TrackButton::CallFunc_GetAllWidgetsOfClass_FoundWidgets' has a wrong offset!");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_ExecuteUbergraph_UI_MusicPlayer_TrackButton, CallFunc_Array_Get_Item) == 0x000060, "Member 'UI_MusicPlayer_TrackButton_C_ExecuteUbergraph_UI_MusicPlayer_TrackButton::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_ExecuteUbergraph_UI_MusicPlayer_TrackButton, CallFunc_Array_Length_ReturnValue) == 0x000068, "Member 'UI_MusicPlayer_TrackButton_C_ExecuteUbergraph_UI_MusicPlayer_TrackButton::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_ExecuteUbergraph_UI_MusicPlayer_TrackButton, CallFunc_Less_IntInt_ReturnValue) == 0x00006C, "Member 'UI_MusicPlayer_TrackButton_C_ExecuteUbergraph_UI_MusicPlayer_TrackButton::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_ExecuteUbergraph_UI_MusicPlayer_TrackButton, CallFunc_IsPlatformGroupDesktop_ReturnValue_1) == 0x00006D, "Member 'UI_MusicPlayer_TrackButton_C_ExecuteUbergraph_UI_MusicPlayer_TrackButton::CallFunc_IsPlatformGroupDesktop_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_ExecuteUbergraph_UI_MusicPlayer_TrackButton, CallFunc_GetAllWidgetsOfClass_FoundWidgets_1) == 0x000070, "Member 'UI_MusicPlayer_TrackButton_C_ExecuteUbergraph_UI_MusicPlayer_TrackButton::CallFunc_GetAllWidgetsOfClass_FoundWidgets_1' has a wrong offset!");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_ExecuteUbergraph_UI_MusicPlayer_TrackButton, CallFunc_Array_Length_ReturnValue_1) == 0x000080, "Member 'UI_MusicPlayer_TrackButton_C_ExecuteUbergraph_UI_MusicPlayer_TrackButton::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_ExecuteUbergraph_UI_MusicPlayer_TrackButton, CallFunc_Array_Get_Item_1) == 0x000088, "Member 'UI_MusicPlayer_TrackButton_C_ExecuteUbergraph_UI_MusicPlayer_TrackButton::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_ExecuteUbergraph_UI_MusicPlayer_TrackButton, CallFunc_Less_IntInt_ReturnValue_1) == 0x000090, "Member 'UI_MusicPlayer_TrackButton_C_ExecuteUbergraph_UI_MusicPlayer_TrackButton::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function UI_MusicPlayer_TrackButton.UI_MusicPlayer_TrackButton_C.BndEvt__UI_MusicPlayer_TrackButton_TrackButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_MusicPlayer_TrackButton_C_BndEvt__UI_MusicPlayer_TrackButton_TrackButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature final
{
public:
	class UButton*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_MusicPlayer_TrackButton_C_BndEvt__UI_MusicPlayer_TrackButton_TrackButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature) == 0x000008, "Wrong alignment on UI_MusicPlayer_TrackButton_C_BndEvt__UI_MusicPlayer_TrackButton_TrackButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
static_assert(sizeof(UI_MusicPlayer_TrackButton_C_BndEvt__UI_MusicPlayer_TrackButton_TrackButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature) == 0x000008, "Wrong size on UI_MusicPlayer_TrackButton_C_BndEvt__UI_MusicPlayer_TrackButton_TrackButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_BndEvt__UI_MusicPlayer_TrackButton_TrackButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature, Sender) == 0x000000, "Member 'UI_MusicPlayer_TrackButton_C_BndEvt__UI_MusicPlayer_TrackButton_TrackButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature::Sender' has a wrong offset!");

// Function UI_MusicPlayer_TrackButton.UI_MusicPlayer_TrackButton_C.BndEvt__UI_MusicPlayer_TrackButton_TrackButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_MusicPlayer_TrackButton_C_BndEvt__UI_MusicPlayer_TrackButton_TrackButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature final
{
public:
	class UButton*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_MusicPlayer_TrackButton_C_BndEvt__UI_MusicPlayer_TrackButton_TrackButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature) == 0x000008, "Wrong alignment on UI_MusicPlayer_TrackButton_C_BndEvt__UI_MusicPlayer_TrackButton_TrackButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
static_assert(sizeof(UI_MusicPlayer_TrackButton_C_BndEvt__UI_MusicPlayer_TrackButton_TrackButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature) == 0x000008, "Wrong size on UI_MusicPlayer_TrackButton_C_BndEvt__UI_MusicPlayer_TrackButton_TrackButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_BndEvt__UI_MusicPlayer_TrackButton_TrackButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature, Sender) == 0x000000, "Member 'UI_MusicPlayer_TrackButton_C_BndEvt__UI_MusicPlayer_TrackButton_TrackButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature::Sender' has a wrong offset!");

// Function UI_MusicPlayer_TrackButton.UI_MusicPlayer_TrackButton_C.BndEvt__UI_MusicPlayer_TrackButton_TrackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UI_MusicPlayer_TrackButton_C_BndEvt__UI_MusicPlayer_TrackButton_TrackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature final
{
public:
	class UButton*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_MusicPlayer_TrackButton_C_BndEvt__UI_MusicPlayer_TrackButton_TrackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature) == 0x000008, "Wrong alignment on UI_MusicPlayer_TrackButton_C_BndEvt__UI_MusicPlayer_TrackButton_TrackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
static_assert(sizeof(UI_MusicPlayer_TrackButton_C_BndEvt__UI_MusicPlayer_TrackButton_TrackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature) == 0x000008, "Wrong size on UI_MusicPlayer_TrackButton_C_BndEvt__UI_MusicPlayer_TrackButton_TrackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_BndEvt__UI_MusicPlayer_TrackButton_TrackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature, Sender) == 0x000000, "Member 'UI_MusicPlayer_TrackButton_C_BndEvt__UI_MusicPlayer_TrackButton_TrackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature::Sender' has a wrong offset!");

// Function UI_MusicPlayer_TrackButton.UI_MusicPlayer_TrackButton_C.Initialize
// 0x0018 (0x0018 - 0x0000)
struct UI_MusicPlayer_TrackButton_C_Initialize final
{
public:
	class UUI_MusicPlayer_C*                      MusicPlayerUI_0;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_MusicTrack_C*                       Track_0;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TrackIndex_0;                                      // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_MusicPlayer_TrackButton_C_Initialize) == 0x000008, "Wrong alignment on UI_MusicPlayer_TrackButton_C_Initialize");
static_assert(sizeof(UI_MusicPlayer_TrackButton_C_Initialize) == 0x000018, "Wrong size on UI_MusicPlayer_TrackButton_C_Initialize");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_Initialize, MusicPlayerUI_0) == 0x000000, "Member 'UI_MusicPlayer_TrackButton_C_Initialize::MusicPlayerUI_0' has a wrong offset!");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_Initialize, Track_0) == 0x000008, "Member 'UI_MusicPlayer_TrackButton_C_Initialize::Track_0' has a wrong offset!");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_Initialize, TrackIndex_0) == 0x000010, "Member 'UI_MusicPlayer_TrackButton_C_Initialize::TrackIndex_0' has a wrong offset!");

// Function UI_MusicPlayer_TrackButton.UI_MusicPlayer_TrackButton_C.SelectButton
// 0x0034 (0x0034 - 0x0000)
struct UI_MusicPlayer_TrackButton_C_SelectButton final
{
public:
	bool                                          IsSelected;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2[0x2];                                        // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0024(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_MusicPlayer_TrackButton_C_SelectButton) == 0x000004, "Wrong alignment on UI_MusicPlayer_TrackButton_C_SelectButton");
static_assert(sizeof(UI_MusicPlayer_TrackButton_C_SelectButton) == 0x000034, "Wrong size on UI_MusicPlayer_TrackButton_C_SelectButton");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_SelectButton, IsSelected) == 0x000000, "Member 'UI_MusicPlayer_TrackButton_C_SelectButton::IsSelected' has a wrong offset!");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_SelectButton, Temp_bool_Variable) == 0x000001, "Member 'UI_MusicPlayer_TrackButton_C_SelectButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_SelectButton, Temp_struct_Variable) == 0x000004, "Member 'UI_MusicPlayer_TrackButton_C_SelectButton::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_SelectButton, Temp_struct_Variable_1) == 0x000014, "Member 'UI_MusicPlayer_TrackButton_C_SelectButton::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_SelectButton, K2Node_Select_Default) == 0x000024, "Member 'UI_MusicPlayer_TrackButton_C_SelectButton::K2Node_Select_Default' has a wrong offset!");

// Function UI_MusicPlayer_TrackButton.UI_MusicPlayer_TrackButton_C.PlayingThisButtonTrack
// 0x0005 (0x0005 - 0x0000)
struct UI_MusicPlayer_TrackButton_C_PlayingThisButtonTrack final
{
public:
	bool                                          IsPlaying;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_MusicPlayer_TrackButton_C_PlayingThisButtonTrack) == 0x000001, "Wrong alignment on UI_MusicPlayer_TrackButton_C_PlayingThisButtonTrack");
static_assert(sizeof(UI_MusicPlayer_TrackButton_C_PlayingThisButtonTrack) == 0x000005, "Wrong size on UI_MusicPlayer_TrackButton_C_PlayingThisButtonTrack");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_PlayingThisButtonTrack, IsPlaying) == 0x000000, "Member 'UI_MusicPlayer_TrackButton_C_PlayingThisButtonTrack::IsPlaying' has a wrong offset!");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_PlayingThisButtonTrack, Temp_bool_Variable) == 0x000001, "Member 'UI_MusicPlayer_TrackButton_C_PlayingThisButtonTrack::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_PlayingThisButtonTrack, Temp_byte_Variable) == 0x000002, "Member 'UI_MusicPlayer_TrackButton_C_PlayingThisButtonTrack::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_PlayingThisButtonTrack, Temp_byte_Variable_1) == 0x000003, "Member 'UI_MusicPlayer_TrackButton_C_PlayingThisButtonTrack::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_PlayingThisButtonTrack, K2Node_Select_Default) == 0x000004, "Member 'UI_MusicPlayer_TrackButton_C_PlayingThisButtonTrack::K2Node_Select_Default' has a wrong offset!");

// Function UI_MusicPlayer_TrackButton.UI_MusicPlayer_TrackButton_C.SetTrackInfo
// 0x0130 (0x0130 - 0x0000)
struct UI_MusicPlayer_TrackButton_C_SetTrackInfo final
{
public:
	struct FMusicTrackRow                         TrackInfo;                                         // 0x0000(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         Seconds;                                           // 0x0088(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Minutes;                                           // 0x008C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0098(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00E0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00F0(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_109[0x7];                                      // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Get_Time_Text_From_Float_Text;            // 0x0110(0x0018)()
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x012A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_MusicPlayer_TrackButton_C_SetTrackInfo) == 0x000008, "Wrong alignment on UI_MusicPlayer_TrackButton_C_SetTrackInfo");
static_assert(sizeof(UI_MusicPlayer_TrackButton_C_SetTrackInfo) == 0x000130, "Wrong size on UI_MusicPlayer_TrackButton_C_SetTrackInfo");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_SetTrackInfo, TrackInfo) == 0x000000, "Member 'UI_MusicPlayer_TrackButton_C_SetTrackInfo::TrackInfo' has a wrong offset!");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_SetTrackInfo, Seconds) == 0x000088, "Member 'UI_MusicPlayer_TrackButton_C_SetTrackInfo::Seconds' has a wrong offset!");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_SetTrackInfo, Minutes) == 0x00008C, "Member 'UI_MusicPlayer_TrackButton_C_SetTrackInfo::Minutes' has a wrong offset!");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_SetTrackInfo, Temp_byte_Variable) == 0x000090, "Member 'UI_MusicPlayer_TrackButton_C_SetTrackInfo::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_SetTrackInfo, K2Node_MakeStruct_FormatArgumentData) == 0x000098, "Member 'UI_MusicPlayer_TrackButton_C_SetTrackInfo::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_SetTrackInfo, CallFunc_TextIsEmpty_ReturnValue) == 0x0000D8, "Member 'UI_MusicPlayer_TrackButton_C_SetTrackInfo::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_SetTrackInfo, K2Node_MakeArray_Array) == 0x0000E0, "Member 'UI_MusicPlayer_TrackButton_C_SetTrackInfo::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_SetTrackInfo, CallFunc_Format_ReturnValue) == 0x0000F0, "Member 'UI_MusicPlayer_TrackButton_C_SetTrackInfo::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_SetTrackInfo, CallFunc_IsValid_ReturnValue) == 0x000108, "Member 'UI_MusicPlayer_TrackButton_C_SetTrackInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_SetTrackInfo, CallFunc_Get_Time_Text_From_Float_Text) == 0x000110, "Member 'UI_MusicPlayer_TrackButton_C_SetTrackInfo::CallFunc_Get_Time_Text_From_Float_Text' has a wrong offset!");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_SetTrackInfo, Temp_byte_Variable_1) == 0x000128, "Member 'UI_MusicPlayer_TrackButton_C_SetTrackInfo::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_SetTrackInfo, Temp_bool_Variable) == 0x000129, "Member 'UI_MusicPlayer_TrackButton_C_SetTrackInfo::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_SetTrackInfo, K2Node_Select_Default) == 0x00012A, "Member 'UI_MusicPlayer_TrackButton_C_SetTrackInfo::K2Node_Select_Default' has a wrong offset!");

// Function UI_MusicPlayer_TrackButton.UI_MusicPlayer_TrackButton_C.UpdateTrackOverlay
// 0x0098 (0x0098 - 0x0000)
struct UI_MusicPlayer_TrackButton_C_UpdateTrackOverlay final
{
public:
	bool                                          IsUnlocked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsBlacklisted;                                     // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	int32                                         CallFunc_Conv_BoolToInt_ReturnValue;               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_BoolToInt_ReturnValue_1;             // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0040(0x0028)()
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D[0x3];                                       // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0070(0x0028)()
};
static_assert(alignof(UI_MusicPlayer_TrackButton_C_UpdateTrackOverlay) == 0x000008, "Wrong alignment on UI_MusicPlayer_TrackButton_C_UpdateTrackOverlay");
static_assert(sizeof(UI_MusicPlayer_TrackButton_C_UpdateTrackOverlay) == 0x000098, "Wrong size on UI_MusicPlayer_TrackButton_C_UpdateTrackOverlay");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_UpdateTrackOverlay, IsUnlocked) == 0x000000, "Member 'UI_MusicPlayer_TrackButton_C_UpdateTrackOverlay::IsUnlocked' has a wrong offset!");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_UpdateTrackOverlay, IsBlacklisted) == 0x000001, "Member 'UI_MusicPlayer_TrackButton_C_UpdateTrackOverlay::IsBlacklisted' has a wrong offset!");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_UpdateTrackOverlay, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'UI_MusicPlayer_TrackButton_C_UpdateTrackOverlay::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_UpdateTrackOverlay, CallFunc_Conv_BoolToInt_ReturnValue) == 0x000030, "Member 'UI_MusicPlayer_TrackButton_C_UpdateTrackOverlay::CallFunc_Conv_BoolToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_UpdateTrackOverlay, CallFunc_Conv_BoolToInt_ReturnValue_1) == 0x000034, "Member 'UI_MusicPlayer_TrackButton_C_UpdateTrackOverlay::CallFunc_Conv_BoolToInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_UpdateTrackOverlay, CallFunc_Multiply_IntInt_ReturnValue) == 0x000038, "Member 'UI_MusicPlayer_TrackButton_C_UpdateTrackOverlay::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_UpdateTrackOverlay, K2Node_MakeStruct_SlateColor_1) == 0x000040, "Member 'UI_MusicPlayer_TrackButton_C_UpdateTrackOverlay::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_UpdateTrackOverlay, CallFunc_Add_IntInt_ReturnValue) == 0x000068, "Member 'UI_MusicPlayer_TrackButton_C_UpdateTrackOverlay::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_UpdateTrackOverlay, K2Node_SwitchInteger_CmpSuccess) == 0x00006C, "Member 'UI_MusicPlayer_TrackButton_C_UpdateTrackOverlay::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(UI_MusicPlayer_TrackButton_C_UpdateTrackOverlay, K2Node_MakeStruct_SlateColor_2) == 0x000070, "Member 'UI_MusicPlayer_TrackButton_C_UpdateTrackOverlay::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");

}

