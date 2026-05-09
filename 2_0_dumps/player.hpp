// Dumper with DreamyDumper2
// Dump date: 2026-05-09 18:19

#pragma once

namespace dreamydumper_player {
    // m_iHealth Info
    inline const char* m_iHealth_location = "0x400B32";
    inline const char* m_iHealth_pattern = "41 08 C6 01 05 C7 41 10 ?? ?? ?? ?? 66 89 69";
    inline constexpr int m_iHealth_offset = 844;
    inline const char* m_iHealth_hex = "0x34C";

    // m_iTeamNum Info
    inline const char* m_iTeamNum_location = "0x401146";
    inline const char* m_iTeamNum_pattern = "41 08 C6 01 39 C7 41 10 ?? ?? ?? ?? 66 89 69";
    inline constexpr int m_iTeamNum_offset = 1003;
    inline const char* m_iTeamNum_hex = "0x3EB";

    // m_hPawn Info
    inline const char* m_hPawn_location = "0x89FD32";
    inline const char* m_hPawn_pattern = "41 08 C6 01 0D C7 41 10 ?? ?? ?? ?? 66 89 69";
    inline constexpr int m_hPawn_offset = 1724;
    inline const char* m_hPawn_hex = "0x6BC";

    // m_hPlayerPawn Info
    inline const char* m_hPlayerPawn_location = "0x8000F7";
    inline const char* m_hPlayerPawn_pattern = "41 08 C6 01 0D C7 41 10 ?? ?? ?? ?? 66 89 69";
    inline constexpr int m_hPlayerPawn_offset = 2316;
    inline const char* m_hPlayerPawn_hex = "0x90C";

    // m_lifeState Info
    inline const char* m_lifeState_location = "0x402967";
    inline const char* m_lifeState_pattern = "05 1A AA 56 01 C7 45 C7 ?? ?? ?? ?? 4C 8D 4D";
    inline constexpr int m_lifeState_offset = 852;
    inline const char* m_lifeState_hex = "0x354";

    // m_vecAbsVelocity Info
    inline const char* m_vecAbsVelocity_location = "0x4013C2";
    inline const char* m_vecAbsVelocity_pattern = "41 08 C6 01 03 C7 41 10 ?? ?? ?? ?? 66 89 69";
    inline constexpr int m_vecAbsVelocity_offset = 1020;
    inline const char* m_vecAbsVelocity_hex = "0x3FC";

    // m_iszPlayerName Info
    inline const char* m_iszPlayerName_location = "0x7FF8C8B83F40";
    inline const char* m_iszPlayerName_pattern = "STATIC_DATA_TABLE";
    inline constexpr int m_iszPlayerName_offset = 1780;
    inline const char* m_iszPlayerName_hex = "0x6F4";

    // m_MoveType Info
    inline const char* m_MoveType_location = "0x4019F2";
    inline const char* m_MoveType_pattern = "41 08 C6 01 08 C7 41 10 ?? ?? ?? ?? 66 89 69";
    inline constexpr int m_MoveType_offset = 1317;
    inline const char* m_MoveType_hex = "0x525";

    // m_pItemServices Info
    inline const char* m_pItemServices_location = "0x402C9A";
    inline const char* m_pItemServices_pattern = "05 8E 24 E6 01 C7 45 C7 ?? ?? ?? ?? 66 44 89";
    inline constexpr int m_pItemServices_offset = 4584;
    inline const char* m_pItemServices_hex = "0x11E8";

    // m_pGameSceneNode Info
    inline const char* m_pGameSceneNode_location = "0x7FF8C8B51F50";
    inline const char* m_pGameSceneNode_pattern = "STATIC_DATA_TABLE";
    inline constexpr int m_pGameSceneNode_offset = 816;
    inline const char* m_pGameSceneNode_hex = "0x330";

    // m_fFlags Info
    inline const char* m_fFlags_location = "0x401282";
    inline const char* m_fFlags_pattern = "41 08 C6 01 25 C7 41 10 ?? ?? ?? ?? 66 89 69";
    inline constexpr int m_fFlags_offset = 1016;
    inline const char* m_fFlags_hex = "0x3F8";

}
