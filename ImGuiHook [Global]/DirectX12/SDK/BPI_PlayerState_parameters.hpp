#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_PlayerState

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPI_PlayerState.BPI_PlayerState_C.PlayerResult_Analytics_AttachRelevantData
// 0x0010 (0x0010 - 0x0000)
struct BPI_PlayerState_C_PlayerResult_Analytics_AttachRelevantData final
{
public:
	class UJsonObject*                            JsonObject;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJsonObject*                            JsonObjectOut;                                     // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_PlayerState_C_PlayerResult_Analytics_AttachRelevantData) == 0x000008, "Wrong alignment on BPI_PlayerState_C_PlayerResult_Analytics_AttachRelevantData");
static_assert(sizeof(BPI_PlayerState_C_PlayerResult_Analytics_AttachRelevantData) == 0x000010, "Wrong size on BPI_PlayerState_C_PlayerResult_Analytics_AttachRelevantData");
static_assert(offsetof(BPI_PlayerState_C_PlayerResult_Analytics_AttachRelevantData, JsonObject) == 0x000000, "Member 'BPI_PlayerState_C_PlayerResult_Analytics_AttachRelevantData::JsonObject' has a wrong offset!");
static_assert(offsetof(BPI_PlayerState_C_PlayerResult_Analytics_AttachRelevantData, JsonObjectOut) == 0x000008, "Member 'BPI_PlayerState_C_PlayerResult_Analytics_AttachRelevantData::JsonObjectOut' has a wrong offset!");

}

