#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LoadingScreen

#include "Basic.hpp"

#include "LoadingScreen_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "DeveloperSettings_classes.hpp"


namespace SDK
{

// Class LoadingScreen.LoadingScreenSettings
// 0x0568 (0x05A0 - 0x0038)
class ULoadingScreenSettings final : public UDeveloperSettings
{
public:
	struct FLoadingScreenProperties               LoadingScreenProperties;                           // 0x0038(0x0318)(Edit, Config, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                         LevelNameFont;                                     // 0x0350(0x0058)(Edit, BlueprintVisible, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              LevelNamePosition;                                 // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                         GameModeNameFont;                                  // 0x03B0(0x0058)(Edit, BlueprintVisible, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              GameModeNamePosition;                              // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                         GameModeRulesFont;                                 // 0x0410(0x0058)(Edit, BlueprintVisible, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              GameModeRulesPosition;                             // 0x0468(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                                GameModeRulePadding;                               // 0x0470(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                         GameModeRuleWrapAt;                                // 0x0480(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TipDuration;                                       // 0x0484(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                         TipFont;                                           // 0x0488(0x0058)(Edit, BlueprintVisible, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TipWrapAt;                                         // 0x04E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4E4[0x4];                                      // 0x04E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            TipBackgroundImage;                                // 0x04E8(0x0088)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                        TipsTable;                                         // 0x0570(0x0018)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                        IconTable;                                         // 0x0588(0x0018)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LoadingScreenSettings">();
	}
	static class ULoadingScreenSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULoadingScreenSettings>();
	}
};
static_assert(alignof(ULoadingScreenSettings) == 0x000008, "Wrong alignment on ULoadingScreenSettings");
static_assert(sizeof(ULoadingScreenSettings) == 0x0005A0, "Wrong size on ULoadingScreenSettings");
static_assert(offsetof(ULoadingScreenSettings, LoadingScreenProperties) == 0x000038, "Member 'ULoadingScreenSettings::LoadingScreenProperties' has a wrong offset!");
static_assert(offsetof(ULoadingScreenSettings, LevelNameFont) == 0x000350, "Member 'ULoadingScreenSettings::LevelNameFont' has a wrong offset!");
static_assert(offsetof(ULoadingScreenSettings, LevelNamePosition) == 0x0003A8, "Member 'ULoadingScreenSettings::LevelNamePosition' has a wrong offset!");
static_assert(offsetof(ULoadingScreenSettings, GameModeNameFont) == 0x0003B0, "Member 'ULoadingScreenSettings::GameModeNameFont' has a wrong offset!");
static_assert(offsetof(ULoadingScreenSettings, GameModeNamePosition) == 0x000408, "Member 'ULoadingScreenSettings::GameModeNamePosition' has a wrong offset!");
static_assert(offsetof(ULoadingScreenSettings, GameModeRulesFont) == 0x000410, "Member 'ULoadingScreenSettings::GameModeRulesFont' has a wrong offset!");
static_assert(offsetof(ULoadingScreenSettings, GameModeRulesPosition) == 0x000468, "Member 'ULoadingScreenSettings::GameModeRulesPosition' has a wrong offset!");
static_assert(offsetof(ULoadingScreenSettings, GameModeRulePadding) == 0x000470, "Member 'ULoadingScreenSettings::GameModeRulePadding' has a wrong offset!");
static_assert(offsetof(ULoadingScreenSettings, GameModeRuleWrapAt) == 0x000480, "Member 'ULoadingScreenSettings::GameModeRuleWrapAt' has a wrong offset!");
static_assert(offsetof(ULoadingScreenSettings, TipDuration) == 0x000484, "Member 'ULoadingScreenSettings::TipDuration' has a wrong offset!");
static_assert(offsetof(ULoadingScreenSettings, TipFont) == 0x000488, "Member 'ULoadingScreenSettings::TipFont' has a wrong offset!");
static_assert(offsetof(ULoadingScreenSettings, TipWrapAt) == 0x0004E0, "Member 'ULoadingScreenSettings::TipWrapAt' has a wrong offset!");
static_assert(offsetof(ULoadingScreenSettings, TipBackgroundImage) == 0x0004E8, "Member 'ULoadingScreenSettings::TipBackgroundImage' has a wrong offset!");
static_assert(offsetof(ULoadingScreenSettings, TipsTable) == 0x000570, "Member 'ULoadingScreenSettings::TipsTable' has a wrong offset!");
static_assert(offsetof(ULoadingScreenSettings, IconTable) == 0x000588, "Member 'ULoadingScreenSettings::IconTable' has a wrong offset!");

}

