// Dumper with DreamyDumper2
// Dump date: 2026-03-06 14:35

#pragma once

namespace dreamydumper_player {
    // m_iHealth Info
    inline const char* m_iHealth_location = "0x42D252";
    inline const char* m_iHealth_pattern = "41 08 C6 01 05 C7 41 10 ?? ?? ?? ?? 66 89 69";
    inline constexpr int m_iHealth_offset = 852;
    inline const char* m_iHealth_hex = "0x354";

    // m_iTeamNum Info
    inline const char* m_iTeamNum_location = "0x42D866";
    inline const char* m_iTeamNum_pattern = "41 08 C6 01 39 C7 41 10 ?? ?? ?? ?? 66 89 69";
    inline constexpr int m_iTeamNum_offset = 1011;
    inline const char* m_iTeamNum_hex = "0x3F3";

    // m_hPawn Info
    inline const char* m_hPawn_location = "0x89C562";
    inline const char* m_hPawn_pattern = "41 08 C6 01 0D C7 41 10 ?? ?? ?? ?? 66 89 69";
    inline constexpr int m_hPawn_offset = 1732;
    inline const char* m_hPawn_hex = "0x6C4";

    // m_hPlayerPawn Info
    inline const char* m_hPlayerPawn_location = "0x7FCEB7";
    inline const char* m_hPlayerPawn_pattern = "41 08 C6 01 0D C7 41 10 ?? ?? ?? ?? 66 89 69";
    inline constexpr int m_hPlayerPawn_offset = 2316;
    inline const char* m_hPlayerPawn_hex = "0x90C";

    // m_lifeState Info
    inline const char* m_lifeState_location = "0x42EFC3";
    inline const char* m_lifeState_pattern = "05 16 0F 54 01 C7 45 C7 ?? ?? ?? ?? 4C 8D 4D";
    inline constexpr int m_lifeState_offset = 860;
    inline const char* m_lifeState_hex = "0x35C";

    // m_vecAbsVelocity Info
    inline const char* m_vecAbsVelocity_location = "0x42DAE2";
    inline const char* m_vecAbsVelocity_pattern = "41 08 C6 01 03 C7 41 10 ?? ?? ?? ?? 66 89 69";
    inline constexpr int m_vecAbsVelocity_offset = 1028;
    inline const char* m_vecAbsVelocity_hex = "0x404";

    // m_pGameSceneNode Info
    inline const char* m_pGameSceneNode_location = "0x7FFF91E96500";
    inline const char* m_pGameSceneNode_pattern = "STATIC_DATA_TABLE";
    inline constexpr int m_pGameSceneNode_offset = 824;
    inline const char* m_pGameSceneNode_hex = "0x338";

    // m_fFlags Info
    inline const char* m_fFlags_location = "0x42D9A2";
    inline const char* m_fFlags_pattern = "41 08 C6 01 25 C7 41 10 ?? ?? ?? ?? 66 89 69";
    inline constexpr int m_fFlags_offset = 1024;
    inline const char* m_fFlags_hex = "0x400";

}
