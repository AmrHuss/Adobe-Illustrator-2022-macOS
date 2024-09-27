#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_AchievementsTableRow

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct S_AchievementsTableRow.S_AchievementsTableRow
// 0x0078 (0x0078 - 0x0000)
struct FS_AchievementsTableRow final
{
public:
	class FText                                   Title_5_1F8C28614844F5140696898863648B10;          // 0x0000(0x0018)(Edit, BlueprintVisible)
	class FText                                   LockedDescription_7_B2D40E154745A570E08AF9AFE6879422; // 0x0018(0x0018)(Edit, BlueprintVisible)
	class FText                                   UnlockedDescription_9_9235A27748B41C508C0CAFB41BA1CB3C; // 0x0030(0x0018)(Edit, BlueprintVisible)
	TSoftObjectPtr<class UTexture2D>              Image_12_E2FBEA674AC4477B474F62B072D5A666;         // 0x0048(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                         Rarity_15_6A42E46242991D830A28B4A895ED4EE1;        // 0x0070(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PSNTrophy_17_A652AE91406EEDA9ABAF67BF8B8DB572;     // 0x0074(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FS_AchievementsTableRow) == 0x000008, "Wrong alignment on FS_AchievementsTableRow");
static_assert(sizeof(FS_AchievementsTableRow) == 0x000078, "Wrong size on FS_AchievementsTableRow");
static_assert(offsetof(FS_AchievementsTableRow, Title_5_1F8C28614844F5140696898863648B10) == 0x000000, "Member 'FS_AchievementsTableRow::Title_5_1F8C28614844F5140696898863648B10' has a wrong offset!");
static_assert(offsetof(FS_AchievementsTableRow, LockedDescription_7_B2D40E154745A570E08AF9AFE6879422) == 0x000018, "Member 'FS_AchievementsTableRow::LockedDescription_7_B2D40E154745A570E08AF9AFE6879422' has a wrong offset!");
static_assert(offsetof(FS_AchievementsTableRow, UnlockedDescription_9_9235A27748B41C508C0CAFB41BA1CB3C) == 0x000030, "Member 'FS_AchievementsTableRow::UnlockedDescription_9_9235A27748B41C508C0CAFB41BA1CB3C' has a wrong offset!");
static_assert(offsetof(FS_AchievementsTableRow, Image_12_E2FBEA674AC4477B474F62B072D5A666) == 0x000048, "Member 'FS_AchievementsTableRow::Image_12_E2FBEA674AC4477B474F62B072D5A666' has a wrong offset!");
static_assert(offsetof(FS_AchievementsTableRow, Rarity_15_6A42E46242991D830A28B4A895ED4EE1) == 0x000070, "Member 'FS_AchievementsTableRow::Rarity_15_6A42E46242991D830A28B4A895ED4EE1' has a wrong offset!");
static_assert(offsetof(FS_AchievementsTableRow, PSNTrophy_17_A652AE91406EEDA9ABAF67BF8B8DB572) == 0x000074, "Member 'FS_AchievementsTableRow::PSNTrophy_17_A652AE91406EEDA9ABAF67BF8B8DB572' has a wrong offset!");

}

