#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_OpenableExitSwitch

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_OpenableExitSwitch.BP_OpenableExitSwitch_C.Switch Interacted
// 0x0018 (0x0018 - 0x0000)
struct BP_OpenableExitSwitch_C_Switch_Interacted final
{
public:
	class ABP_Character_Script_C*                 Character;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_OpenableExitVolume_C*               Openable_Exit_0;                                   // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_OpenableExitSwitch_C_Switch_Interacted) == 0x000008, "Wrong alignment on BP_OpenableExitSwitch_C_Switch_Interacted");
static_assert(sizeof(BP_OpenableExitSwitch_C_Switch_Interacted) == 0x000018, "Wrong size on BP_OpenableExitSwitch_C_Switch_Interacted");
static_assert(offsetof(BP_OpenableExitSwitch_C_Switch_Interacted, Character) == 0x000000, "Member 'BP_OpenableExitSwitch_C_Switch_Interacted::Character' has a wrong offset!");
static_assert(offsetof(BP_OpenableExitSwitch_C_Switch_Interacted, Openable_Exit_0) == 0x000008, "Member 'BP_OpenableExitSwitch_C_Switch_Interacted::Openable_Exit_0' has a wrong offset!");
static_assert(offsetof(BP_OpenableExitSwitch_C_Switch_Interacted, CallFunc_Not_PreBool_ReturnValue) == 0x000010, "Member 'BP_OpenableExitSwitch_C_Switch_Interacted::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OpenableExitSwitch_C_Switch_Interacted, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'BP_OpenableExitSwitch_C_Switch_Interacted::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OpenableExitSwitch_C_Switch_Interacted, CallFunc_BooleanOR_ReturnValue) == 0x000012, "Member 'BP_OpenableExitSwitch_C_Switch_Interacted::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function BP_OpenableExitSwitch.BP_OpenableExitSwitch_C.BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_0_Interaction Start on Server__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct BP_OpenableExitSwitch_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_0_Interaction_Start_on_Server__DelegateSignature final
{
public:
	class UInteractionItemComponent*              Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Interacting_Actor;                                 // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_OpenableExitSwitch_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_0_Interaction_Start_on_Server__DelegateSignature) == 0x000008, "Wrong alignment on BP_OpenableExitSwitch_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_0_Interaction_Start_on_Server__DelegateSignature");
static_assert(sizeof(BP_OpenableExitSwitch_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_0_Interaction_Start_on_Server__DelegateSignature) == 0x000010, "Wrong size on BP_OpenableExitSwitch_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_0_Interaction_Start_on_Server__DelegateSignature");
static_assert(offsetof(BP_OpenableExitSwitch_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_0_Interaction_Start_on_Server__DelegateSignature, Sender) == 0x000000, "Member 'BP_OpenableExitSwitch_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_0_Interaction_Start_on_Server__DelegateSignature::Sender' has a wrong offset!");
static_assert(offsetof(BP_OpenableExitSwitch_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_0_Interaction_Start_on_Server__DelegateSignature, Interacting_Actor) == 0x000008, "Member 'BP_OpenableExitSwitch_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_0_Interaction_Start_on_Server__DelegateSignature::Interacting_Actor' has a wrong offset!");

// Function BP_OpenableExitSwitch.BP_OpenableExitSwitch_C.Set Interaction
// 0x0001 (0x0001 - 0x0000)
struct BP_OpenableExitSwitch_C_Set_Interaction final
{
public:
	bool                                          Enabled;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_OpenableExitSwitch_C_Set_Interaction) == 0x000001, "Wrong alignment on BP_OpenableExitSwitch_C_Set_Interaction");
static_assert(sizeof(BP_OpenableExitSwitch_C_Set_Interaction) == 0x000001, "Wrong size on BP_OpenableExitSwitch_C_Set_Interaction");
static_assert(offsetof(BP_OpenableExitSwitch_C_Set_Interaction, Enabled) == 0x000000, "Member 'BP_OpenableExitSwitch_C_Set_Interaction::Enabled' has a wrong offset!");

// Function BP_OpenableExitSwitch.BP_OpenableExitSwitch_C.Event SetClosedExitIcon Multicast
// 0x0008 (0x0008 - 0x0000)
struct BP_OpenableExitSwitch_C_Event_SetClosedExitIcon_Multicast final
{
public:
	class ABP_OpenableExitVolume_C*               Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_OpenableExitSwitch_C_Event_SetClosedExitIcon_Multicast) == 0x000008, "Wrong alignment on BP_OpenableExitSwitch_C_Event_SetClosedExitIcon_Multicast");
static_assert(sizeof(BP_OpenableExitSwitch_C_Event_SetClosedExitIcon_Multicast) == 0x000008, "Wrong size on BP_OpenableExitSwitch_C_Event_SetClosedExitIcon_Multicast");
static_assert(offsetof(BP_OpenableExitSwitch_C_Event_SetClosedExitIcon_Multicast, Target) == 0x000000, "Member 'BP_OpenableExitSwitch_C_Event_SetClosedExitIcon_Multicast::Target' has a wrong offset!");

// Function BP_OpenableExitSwitch.BP_OpenableExitSwitch_C.Event SetClosedExitIcon
// 0x0008 (0x0008 - 0x0000)
struct BP_OpenableExitSwitch_C_Event_SetClosedExitIcon final
{
public:
	class ABP_OpenableExitVolume_C*               Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_OpenableExitSwitch_C_Event_SetClosedExitIcon) == 0x000008, "Wrong alignment on BP_OpenableExitSwitch_C_Event_SetClosedExitIcon");
