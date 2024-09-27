#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_IndicatorData

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct S_IndicatorData.S_IndicatorData
// 0x0010 (0x0010 - 0x0000)
struct FS_IndicatorData final
{
public:
	float                                         MinDistance_10_5F08D9284F23255F0B0CFD91502CB40C;   // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxDistance_11_8F8C5F3E47AC91644D8A69A66B6FB96B;   // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MinDistanceScale_14_3DD165A64BAA7D2F3000CEA542983118; // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxDistanceScale_15_0C90384B4AB14FE2F8D5738665F1FD1D; // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FS_IndicatorData) == 0x000004, "Wrong alignment on FS_IndicatorData");
static_assert(sizeof(FS_IndicatorData) == 0x000010, "Wrong size on FS_IndicatorData");
static_assert(offsetof(FS_IndicatorData, MinDistance_10_5F08D9284F23255F0B0CFD91502CB40C) == 0x000000, "Member 'FS_IndicatorData::MinDistance_10_5F08D9284F23255F0B0CFD91502CB40C' has a wrong offset!");
static_assert(offsetof(FS_IndicatorData, MaxDistance_11_8F8C5F3E47AC91644D8A69A66B6FB96B) == 0x000004, "Member 'FS_IndicatorData::MaxDistance_11_8F8C5F3E47AC91644D8A69A66B6FB96B' has a wrong offset!");
static_assert(offsetof(FS_IndicatorData, MinDistanceScale_14_3DD165A64BAA7D2F3000CEA542983118) == 0x000008, "Member 'FS_IndicatorData::MinDistanceScale_14_3DD165A64BAA7D2F3000CEA542983118' has a wrong offset!");
static_assert(offsetof(FS_IndicatorData, MaxDistanceScale_15_0C90384B4AB14FE2F8D5738665F1FD1D) == 0x00000C, "Member 'FS_IndicatorData::MaxDistanceScale_15_0C90384B4AB14FE2F8D5738665F1FD1D' has a wrong offset!");

}

