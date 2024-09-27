#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MatchMusicComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Flame_structs.hpp"


namespace SDK::Params
{

// Function BP_MatchMusicComponent.BP_MatchMusicComponent_C.ExecuteUbergraph_BP_MatchMusicComponent
// 0x01D0 (0x01D0 - 0x0000)
struct BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFlameAssetManager*                     CallFunc_GetAssetManagerSystem_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable;                               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_MusicEnabled;                   // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Character_C*                        K2Node_CustomEvent_Possessed_Character;            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Character_Script_C*                 K2Node_DynamicCast_AsBP_Character_Script;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Character_C*                        K2Node_CustomEvent_DyingCharacter;                 // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_DamageAmount;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDamageType                                   K2Node_CustomEvent_DamageType;                     // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D[0x3];                                       // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AHumanCharacter*                        K2Node_CustomEvent_InstigatingCharacter;           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_CustomEvent_InstigatingItem;                // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_CustomEvent_HitResult;                      // 0x0050(0x008C)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_1;                             // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_ED[0x3];                                       // 0x00ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class ABP_Character_C* Possessed_Character)> K2Node_CreateDelegate_OutputDelegate;              // 0x00F0(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_101[0x3];                                      // 0x0101(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default;                             // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Handle_Valid_and_Timer_Exists_Return_Value; // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_109[0x3];                                      // 0x0109(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x010C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_11C[0x4];                                      // 0x011C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0120(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeLiteralFloat_ReturnValue;             // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class ABP_Character_C* DyingCharacter, float DamageAmount, EDamageType DamageType, class AHumanCharacter* InstigatingCharacter, class UClass* InstigatingItem, struct FHitResult& HitResult)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x012C(0x0010)(ZeroConstructor, NoDestructor)
	float                                         CallFunc_MakeLiteralFloat_ReturnValue_1;           // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_MakeLiteralBool_ReturnValue;              // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_MakeLiteralBool_ReturnValue_1;            // 0x0141(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_142[0x2];                                      // 0x0142(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetUserControllerId_ReturnValue;          // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetUserControllerId_ReturnValue_1;        // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14C[0x4];                                      // 0x014C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AHumanPlayerController*                 CallFunc_GetHumanPlayerControllerByControllerId_ReturnValue; // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHumanPlayerController*                 CallFunc_GetHumanPlayerControllerByControllerId_ReturnValue_1; // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_169[0x7];                                      // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Character_Script_C*                 K2Node_DynamicCast_AsBP_Character_Script_1;        // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_179[0x7];                                      // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerController_Script_C*          K2Node_DynamicCast_AsBP_Player_Controller_Script;  // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_189[0x7];                                      // 0x0189(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UObject>                 CallFunc_GetSoftReference_ReturnValue;             // 0x0190(0x0028)(UObjectWrapper, HasGetValueTypeHash)
	class UObject*                                CallFunc_LoadSoftReference_ReturnValue;            // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             K2Node_DynamicCast_AsSound_Base;                   // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent) == 0x000008, "Wrong alignment on BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent");
static_assert(sizeof(BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent) == 0x0001D0, "Wrong size on BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent");
static_assert(offsetof(BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent, EntryPoint) == 0x000000, "Member 'BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent, CallFunc_GetAssetManagerSystem_ReturnValue) == 0x000008, "Member 'BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent::CallFunc_GetAssetManagerSystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent, Temp_float_Variable) == 0x000010, "Member 'BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent, K2Node_CustomEvent_MusicEnabled) == 0x000014, "Member 'BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent::K2Node_CustomEvent_MusicEnabled' has a wrong offset!");
static_assert(offsetof(BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent, K2Node_CustomEvent_Possessed_Character) == 0x000018, "Member 'BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent::K2Node_CustomEvent_Possessed_Character' has a wrong offset!");
static_assert(offsetof(BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent, K2Node_DynamicCast_AsBP_Character_Script) == 0x000020, "Member 'BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent::K2Node_DynamicCast_AsBP_Character_Script' has a wrong offset!");
static_assert(offsetof(BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent, K2Node_CustomEvent_DyingCharacter) == 0x000030, "Member 'BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent::K2Node_CustomEvent_DyingCharacter' has a wrong offset!");
static_assert(offsetof(BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent, K2Node_CustomEvent_DamageAmount) == 0x000038, "Member 'BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent::K2Node_CustomEvent_DamageAmount' has a wrong offset!");
static_assert(offsetof(BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent, K2Node_CustomEvent_DamageType) == 0x00003C, "Member 'BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent::K2Node_CustomEvent_DamageType' has a wrong offset!");
static_assert(offsetof(BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent, K2Node_CustomEvent_InstigatingCharacter) == 0x000040, "Member 'BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent::K2Node_CustomEvent_InstigatingCharacter' has a wrong offset!");
static_assert(offsetof(BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent, K2Node_CustomEvent_InstigatingItem) == 0x000048, "Member 'BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent::K2Node_CustomEvent_InstigatingItem' has a wrong offset!");
static_assert(offsetof(BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent, K2Node_CustomEvent_HitResult) == 0x000050, "Member 'BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent::K2Node_CustomEvent_HitResult' has a wrong offset!");
static_assert(offsetof(BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent, CallFunc_GetController_ReturnValue) == 0x0000E0, "Member 'BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent, Temp_float_Variable_1) == 0x0000E8, "Member 'BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent, CallFunc_IsDedicatedServer_ReturnValue) == 0x0000EC, "Member 'BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent, K2Node_CreateDelegate_OutputDelegate) == 0x0000F0, "Member 'BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent, Temp_bool_Variable) == 0x000100, "Member 'BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent, K2Node_Select_Default) == 0x000104, "Member 'BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent, CallFunc_Handle_Valid_and_Timer_Exists_Return_Value) == 0x000108, "Member 'BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent::CallFunc_Handle_Valid_and_Timer_Exists_Return_Value' has a wrong offset!");
static_assert(offsetof(BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent, K2Node_CreateDelegate_OutputDelegate_1) == 0x00010C, "Member 'BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000120, "Member 'BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent, CallFunc_MakeLiteralFloat_ReturnValue) == 0x000128, "Member 'BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent::CallFunc_MakeLiteralFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent, K2Node_CreateDelegate_OutputDelegate_2) == 0x00012C, "Member 'BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent, CallFunc_MakeLiteralFloat_ReturnValue_1) == 0x00013C, "Member 'BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent::CallFunc_MakeLiteralFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent, CallFunc_MakeLiteralBool_ReturnValue) == 0x000140, "Member 'BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent::CallFunc_MakeLiteralBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent, CallFunc_MakeLiteralBool_ReturnValue_1) == 0x000141, "Member 'BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent::CallFunc_MakeLiteralBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent, CallFunc_GetUserControllerId_ReturnValue) == 0x000144, "Member 'BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent::CallFunc_GetUserControllerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent, CallFunc_GetUserControllerId_ReturnValue_1) == 0x000148, "Member 'BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent::CallFunc_GetUserControllerId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent, CallFunc_GetHumanPlayerControllerByControllerId_ReturnValue) == 0x000150, "Member 'BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent::CallFunc_GetHumanPlayerControllerByControllerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent, CallFunc_GetHumanPlayerControllerByControllerId_ReturnValue_1) == 0x000158, "Member 'BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent::CallFunc_GetHumanPlayerControllerByControllerId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent, CallFunc_K2_GetPawn_ReturnValue) == 0x000160, "Member 'BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000168, "Member 'BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent, K2Node_DynamicCast_AsBP_Character_Script_1) == 0x000170, "Member 'BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent::K2Node_DynamicCast_AsBP_Character_Script_1' has a wrong offset!");
static_assert(offsetof(BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent, K2Node_DynamicCast_bSuccess_1) == 0x000178, "Member 'BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent, K2Node_DynamicCast_AsBP_Player_Controller_Script) == 0x000180, "Member 'BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent::K2Node_DynamicCast_AsBP_Player_Controller_Script' has a wrong offset!");
static_assert(offsetof(BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent, K2Node_DynamicCast_bSuccess_2) == 0x000188, "Member 'BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent, CallFunc_GetSoftReference_ReturnValue) == 0x000190, "Member 'BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent::CallFunc_GetSoftReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent, CallFunc_LoadSoftReference_ReturnValue) == 0x0001B8, "Member 'BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent::CallFunc_LoadSoftReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent, K2Node_DynamicCast_AsSound_Base) == 0x0001C0, "Member 'BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent::K2Node_DynamicCast_AsSound_Base' has a wrong offset!");
static_assert(offsetof(BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent, K2Node_DynamicCast_bSuccess_3) == 0x0001C8, "Member 'BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent, CallFunc_IsValid_ReturnValue) == 0x0001C9, "Member 'BP_MatchMusicComponent_C_ExecuteUbergraph_BP_MatchMusicComponent::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_MatchMusicComponent.BP_MatchMusicComponent_C.Character Died
// 0x00B0 (0x00B0 - 0x0000)
struct BP_MatchMusicComponent_C_Character_Died final
{
public:
	class ABP_Character_C*                        DyingCharacter;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DamageAmount;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDamageType                                   DamageType;                                        // 0x000C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AHumanCharacter*                        InstigatingCharacter;                              // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 InstigatingItem;                                   // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             HitResult;                                         // 0x0020(0x008C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_MatchMusicComponent_C_Character_Died) == 0x000008, "Wrong alignment on BP_MatchMusicComponent_C_Character_Died");
static_assert(sizeof(BP_MatchMusicComponent_C_Character_Died) == 0x0000B0, "Wrong size on BP_MatchMusicComponent_C_Character_Died");
static_assert(offsetof(BP_MatchMusicComponent_C_Character_Died, DyingCharacter) == 0x000000, "Member 'BP_MatchMusicComponent_C_Character_Died::DyingCharacter' has a wrong offset!");
static_assert(offsetof(BP_MatchMusicComponent_C_Character_Died, DamageAmount) == 0x000008, "Member 'BP_MatchMusicComponent_C_Character_Died::DamageAmount' has a wrong offset!");
static_assert(offsetof(BP_MatchMusicComponent_C_Character_Died, DamageType) == 0x00000C, "Member 'BP_MatchMusicComponent_C_Character_Died::DamageType' has a wrong offset!");
static_assert(offsetof(BP_MatchMusicComponent_C_Character_Died, InstigatingCharacter) == 0x000010, "Member 'BP_MatchMusicComponent_C_Character_Died::InstigatingCharacter' has a wrong offset!");
static_assert(offsetof(BP_MatchMusicComponent_C_Character_Died, InstigatingItem) == 0x000018, "Member 'BP_MatchMusicComponent_C_Character_Died::InstigatingItem' has a wrong offset!");
static_assert(offsetof(BP_MatchMusicComponent_C_Character_Died, HitResult) == 0x000020, "Member 'BP_MatchMusicComponent_C_Character_Died::HitResult' has a wrong offset!");

// Function BP_MatchMusicComponent.BP_MatchMusicComponent_C.React to New Pawn
// 0x0008 (0x0008 - 0x0000)
struct BP_MatchMusicComponent_C_React_to_New_Pawn final
{
public:
	class ABP_Character_C*                        Possessed_Character;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MatchMusicComponent_C_React_to_New_Pawn) == 0x000008, "Wrong alignment on BP_MatchMusicComponent_C_React_to_New_Pawn");
static_assert(sizeof(BP_MatchMusicComponent_C_React_to_New_Pawn) == 0x000008, "Wrong size on BP_MatchMusicComponent_C_React_to_New_Pawn");
static_assert(offsetof(BP_MatchMusicComponent_C_React_to_New_Pawn, Possessed_Character) == 0x000000, "Member 'BP_MatchMusicComponent_C_React_to_New_Pawn::Possessed_Character' has a wrong offset!");

// Function BP_MatchMusicComponent.BP_MatchMusicComponent_C.Start Airdrop Carry Music
// 0x0001 (0x0001 - 0x0000)
struct BP_MatchMusicComponent_C_Start_Airdrop_Carry_Music final
{
public:
	bool                                          MusicEnabled;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MatchMusicComponent_C_Start_Airdrop_Carry_Music) == 0x000001, "Wrong alignment on BP_MatchMusicComponent_C_Start_Airdrop_Carry_Music");
static_assert(sizeof(BP_MatchMusicComponent_C_Start_Airdrop_Carry_Music) == 0x000001, "Wrong size on BP_MatchMusicComponent_C_Start_Airdrop_Carry_Music");
static_assert(offsetof(BP_MatchMusicComponent_C_Start_Airdrop_Carry_Music, MusicEnabled) == 0x000000, "Member 'BP_MatchMusicComponent_C_Start_Airdrop_Carry_Music::MusicEnabled' has a wrong offset!");

}

