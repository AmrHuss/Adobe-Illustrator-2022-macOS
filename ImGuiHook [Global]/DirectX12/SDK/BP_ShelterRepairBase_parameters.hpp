#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ShelterRepairBase

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_ShelterRepairBase.BP_ShelterRepairBase_C.ExecuteUbergraph_BP_ShelterRepairBase
// 0x00A8 (0x00A8 - 0x0000)
struct BP_ShelterRepairBase_C_ExecuteUbergraph_BP_ShelterRepairBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 NewLevel)>               K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_NewLevel_1;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHumanPlayerState*                      K2Node_DynamicCast_AsHuman_Player_State;           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AStash*                                 CallFunc_GetStash_ReturnValue;                     // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_NewLevel;                       // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetShelterLevel_ReturnValue;              // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInitiliazed_ReturnValue;                // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62[0x6];                                       // 0x0062(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameModeBase*                          CallFunc_GetGameMode_ReturnValue;                  // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_GameMode_Shelter_C*                 K2Node_DynamicCast_AsBP_Game_Mode_Shelter;         // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A[0x6];                                       // 0x007A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_GameMode_C>       CallFunc_GetShelterSaveFile_self_CastInput;        // 0x0080(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetShelterSaveFile_Valid;                 // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_PersistentShelter_SaveGame_C*       CallFunc_GetShelterSaveFile_SaveFile;              // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ShelterRepairBase_C_ExecuteUbergraph_BP_ShelterRepairBase) == 0x000008, "Wrong alignment on BP_ShelterRepairBase_C_ExecuteUbergraph_BP_ShelterRepairBase");
static_assert(sizeof(BP_ShelterRepairBase_C_ExecuteUbergraph_BP_ShelterRepairBase) == 0x0000A8, "Wrong size on BP_ShelterRepairBase_C_ExecuteUbergraph_BP_ShelterRepairBase");
static_assert(offsetof(BP_ShelterRepairBase_C_ExecuteUbergraph_BP_ShelterRepairBase, EntryPoint) == 0x000000, "Member 'BP_ShelterRepairBase_C_ExecuteUbergraph_BP_ShelterRepairBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ShelterRepairBase_C_ExecuteUbergraph_BP_ShelterRepairBase, Temp_bool_Variable) == 0x000004, "Member 'BP_ShelterRepairBase_C_ExecuteUbergraph_BP_ShelterRepairBase::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_ShelterRepairBase_C_ExecuteUbergraph_BP_ShelterRepairBase, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'BP_ShelterRepairBase_C_ExecuteUbergraph_BP_ShelterRepairBase::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_ShelterRepairBase_C_ExecuteUbergraph_BP_ShelterRepairBase, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'BP_ShelterRepairBase_C_ExecuteUbergraph_BP_ShelterRepairBase::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_ShelterRepairBase_C_ExecuteUbergraph_BP_ShelterRepairBase, K2Node_CustomEvent_NewLevel_1) == 0x000028, "Member 'BP_ShelterRepairBase_C_ExecuteUbergraph_BP_ShelterRepairBase::K2Node_CustomEvent_NewLevel_1' has a wrong offset!");
static_assert(offsetof(BP_ShelterRepairBase_C_ExecuteUbergraph_BP_ShelterRepairBase, CallFunc_GetPlayerPawn_ReturnValue) == 0x000030, "Member 'BP_ShelterRepairBase_C_ExecuteUbergraph_BP_ShelterRepairBase::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShelterRepairBase_C_ExecuteUbergraph_BP_ShelterRepairBase, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'BP_ShelterRepairBase_C_ExecuteUbergraph_BP_ShelterRepairBase::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShelterRepairBase_C_ExecuteUbergraph_BP_ShelterRepairBase, K2Node_DynamicCast_AsHuman_Player_State) == 0x000040, "Member 'BP_ShelterRepairBase_C_ExecuteUbergraph_BP_ShelterRepairBase::K2Node_DynamicCast_AsHuman_Player_State' has a wrong offset!");
static_assert(offsetof(BP_ShelterRepairBase_C_ExecuteUbergraph_BP_ShelterRepairBase, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'BP_ShelterRepairBase_C_ExecuteUbergraph_BP_ShelterRepairBase::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ShelterRepairBase_C_ExecuteUbergraph_BP_ShelterRepairBase, CallFunc_GetStash_ReturnValue) == 0x000050, "Member 'BP_ShelterRepairBase_C_ExecuteUbergraph_BP_ShelterRepairBase::CallFunc_GetStash_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShelterRepairBase_C_ExecuteUbergraph_BP_ShelterRepairBase, K2Node_CustomEvent_NewLevel) == 0x000058, "Member 'BP_ShelterRepairBase_C_ExecuteUbergraph_BP_ShelterRepairBase::K2Node_CustomEvent_NewLevel' has a wrong offset!");
static_assert(offsetof(BP_ShelterRepairBase_C_ExecuteUbergraph_BP_ShelterRepairBase, CallFunc_GetShelterLevel_ReturnValue) == 0x00005C, "Member 'BP_ShelterRepairBase_C_ExecuteUbergraph_BP_ShelterRepairBase::CallFunc_GetShelterLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShelterRepairBase_C_ExecuteUbergraph_BP_ShelterRepairBase, CallFunc_IsInitiliazed_ReturnValue) == 0x000060, "Member 'BP_ShelterRepairBase_C_ExecuteUbergraph_BP_ShelterRepairBase::CallFunc_IsInitiliazed_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShelterRepairBase_C_ExecuteUbergraph_BP_ShelterRepairBase, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000061, "Member 'BP_ShelterRepairBase_C_ExecuteUbergraph_BP_ShelterRepairBase::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShelterRepairBase_C_ExecuteUbergraph_BP_ShelterRepairBase, CallFunc_GetGameMode_ReturnValue) == 0x000068, "Member 'BP_ShelterRepairBase_C_ExecuteUbergraph_BP_ShelterRepairBase::CallFunc_GetGameMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShelterRepairBase_C_ExecuteUbergraph_BP_ShelterRepairBase, K2Node_DynamicCast_AsBP_Game_Mode_Shelter) == 0x000070, "Member 'BP_ShelterRepairBase_C_ExecuteUbergraph_BP_ShelterRepairBase::K2Node_DynamicCast_AsBP_Game_Mode_Shelter' has a wrong offset!");
static_assert(offsetof(BP_ShelterRepairBase_C_ExecuteUbergraph_BP_ShelterRepairBase, K2Node_DynamicCast_bSuccess_1) == 0x000078, "Member 'BP_ShelterRepairBase_C_ExecuteUbergraph_BP_ShelterRepairBase::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_ShelterRepairBase_C_ExecuteUbergraph_BP_ShelterRepairBase, Temp_bool_Variable_1) == 0x000079, "Member 'BP_ShelterRepairBase_C_ExecuteUbergraph_BP_ShelterRepairBase::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ShelterRepairBase_C_ExecuteUbergraph_BP_ShelterRepairBase, CallFunc_GetShelterSaveFile_self_CastInput) == 0x000080, "Member 'BP_ShelterRepairBase_C_ExecuteUbergraph_BP_ShelterRepairBase::CallFunc_GetShelterSaveFile_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_ShelterRepairBase_C_ExecuteUbergraph_BP_ShelterRepairBase, CallFunc_GetShelterSaveFile_Valid) == 0x000090, "Member 'BP_ShelterRepairBase_C_ExecuteUbergraph_BP_ShelterRepairBase::CallFunc_GetShelterSaveFile_Valid' has a wrong offset!");
static_assert(offsetof(BP_ShelterRepairBase_C_ExecuteUbergraph_BP_ShelterRepairBase, CallFunc_GetShelterSaveFile_SaveFile) == 0x000098, "Member 'BP_ShelterRepairBase_C_ExecuteUbergraph_BP_ShelterRepairBase::CallFunc_GetShelterSaveFile_SaveFile' has a wrong offset!");
static_assert(offsetof(BP_ShelterRepairBase_C_ExecuteUbergraph_BP_ShelterRepairBase, K2Node_Select_Default) == 0x0000A0, "Member 'BP_ShelterRepairBase_C_ExecuteUbergraph_BP_ShelterRepairBase::K2Node_Select_Default' has a wrong offset!");

// Function BP_ShelterRepairBase.BP_ShelterRepairBase_C.OnShelterLevelChanged_Event_0
// 0x0004 (0x0004 - 0x0000)
struct BP_ShelterRepairBase_C_OnShelterLevelChanged_Event_0 final
{
public:
	int32                                         NewLevel;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ShelterRepairBase_C_OnShelterLevelChanged_Event_0) == 0x000004, "Wrong alignment on BP_ShelterRepairBase_C_OnShelterLevelChanged_Event_0");