static_assert(sizeof(BP_OpenableExitSwitch_C_Event_SetClosedExitIcon) == 0x000008, "Wrong size on BP_OpenableExitSwitch_C_Event_SetClosedExitIcon");
static_assert(offsetof(BP_OpenableExitSwitch_C_Event_SetClosedExitIcon, Target) == 0x000000, "Member 'BP_OpenableExitSwitch_C_Event_SetClosedExitIcon::Target' has a wrong offset!");

// Function BP_OpenableExitSwitch.BP_OpenableExitSwitch_C.Event SetClosedExitIcon OnServer
// 0x0008 (0x0008 - 0x0000)
struct BP_OpenableExitSwitch_C_Event_SetClosedExitIcon_OnServer final
{
public:
	class ABP_OpenableExitVolume_C*               Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_OpenableExitSwitch_C_Event_SetClosedExitIcon_OnServer) == 0x000008, "Wrong alignment on BP_OpenableExitSwitch_C_Event_SetClosedExitIcon_OnServer");
static_assert(sizeof(BP_OpenableExitSwitch_C_Event_SetClosedExitIcon_OnServer) == 0x000008, "Wrong size on BP_OpenableExitSwitch_C_Event_SetClosedExitIcon_OnServer");
static_assert(offsetof(BP_OpenableExitSwitch_C_Event_SetClosedExitIcon_OnServer, Target) == 0x000000, "Member 'BP_OpenableExitSwitch_C_Event_SetClosedExitIcon_OnServer::Target' has a wrong offset!");

// Function BP_OpenableExitSwitch.BP_OpenableExitSwitch_C.Event SetOpenedExitIcon
// 0x0008 (0x0008 - 0x0000)
struct BP_OpenableExitSwitch_C_Event_SetOpenedExitIcon final
{
public:
	class ABP_OpenableExitVolume_C*               Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_OpenableExitSwitch_C_Event_SetOpenedExitIcon) == 0x000008, "Wrong alignment on BP_OpenableExitSwitch_C_Event_SetOpenedExitIcon");
static_assert(sizeof(BP_OpenableExitSwitch_C_Event_SetOpenedExitIcon) == 0x000008, "Wrong size on BP_OpenableExitSwitch_C_Event_SetOpenedExitIcon");
static_assert(offsetof(BP_OpenableExitSwitch_C_Event_SetOpenedExitIcon, Target) == 0x000000, "Member 'BP_OpenableExitSwitch_C_Event_SetOpenedExitIcon::Target' has a wrong offset!");

// Function BP_OpenableExitSwitch.BP_OpenableExitSwitch_C.Event SetOpenedExitIcon OnServer
// 0x0008 (0x0008 - 0x0000)
struct BP_OpenableExitSwitch_C_Event_SetOpenedExitIcon_OnServer final
{
public:
	class ABP_OpenableExitVolume_C*               Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_OpenableExitSwitch_C_Event_SetOpenedExitIcon_OnServer) == 0x000008, "Wrong alignment on BP_OpenableExitSwitch_C_Event_SetOpenedExitIcon_OnServer");
