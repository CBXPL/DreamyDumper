// Dumper with DreamyDumper2
// Dump date: 2026-04-21 15:11

#pragma once

namespace dreamydumper_player {
    // m_iHealth Info
    inline const char* m_iHealth_location = "0x400A12";
    inline const char* m_iHealth_pattern = "41 08 C6 01 05 C7 41 10 ?? ?? ?? ?? 66 89 69";
    inline constexpr int m_iHealth_offset = 844;
    inline const char* m_iHealth_hex = "0x34C";

    // m_iTeamNum Info
    inline const char* m_iTeamNum_location = "0x401026";
    inline const char* m_iTeamNum_pattern = "41 08 C6 01 39 C7 41 10 ?? ?? ?? ?? 66 89 69";
    inline constexpr int m_iTeamNum_offset = 1003;
    inline const char* m_iTeamNum_hex = "0x3EB";

    // m_hPawn Info
    inline const char* m_hPawn_location = "0x89A372";
    inline const char* m_hPawn_pattern = "41 08 C6 01 0D C7 41 10 ?? ?? ?? ?? 66 89 69";
    inline constexpr int m_hPawn_offset = 1724;
    inline const char* m_hPawn_hex = "0x6BC";

    // m_hPlayerPawn Info
    inline const char* m_hPlayerPawn_location = "0x7FD137";
    inline const char* m_hPlayerPawn_pattern = "41 08 C6 01 0D C7 41 10 ?? ?? ?? ?? 66 89 69";
    inline constexpr int m_hPlayerPawn_offset = 2308;
    inline const char* m_hPlayerPawn_hex = "0x904";

    // m_lifeState Info
    inline const char* m_lifeState_location = "0x402847";
    inline const char* m_lifeState_pattern = "05 0A 3B 56 01 C7 45 C7 ?? ?? ?? ?? 4C 8D 4D";
    inline constexpr int m_lifeState_offset = 852;
    inline const char* m_lifeState_hex = "0x354";

    // m_vecAbsVelocity Info
    inline const char* m_vecAbsVelocity_location = "0x4012A2";
    inline const char* m_vecAbsVelocity_pattern = "41 08 C6 01 03 C7 41 10 ?? ?? ?? ?? 66 89 69";
    inline constexpr int m_vecAbsVelocity_offset = 1020;
    inline const char* m_vecAbsVelocity_hex = "0x3FC";

    // m_iszPlayerName Info
    inline const char* m_iszPlayerName_location = "0x7FFA28A6CEC0";
    inline const char* m_iszPlayerName_pattern = "STATIC_DATA_TABLE";
    inline constexpr int m_iszPlayerName_offset = 1776;
    inline const char* m_iszPlayerName_hex = "0x6F0";

    // m_MoveType Info
    inline const char* m_MoveType_location = "0x4018D2";
    inline const char* m_MoveType_pattern = "41 08 C6 01 08 C7 41 10 ?? ?? ?? ?? 66 89 69";
    inline constexpr int m_MoveType_offset = 1317;
    inline const char* m_MoveType_hex = "0x525";

    // m_pItemServices Info
    inline const char* m_pItemServices_location = "0x402B7A";
    inline const char* m_pItemServices_pattern = "05 3E B2 E5 01 C7 45 C7 ?? ?? ?? ?? 66 44 89";
    inline constexpr int m_pItemServices_offset = 4584;
    inline const char* m_pItemServices_hex = "0x11E8";

    // m_pGameSceneNode Info
    inline const char* m_pGameSceneNode_location = "0x7FFA28A3AC80";
    inline const char* m_pGameSceneNode_pattern = "STATIC_DATA_TABLE";
    inline constexpr int m_pGameSceneNode_offset = 816;
    inline const char* m_pGameSceneNode_hex = "0x330";

    // m_fFlags Info
    inline const char* m_fFlags_location = "0x401162";
    inline const char* m_fFlags_pattern = "41 08 C6 01 25 C7 41 10 ?? ?? ?? ?? 66 89 69";
    inline constexpr int m_fFlags_offset = 1016;
    inline const char* m_fFlags_hex = "0x3F8";

}