static_assert(sizeof(BP_ShelterRepairBase_C_OnShelterLevelChanged_Event_0) == 0x000004, "Wrong size on BP_ShelterRepairBase_C_OnShelterLevelChanged_Event_0");
static_assert(offsetof(BP_ShelterRepairBase_C_OnShelterLevelChanged_Event_0, NewLevel) == 0x000000, "Member 'BP_ShelterRepairBase_C_OnShelterLevelChanged_Event_0::NewLevel' has a wrong offset!");

// Function BP_ShelterRepairBase.BP_ShelterRepairBase_C.LoadLevel
// 0x0004 (0x0004 - 0x0000)
struct BP_ShelterRepairBase_C_LoadLevel final
{
public:
	int32                                         NewLevel;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ShelterRepairBase_C_LoadLevel) == 0x000004, "Wrong alignment on BP_ShelterRepairBase_C_LoadLevel");
static_assert(sizeof(BP_ShelterRepairBase_C_LoadLevel) == 0x000004, "Wrong size on BP_ShelterRepairBase_C_LoadLevel");
static_assert(offsetof(BP_ShelterRepairBase_C_LoadLevel, NewLevel) == 0x000000, "Member 'BP_ShelterRepairBase_C_LoadLevel::NewLevel' has a wrong offset!");