static_assert(sizeof(BP_OpenableExitSwitch_C_Event_SetOpenedExitIcon_OnServer) == 0x000008, "Wrong size on BP_OpenableExitSwitch_C_Event_SetOpenedExitIcon_OnServer");
static_assert(offsetof(BP_OpenableExitSwitch_C_Event_SetOpenedExitIcon_OnServer, Target) == 0x000000, "Member 'BP_OpenableExitSwitch_C_Event_SetOpenedExitIcon_OnServer::Target' has a wrong offset!");

// Function BP_OpenableExitSwitch.BP_OpenableExitSwitch_C.Event SetOpenedExitIcon Multicast
// 0x0008 (0x0008 - 0x0000)
struct BP_OpenableExitSwitch_C_Event_SetOpenedExitIcon_Multicast final
{
public:
	class ABP_OpenableExitVolume_C*               Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_OpenableExitSwitch_C_Event_SetOpenedExitIcon_Multicast) == 0x000008, "Wrong alignment on BP_OpenableExitSwitch_C_Event_SetOpenedExitIcon_Multicast");
static_assert(sizeof(BP_OpenableExitSwitch_C_Event_SetOpenedExitIcon_Multicast) == 0x000008, "Wrong size on BP_OpenableExitSwitch_C_Event_SetOpenedExitIcon_Multicast");
static_assert(offsetof(BP_OpenableExitSwitch_C_Event_SetOpenedExitIcon_Multicast, Target) == 0x000000, "Member 'BP_OpenableExitSwitch_C_Event_SetOpenedExitIcon_Multicast::Target' has a wrong offset!");

