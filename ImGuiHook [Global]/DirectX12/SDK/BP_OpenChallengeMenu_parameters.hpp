#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_OpenChallengeMenu

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_OpenChallengeMenu.BP_OpenChallengeMenu_C.ExecuteUbergraph_BP_OpenChallengeMenu
// 0x0048 (0x0048 - 0x0000)
struct BP_OpenChallengeMenu_C_ExecuteUbergraph_BP_OpenChallengeMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UInteractionItemComponent*              K2Node_ComponentBoundEvent_Sender;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_Interacting_Actor;      // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetInstigatorController_ReturnValue;      // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameModeBase*                          CallFunc_GetGameMode_ReturnValue;                  // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHumanPlayerController*                 K2Node_DynamicCast_AsHuman_Player_Controller;      // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_ShootingChallenges_GMComponent_C*   CallFunc_GetComponentByClass_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_OpenChallengeMenu_C_ExecuteUbergraph_BP_OpenChallengeMenu) == 0x000008, "Wrong alignment on BP_OpenChallengeMenu_C_ExecuteUbergraph_BP_OpenChallengeMenu");
static_assert(sizeof(BP_OpenChallengeMenu_C_ExecuteUbergraph_BP_OpenChallengeMenu) == 0x000048, "Wrong size on BP_OpenChallengeMenu_C_ExecuteUbergraph_BP_OpenChallengeMenu");
static_assert(offsetof(BP_OpenChallengeMenu_C_ExecuteUbergraph_BP_OpenChallengeMenu, EntryPoint) == 0x000000, "Member 'BP_OpenChallengeMenu_C_ExecuteUbergraph_BP_OpenChallengeMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_OpenChallengeMenu_C_ExecuteUbergraph_BP_OpenChallengeMenu, K2Node_ComponentBoundEvent_Sender) == 0x000008, "Member 'BP_OpenChallengeMenu_C_ExecuteUbergraph_BP_OpenChallengeMenu::K2Node_ComponentBoundEvent_Sender' has a wrong offset!");
static_assert(offsetof(BP_OpenChallengeMenu_C_ExecuteUbergraph_BP_OpenChallengeMenu, K2Node_ComponentBoundEvent_Interacting_Actor) == 0x000010, "Member 'BP_OpenChallengeMenu_C_ExecuteUbergraph_BP_OpenChallengeMenu::K2Node_ComponentBoundEvent_Interacting_Actor' has a wrong offset!");
static_assert(offsetof(BP_OpenChallengeMenu_C_ExecuteUbergraph_BP_OpenChallengeMenu, CallFunc_GetInstigatorController_ReturnValue) == 0x000018, "Member 'BP_OpenChallengeMenu_C_ExecuteUbergraph_BP_OpenChallengeMenu::CallFunc_GetInstigatorController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OpenChallengeMenu_C_ExecuteUbergraph_BP_OpenChallengeMenu, CallFunc_GetGameMode_ReturnValue) == 0x000020, "Member 'BP_OpenChallengeMenu_C_ExecuteUbergraph_BP_OpenChallengeMenu::CallFunc_GetGameMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OpenChallengeMenu_C_ExecuteUbergraph_BP_OpenChallengeMenu, K2Node_DynamicCast_AsHuman_Player_Controller) == 0x000028, "Member 'BP_OpenChallengeMenu_C_ExecuteUbergraph_BP_OpenChallengeMenu::K2Node_DynamicCast_AsHuman_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_OpenChallengeMenu_C_ExecuteUbergraph_BP_OpenChallengeMenu, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_OpenChallengeMenu_C_ExecuteUbergraph_BP_OpenChallengeMenu::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_OpenChallengeMenu_C_ExecuteUbergraph_BP_OpenChallengeMenu, CallFunc_GetComponentByClass_ReturnValue) == 0x000038, "Member 'BP_OpenChallengeMenu_C_ExecuteUbergraph_BP_OpenChallengeMenu::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_OpenChallengeMenu_C_ExecuteUbergraph_BP_OpenChallengeMenu, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'BP_OpenChallengeMenu_C_ExecuteUbergraph_BP_OpenChallengeMenu::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_OpenChallengeMenu.BP_OpenChallengeMenu_C.BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_0_Interaction Start on Server__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct BP_OpenChallengeMenu_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_0_Interaction_Start_on_Server__DelegateSignature final
{
public:
	class UInteractionItemComponent*              Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Interacting_Actor;                                 // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_OpenChallengeMenu_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_0_Interaction_Start_on_Server__DelegateSignature) == 0x000008, "Wrong alignment on BP_OpenChallengeMenu_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_0_Interaction_Start_on_Server__DelegateSignature");
static_assert(sizeof(BP_OpenChallengeMenu_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_0_Interaction_Start_on_Server__DelegateSignature) == 0x000010, "Wrong size on BP_OpenChallengeMenu_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_0_Interaction_Start_on_Server__DelegateSignature");
static_assert(offsetof(BP_OpenChallengeMenu_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_0_Interaction_Start_on_Server__DelegateSignature, Sender) == 0x000000, "Member 'BP_OpenChallengeMenu_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_0_Interaction_Start_on_Server__DelegateSignature::Sender' has a wrong offset!");
static_assert(offsetof(BP_OpenChallengeMenu_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_0_Interaction_Start_on_Server__DelegateSignature, Interacting_Actor) == 0x000008, "Member 'BP_OpenChallengeMenu_C_BndEvt__BP_InteractionItemComponent_K2Node_ComponentBoundEvent_0_Interaction_Start_on_Server__DelegateSignature::Interacting_Actor' has a wrong offset!");

}