// Function BP_ShelterRepairBase.BP_ShelterRepairBase_C.UpdateDisplayLevel
// 0x0030 (0x0030 - 0x0000)
struct BP_ShelterRepairBase_C_UpdateDisplayLevel final
{
public:
	class AGameModeBase*                          CallFunc_GetGameMode_ReturnValue;                  // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_GameMode_C>       K2Node_DynamicCast_AsBPI_Game_Mode;                // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetShelterSaveFile_Valid;                 // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_PersistentShelter_SaveGame_C*       CallFunc_GetShelterSaveFile_SaveFile;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ShelterRepairBase_C_UpdateDisplayLevel) == 0x000008, "Wrong alignment on BP_ShelterRepairBase_C_UpdateDisplayLevel");
static_assert(sizeof(BP_ShelterRepairBase_C_UpdateDisplayLevel) == 0x000030, "Wrong size on BP_ShelterRepairBase_C_UpdateDisplayLevel");
static_assert(offsetof(BP_ShelterRepairBase_C_UpdateDisplayLevel, CallFunc_GetGameMode_ReturnValue) == 0x000000, "Member 'BP_ShelterRepairBase_C_UpdateDisplayLevel::CallFunc_GetGameMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ShelterRepairBase_C_UpdateDisplayLevel, K2Node_DynamicCast_AsBPI_Game_Mode) == 0x000008, "Member 'BP_ShelterRepairBase_C_UpdateDisplayLevel::K2Node_DynamicCast_AsBPI_Game_Mode' has a wrong offset!");
static_assert(offsetof(BP_ShelterRepairBase_C_UpdateDisplayLevel, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_ShelterRepairBase_C_UpdateDisplayLevel::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ShelterRepairBase_C_UpdateDisplayLevel, CallFunc_GetShelterSaveFile_Valid) == 0x000019, "Member 'BP_ShelterRepairBase_C_UpdateDisplayLevel::CallFunc_GetShelterSaveFile_Valid' has a wrong offset!");
static_assert(offsetof(BP_ShelterRepairBase_C_UpdateDisplayLevel, CallFunc_GetShelterSaveFile_SaveFile) == 0x000020, "Member 'BP_ShelterRepairBase_C_UpdateDisplayLevel::CallFunc_GetShelterSaveFile_SaveFile' has a wrong offset!");
static_assert(offsetof(BP_ShelterRepairBase_C_UpdateDisplayLevel, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000028, "Member 'BP_ShelterRepairBase_C_UpdateDisplayLevel::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

// Function BP_ShelterRepairBase.BP_ShelterRepairBase_C.LoadLevels
// 0x0004 (0x0004 - 0x0000)
struct BP_ShelterRepairBase_C_LoadLevels final
{
public:
	int32                                         CloudLevel_0;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ShelterRepairBase_C_LoadLevels) == 0x000004, "Wrong alignment on BP_ShelterRepairBase_C_LoadLevels");
static_assert(sizeof(BP_ShelterRepairBase_C_LoadLevels) == 0x000004, "Wrong size on BP_ShelterRepairBase_C_LoadLevels");
static_assert(offsetof(BP_ShelterRepairBase_C_LoadLevels, CloudLevel_0) == 0x000000, "Member 'BP_ShelterRepairBase_C_LoadLevels::CloudLevel_0' has a wrong offset!");

}

