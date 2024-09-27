#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MementoLootManager_Trolls

#include "Basic.hpp"

#include "F_ItemArray_structs.hpp"


namespace SDK::Params
{

// Function BP_MementoLootManager_Trolls.BP_MementoLootManager_Trolls_C.Spawn Mementos
// 0x00A0 (0x00A0 - 0x0000)
struct BP_MementoLootManager_Trolls_C_Spawn_Mementos final
{
public:
	bool                                          Cheat_in_All;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UClass*>                         Spawned_Mementos;                                  // 0x0008(0x0010)(Parm, OutParm)
	bool                                          Spawn_All;                                         // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UClass*>                         Level_Trolls;                                      // 0x0020(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Variable;                                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                         CallFunc_Set_Up_Commodities_to_Spawn_on_All_Locations_Mementos_Set; // 0x0038(0x0010)(ReferenceParm)
	bool                                          CallFunc_Is_Cheating_Allowed_Result;               // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A[0x2];                                       // 0x004A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_Array_Get_Item;                           // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_AddCommodity_ReturnValue;                 // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62[0x2];                                       // 0x0062(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71[0x3];                                       // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCurrentLevelName_ReturnValue;          // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FF_ItemArray                           CallFunc_Map_Find_Value;                           // 0x0088(0x0010)(HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MementoLootManager_Trolls_C_Spawn_Mementos) == 0x000008, "Wrong alignment on BP_MementoLootManager_Trolls_C_Spawn_Mementos");
static_assert(sizeof(BP_MementoLootManager_Trolls_C_Spawn_Mementos) == 0x0000A0, "Wrong size on BP_MementoLootManager_Trolls_C_Spawn_Mementos");
static_assert(offsetof(BP_MementoLootManager_Trolls_C_Spawn_Mementos, Cheat_in_All) == 0x000000, "Member 'BP_MementoLootManager_Trolls_C_Spawn_Mementos::Cheat_in_All' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Trolls_C_Spawn_Mementos, Spawned_Mementos) == 0x000008, "Member 'BP_MementoLootManager_Trolls_C_Spawn_Mementos::Spawned_Mementos' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Trolls_C_Spawn_Mementos, Spawn_All) == 0x000018, "Member 'BP_MementoLootManager_Trolls_C_Spawn_Mementos::Spawn_All' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Trolls_C_Spawn_Mementos, Level_Trolls) == 0x000020, "Member 'BP_MementoLootManager_Trolls_C_Spawn_Mementos::Level_Trolls' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Trolls_C_Spawn_Mementos, Temp_int_Variable) == 0x000030, "Member 'BP_MementoLootManager_Trolls_C_Spawn_Mementos::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Trolls_C_Spawn_Mementos, CallFunc_Add_IntInt_ReturnValue) == 0x000034, "Member 'BP_MementoLootManager_Trolls_C_Spawn_Mementos::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Trolls_C_Spawn_Mementos, CallFunc_Set_Up_Commodities_to_Spawn_on_All_Locations_Mementos_Set) == 0x000038, "Member 'BP_MementoLootManager_Trolls_C_Spawn_Mementos::CallFunc_Set_Up_Commodities_to_Spawn_on_All_Locations_Mementos_Set' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Trolls_C_Spawn_Mementos, CallFunc_Is_Cheating_Allowed_Result) == 0x000048, "Member 'BP_MementoLootManager_Trolls_C_Spawn_Mementos::CallFunc_Is_Cheating_Allowed_Result' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Trolls_C_Spawn_Mementos, CallFunc_BooleanAND_ReturnValue) == 0x000049, "Member 'BP_MementoLootManager_Trolls_C_Spawn_Mementos::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Trolls_C_Spawn_Mementos, CallFunc_Array_Length_ReturnValue) == 0x00004C, "Member 'BP_MementoLootManager_Trolls_C_Spawn_Mementos::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Trolls_C_Spawn_Mementos, CallFunc_Greater_IntInt_ReturnValue) == 0x000050, "Member 'BP_MementoLootManager_Trolls_C_Spawn_Mementos::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Trolls_C_Spawn_Mementos, CallFunc_Array_Get_Item) == 0x000058, "Member 'BP_MementoLootManager_Trolls_C_Spawn_Mementos::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Trolls_C_Spawn_Mementos, CallFunc_Not_PreBool_ReturnValue) == 0x000060, "Member 'BP_MementoLootManager_Trolls_C_Spawn_Mementos::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Trolls_C_Spawn_Mementos, CallFunc_AddCommodity_ReturnValue) == 0x000061, "Member 'BP_MementoLootManager_Trolls_C_Spawn_Mementos::CallFunc_AddCommodity_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Trolls_C_Spawn_Mementos, CallFunc_Array_Length_ReturnValue_1) == 0x000064, "Member 'BP_MementoLootManager_Trolls_C_Spawn_Mementos::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Trolls_C_Spawn_Mementos, CallFunc_Divide_IntInt_ReturnValue) == 0x000068, "Member 'BP_MementoLootManager_Trolls_C_Spawn_Mementos::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Trolls_C_Spawn_Mementos, CallFunc_Subtract_IntInt_ReturnValue) == 0x00006C, "Member 'BP_MementoLootManager_Trolls_C_Spawn_Mementos::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Trolls_C_Spawn_Mementos, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000070, "Member 'BP_MementoLootManager_Trolls_C_Spawn_Mementos::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Trolls_C_Spawn_Mementos, CallFunc_Array_Add_ReturnValue) == 0x000074, "Member 'BP_MementoLootManager_Trolls_C_Spawn_Mementos::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Trolls_C_Spawn_Mementos, CallFunc_GetCurrentLevelName_ReturnValue) == 0x000078, "Member 'BP_MementoLootManager_Trolls_C_Spawn_Mementos::CallFunc_GetCurrentLevelName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Trolls_C_Spawn_Mementos, CallFunc_Map_Find_Value) == 0x000088, "Member 'BP_MementoLootManager_Trolls_C_Spawn_Mementos::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_MementoLootManager_Trolls_C_Spawn_Mementos, CallFunc_Map_Find_ReturnValue) == 0x000098, "Member 'BP_MementoLootManager_Trolls_C_Spawn_Mementos::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

}

