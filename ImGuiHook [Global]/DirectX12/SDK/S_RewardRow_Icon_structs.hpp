#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_RewardRow_Icon

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct S_RewardRow_Icon.S_RewardRow_Icon
// 0x0038 (0x0038 - 0x0000)
struct FS_RewardRow_Icon final
{
public:
	bool                                          ShowIcon_1_1ED64D2847050A4F925078A03441536A;       // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             StatIcon_8_3254FB864579658E7204CE8330E0C8E3;       // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              IconSize_13_09158039477E963E4C96B882614F833C;      // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              IconOffset_14_38C27C9C434AD8FA60010881897EF88D;    // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              IconDimensions_15_28ACC1BE4C6881D89EB8789BDA5AFD55; // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           HighlightIconColor_17_994FC1E648B4345BD87E71B9185477BC; // 0x0028(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FS_RewardRow_Icon) == 0x000008, "Wrong alignment on FS_RewardRow_Icon");
static_assert(sizeof(FS_RewardRow_Icon) == 0x000038, "Wrong size on FS_RewardRow_Icon");
static_assert(offsetof(FS_RewardRow_Icon, ShowIcon_1_1ED64D2847050A4F925078A03441536A) == 0x000000, "Member 'FS_RewardRow_Icon::ShowIcon_1_1ED64D2847050A4F925078A03441536A' has a wrong offset!");
static_assert(offsetof(FS_RewardRow_Icon, StatIcon_8_3254FB864579658E7204CE8330E0C8E3) == 0x000008, "Member 'FS_RewardRow_Icon::StatIcon_8_3254FB864579658E7204CE8330E0C8E3' has a wrong offset!");
static_assert(offsetof(FS_RewardRow_Icon, IconSize_13_09158039477E963E4C96B882614F833C) == 0x000010, "Member 'FS_RewardRow_Icon::IconSize_13_09158039477E963E4C96B882614F833C' has a wrong offset!");
static_assert(offsetof(FS_RewardRow_Icon, IconOffset_14_38C27C9C434AD8FA60010881897EF88D) == 0x000018, "Member 'FS_RewardRow_Icon::IconOffset_14_38C27C9C434AD8FA60010881897EF88D' has a wrong offset!");
static_assert(offsetof(FS_RewardRow_Icon, IconDimensions_15_28ACC1BE4C6881D89EB8789BDA5AFD55) == 0x000020, "Member 'FS_RewardRow_Icon::IconDimensions_15_28ACC1BE4C6881D89EB8789BDA5AFD55' has a wrong offset!");
static_assert(offsetof(FS_RewardRow_Icon, HighlightIconColor_17_994FC1E648B4345BD87E71B9185477BC) == 0x000028, "Member 'FS_RewardRow_Icon::HighlightIconColor_17_994FC1E648B4345BD87E71B9185477BC' has a wrong offset!");

}

