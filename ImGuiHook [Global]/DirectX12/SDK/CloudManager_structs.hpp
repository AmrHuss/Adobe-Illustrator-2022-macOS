#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CloudManager

#include "Basic.hpp"


namespace SDK
{

// Enum CloudManager.ECloudLogRequestLevel
// NumValues: 0x0005
enum class ECloudLogRequestLevel : uint8
{
	Full                                     = 0,
	Short                                    = 1,
	OnlyErrors                               = 2,
	Disabled                                 = 3,
	ECloudLogRequestLevel_MAX                = 4,
};

// Enum CloudManager.ECloudLogSeverity
// NumValues: 0x0007
enum class ECloudLogSeverity : uint8
{
	Debug                                    = 0,
	Info                                     = 1,
	Warning                                  = 2,
	Error                                    = 3,
	Fatal                                    = 4,
	Disabled                                 = 5,
	ECloudLogSeverity_MAX                    = 6,
};

// ScriptStruct CloudManager.LogRequestData
// 0x0040 (0x0040 - 0x0000)
struct alignas(0x08) FLogRequestData final
{
public:
	uint8                                         Pad_0[0x40];                                       // 0x0000(0x0040)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FLogRequestData) == 0x000008, "Wrong alignment on FLogRequestData");
static_assert(sizeof(FLogRequestData) == 0x000040, "Wrong size on FLogRequestData");

// ScriptStruct CloudManager.LogRequestHeaderDefinition
// 0x0020 (0x0020 - 0x0000)
struct alignas(0x08) FLogRequestHeaderDefinition final
{
public:
	uint8                                         Pad_0[0x20];                                       // 0x0000(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FLogRequestHeaderDefinition) == 0x000008, "Wrong alignment on FLogRequestHeaderDefinition");
static_assert(sizeof(FLogRequestHeaderDefinition) == 0x000020, "Wrong size on FLogRequestHeaderDefinition");

}

