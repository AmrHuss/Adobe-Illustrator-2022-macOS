#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: I_Lobby09_Interface

#include "Basic.hpp"


namespace SDK::Params
{

// Function I_Lobby09_Interface.I_Lobby09_Interface_C.GetPlayerStates
// 0x0010 (0x0010 - 0x0000)
struct I_Lobby09_Interface_C_GetPlayerStates final
{
public:
	TArray<class ABP_PlayerState_C*>              PlayerStates;                                      // 0x0000(0x0010)(Parm, OutParm)
};
static_assert(alignof(I_Lobby09_Interface_C_GetPlayerStates) == 0x000008, "Wrong alignment on I_Lobby09_Interface_C_GetPlayerStates");
static_assert(sizeof(I_Lobby09_Interface_C_GetPlayerStates) == 0x000010, "Wrong size on I_Lobby09_Interface_C_GetPlayerStates");
static_assert(offsetof(I_Lobby09_Interface_C_GetPlayerStates, PlayerStates) == 0x000000, "Member 'I_Lobby09_Interface_C_GetPlayerStates::PlayerStates' has a wrong offset!");

// Function I_Lobby09_Interface.I_Lobby09_Interface_C.GetPlayerWidgets
// 0x0010 (0x0010 - 0x0000)
struct I_Lobby09_Interface_C_GetPlayerWidgets final
{
public:
	TArray<class UUI_LobbyPlayerWidget_C*>        PlayerWidgets;                                     // 0x0000(0x0010)(Parm, OutParm, ContainsInstancedReference)
};
static_assert(alignof(I_Lobby09_Interface_C_GetPlayerWidgets) == 0x000008, "Wrong alignment on I_Lobby09_Interface_C_GetPlayerWidgets");
static_assert(sizeof(I_Lobby09_Interface_C_GetPlayerWidgets) == 0x000010, "Wrong size on I_Lobby09_Interface_C_GetPlayerWidgets");
static_assert(offsetof(I_Lobby09_Interface_C_GetPlayerWidgets, PlayerWidgets) == 0x000000, "Member 'I_Lobby09_Interface_C_GetPlayerWidgets::PlayerWidgets' has a wrong offset!");

}

