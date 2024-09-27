#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Struct_ScoreboardRow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FlameUI_structs.hpp"


namespace SDK
{

// UserDefinedStruct Struct_ScoreboardRow.Struct_ScoreboardRow
// 0x0070 (0x0070 - 0x0000)
struct FStruct_ScoreboardRow final
{
public:
	class FString                                 PlayerName_5_C83BBD134EF1B6F8E40B90B1490F183F;     // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	EFlamePlatform                                PlayerPlatform_34_B128A08445A59A064D80E281DE305335; // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Value_8_8BBCC6A54075EB3F5AB52492F491B79A;          // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PlayerID_15_3CAE04844EB32DB4B907F597A4D080A2;      // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FUniqueNetIdRepl                       PlayerNetID_31_F4212D254223A45EDD792290A2946A3F;   // 0x0020(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class UTexture2D*                             CustomImage_21_C0D85B7D4D4246DBED8345BA0FFCCBDA;   // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CustomFontColor_27_30722D9E46FA157103BBAB8A96AEB83E; // 0x0050(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CustomNicknameFontColor_37_2F7E19EE480259060B68098E59E069BF; // 0x0060(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FStruct_ScoreboardRow) == 0x000008, "Wrong alignment on FStruct_ScoreboardRow");
static_assert(sizeof(FStruct_ScoreboardRow) == 0x000070, "Wrong size on FStruct_ScoreboardRow");
static_assert(offsetof(FStruct_ScoreboardRow, PlayerName_5_C83BBD134EF1B6F8E40B90B1490F183F) == 0x000000, "Member 'FStruct_ScoreboardRow::PlayerName_5_C83BBD134EF1B6F8E40B90B1490F183F' has a wrong offset!");
static_assert(offsetof(FStruct_ScoreboardRow, PlayerPlatform_34_B128A08445A59A064D80E281DE305335) == 0x000010, "Member 'FStruct_ScoreboardRow::PlayerPlatform_34_B128A08445A59A064D80E281DE305335' has a wrong offset!");
static_assert(offsetof(FStruct_ScoreboardRow, Value_8_8BBCC6A54075EB3F5AB52492F491B79A) == 0x000014, "Member 'FStruct_ScoreboardRow::Value_8_8BBCC6A54075EB3F5AB52492F491B79A' has a wrong offset!");
static_assert(offsetof(FStruct_ScoreboardRow, PlayerID_15_3CAE04844EB32DB4B907F597A4D080A2) == 0x000018, "Member 'FStruct_ScoreboardRow::PlayerID_15_3CAE04844EB32DB4B907F597A4D080A2' has a wrong offset!");
static_assert(offsetof(FStruct_ScoreboardRow, PlayerNetID_31_F4212D254223A45EDD792290A2946A3F) == 0x000020, "Member 'FStruct_ScoreboardRow::PlayerNetID_31_F4212D254223A45EDD792290A2946A3F' has a wrong offset!");
static_assert(offsetof(FStruct_ScoreboardRow, CustomImage_21_C0D85B7D4D4246DBED8345BA0FFCCBDA) == 0x000048, "Member 'FStruct_ScoreboardRow::CustomImage_21_C0D85B7D4D4246DBED8345BA0FFCCBDA' has a wrong offset!");
static_assert(offsetof(FStruct_ScoreboardRow, CustomFontColor_27_30722D9E46FA157103BBAB8A96AEB83E) == 0x000050, "Member 'FStruct_ScoreboardRow::CustomFontColor_27_30722D9E46FA157103BBAB8A96AEB83E' has a wrong offset!");
static_assert(offsetof(FStruct_ScoreboardRow, CustomNicknameFontColor_37_2F7E19EE480259060B68098E59E069BF) == 0x000060, "Member 'FStruct_ScoreboardRow::CustomNicknameFontColor_37_2F7E19EE480259060B68098E59E069BF' has a wrong offset!");

}