// Function BP_OpenableExitSwitch.BP_OpenableExitSwitch_C.ExecuteUbergraph_BP_OpenableExitSwitch
// 0x00D8 (0x00D8 - 0x0000)
struct BP_OpenableExitSwitch_C_ExecuteUbergraph_BP_OpenableExitSwitch final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_OpenableExitVolume_C*               K2Node_CustomEvent_Target;                         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UInteractionItemComponent*              K2Node_ComponentBoundEvent_Sender;                 // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_Interacting_Actor;      // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Character_Script_C*                 K2Node_DynamicCast_AsBP_Character_Script;          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class ABP_Character_Script_C* Interacting_Character, class ABP_OpenableExitVolume_C* Openable_Exit)> K2Node_CreateDelegate_OutputDelegate;              // 0x0034(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45[0x3];                                       // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Enabled;                        // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0080(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_HasAuthority_ReturnValue_1;               // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91[0x3];                                       // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0094(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A5[0x3];                                       // 0x00A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_OpenableExitVolume_C*               K2Node_CustomEvent_Target_5;                       // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_OpenableExitVolume_C*               K2Node_CustomEvent_Target_4;                       // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_OpenableExitVolume_C*               K2Node_CustomEvent_Target_3;                       // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_OpenableExitVolume_C*               K2Node_CustomEvent_Target_2;                       // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_OpenableExitVolume_C*               K2Node_CustomEvent_Target_1;                       // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_OpenableExitSwitch_C_ExecuteUbergraph_BP_OpenableExitSwitch) == 0x000008, "Wrong alignment on BP_OpenableExitSwitch_C_ExecuteUbergraph_BP_OpenableExitSwitch");
static_assert(sizeof(BP_OpenableExitSwitch_C_ExecuteUbergraph_BP_OpenableExitSwitch) == 0x0000D8, "Wrong size on BP_OpenableExitSwitch_C_ExecuteUbergraph_BP_OpenableExitSwitch");
static_assert(offsetof(BP_OpenableExitSwitch_C_ExecuteUbergraph_BP_OpenableExitSwitch, EntryPoint) == 0x000000, "Member 'BP_OpenableExitSwitch_C_ExecuteUbergraph_BP_OpenableExitSwitch::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_OpenableExitSwitch_C_ExecuteUbergraph_BP_OpenableExitSwitch, K2Node_CustomEvent_Target) == 0x000008, "Member 'BP_OpenableExitSwitch_C_ExecuteUbergraph_BP_OpenableExitSwitch::K2Node_CustomEvent_Target' has a wrong offset!");
static_assert(offsetof(BP_OpenableExitSwitch_C_ExecuteUbergraph_BP_OpenableExitSwitch, CallFunc_HasAuthority_ReturnValue) == 0x000010, "Member 'BP_OpenableExitSwitch_C_ExecuteUbergraph_BP_OpenableExitSwitch::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OpenableExitSwitch_C_ExecuteUbergraph_BP_OpenableExitSwitch, K2Node_ComponentBoundEvent_Sender) == 0x000018, "Member 'BP_OpenableExitSwitch_C_ExecuteUbergraph_BP_OpenableExitSwitch::K2Node_ComponentBoundEvent_Sender' has a wrong offset!");
static_assert(offsetof(BP_OpenableExitSwitch_C_ExecuteUbergraph_BP_OpenableExitSwitch, K2Node_ComponentBoundEvent_Interacting_Actor) == 0x000020, "Member 'BP_OpenableExitSwitch_C_ExecuteUbergraph_BP_OpenableExitSwitch::K2Node_ComponentBoundEvent_Interacting_Actor' has a wrong offset!");
static_assert(offsetof(BP_OpenableExitSwitch_C_ExecuteUbergraph_BP_OpenableExitSwitch, K2Node_DynamicCast_AsBP_Character_Script) == 0x000028, "Member 'BP_OpenableExitSwitch_C_ExecuteUbergraph_BP_OpenableExitSwitch::K2Node_DynamicCast_AsBP_Character_Script' has a wrong offset!");
static_assert(offsetof(BP_OpenableExitSwitch_C_ExecuteUbergraph_BP_OpenableExitSwitch, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_OpenableExitSwitch_C_ExecuteUbergraph_BP_OpenableExitSwitch::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_OpenableExitSwitch_C_ExecuteUbergraph_BP_OpenableExitSwitch, K2Node_CreateDelegate_OutputDelegate) == 0x000034, "Member 'BP_OpenableExitSwitch_C_ExecuteUbergraph_BP_OpenableExitSwitch::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_OpenableExitSwitch_C_ExecuteUbergraph_BP_OpenableExitSwitch, CallFunc_IsValid_ReturnValue) == 0x000044, "Member 'BP_OpenableExitSwitch_C_ExecuteUbergraph_BP_OpenableExitSwitch::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OpenableExitSwitch_C_ExecuteUbergraph_BP_OpenableExitSwitch, CallFunc_GetDisplayName_ReturnValue) == 0x000048, "Member 'BP_OpenableExitSwitch_C_ExecuteUbergraph_BP_OpenableExitSwitch::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OpenableExitSwitch_C_ExecuteUbergraph_BP_OpenableExitSwitch, CallFunc_Concat_StrStr_ReturnValue) == 0x000058, "Member 'BP_OpenableExitSwitch_C_ExecuteUbergraph_BP_OpenableExitSwitch::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OpenableExitSwitch_C_ExecuteUbergraph_BP_OpenableExitSwitch, K2Node_CustomEvent_Enabled) == 0x000068, "Member 'BP_OpenableExitSwitch_C_ExecuteUbergraph_BP_OpenableExitSwitch::K2Node_CustomEvent_Enabled' has a wrong offset!");
static_assert(offsetof(BP_OpenableExitSwitch_C_ExecuteUbergraph_BP_OpenableExitSwitch, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000070, "Member 'BP_OpenableExitSwitch_C_ExecuteUbergraph_BP_OpenableExitSwitch::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_OpenableExitSwitch_C_ExecuteUbergraph_BP_OpenableExitSwitch, K2Node_CreateDelegate_OutputDelegate_1) == 0x000080, "Member 'BP_OpenableExitSwitch_C_ExecuteUbergraph_BP_OpenableExitSwitch::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_OpenableExitSwitch_C_ExecuteUbergraph_BP_OpenableExitSwitch, CallFunc_HasAuthority_ReturnValue_1) == 0x000090, "Member 'BP_OpenableExitSwitch_C_ExecuteUbergraph_BP_OpenableExitSwitch::CallFunc_HasAuthority_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_OpenableExitSwitch_C_ExecuteUbergraph_BP_OpenableExitSwitch, K2Node_CreateDelegate_OutputDelegate_2) == 0x000094, "Member 'BP_OpenableExitSwitch_C_ExecuteUbergraph_BP_OpenableExitSwitch::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_OpenableExitSwitch_C_ExecuteUbergraph_BP_OpenableExitSwitch, CallFunc_Not_PreBool_ReturnValue) == 0x0000A4, "Member 'BP_OpenableExitSwitch_C_ExecuteUbergraph_BP_OpenableExitSwitch::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OpenableExitSwitch_C_ExecuteUbergraph_BP_OpenableExitSwitch, K2Node_CustomEvent_Target_5) == 0x0000A8, "Member 'BP_OpenableExitSwitch_C_ExecuteUbergraph_BP_OpenableExitSwitch::K2Node_CustomEvent_Target_5' has a wrong offset!");
static_assert(offsetof(BP_OpenableExitSwitch_C_ExecuteUbergraph_BP_OpenableExitSwitch, CallFunc_BooleanOR_ReturnValue) == 0x0000B0, "Member 'BP_OpenableExitSwitch_C_ExecuteUbergraph_BP_OpenableExitSwitch::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OpenableExitSwitch_C_ExecuteUbergraph_BP_OpenableExitSwitch, K2Node_CustomEvent_Target_4) == 0x0000B8, "Member 'BP_OpenableExitSwitch_C_ExecuteUbergraph_BP_OpenableExitSwitch::K2Node_CustomEvent_Target_4' has a wrong offset!");
static_assert(offsetof(BP_OpenableExitSwitch_C_ExecuteUbergraph_BP_OpenableExitSwitch, K2Node_CustomEvent_Target_3) == 0x0000C0, "Member 'BP_OpenableExitSwitch_C_ExecuteUbergraph_BP_OpenableExitSwitch::K2Node_CustomEvent_Target_3' has a wrong offset!");
static_assert(offsetof(BP_OpenableExitSwitch_C_ExecuteUbergraph_BP_OpenableExitSwitch, K2Node_CustomEvent_Target_2) == 0x0000C8, "Member 'BP_OpenableExitSwitch_C_ExecuteUbergraph_BP_OpenableExitSwitch::K2Node_CustomEvent_Target_2' has a wrong offset!");
static_assert(offsetof(BP_OpenableExitSwitch_C_ExecuteUbergraph_BP_OpenableExitSwitch, K2Node_CustomEvent_Target_1) == 0x0000D0, "Member 'BP_OpenableExitSwitch_C_ExecuteUbergraph_BP_OpenableExitSwitch::K2Node_CustomEvent_Target_1' has a wrong offset!");

// Function BP_OpenableExitSwitch.BP_OpenableExitSwitch_C.Openable Exit Switch Interacted__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct BP_OpenableExitSwitch_C_Openable_Exit_Switch_Interacted__DelegateSignature final
{
public:
	class ABP_Character_Script_C*                 Interacting_Character;                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_OpenableExitVolume_C*               Openable_Exit_0;                                   // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_OpenableExitSwitch_C_Openable_Exit_Switch_Interacted__DelegateSignature) == 0x000008, "Wrong alignment on BP_OpenableExitSwitch_C_Openable_Exit_Switch_Interacted__DelegateSignature");
static_assert(sizeof(BP_OpenableExitSwitch_C_Openable_Exit_Switch_Interacted__DelegateSignature) == 0x000010, "Wrong size on BP_OpenableExitSwitch_C_Openable_Exit_Switch_Interacted__DelegateSignature");
static_assert(offsetof(BP_OpenableExitSwitch_C_Openable_Exit_Switch_Interacted__DelegateSignature, Interacting_Character) == 0x000000, "Member 'BP_OpenableExitSwitch_C_Openable_Exit_Switch_Interacted__DelegateSignature::Interacting_Character' has a wrong offset!");
static_assert(offsetof(BP_OpenableExitSwitch_C_Openable_Exit_Switch_Interacted__DelegateSignature, Openable_Exit_0) == 0x000008, "Member 'BP_OpenableExitSwitch_C_Openable_Exit_Switch_Interacted__DelegateSignature::Openable_Exit_0' has a wrong offset!");

}

