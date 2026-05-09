// Dumper with DreamyDumper2
// Dump date: 2026-05-09 18:19

#pragma once

namespace dreamydumper_weaponbase {
    // m_flSpread Info
    inline const char* m_flSpread_location = "0x7A1076";
    inline const char* m_flSpread_pattern = "C4 B9 11 0F 4C 8D 8F ?? ?? ?? ?? 48 89";
    inline constexpr int m_flSpread_offset = 1880;
    inline const char* m_flSpread_hex = "0x758";

    // m_nRecoilSeed Info
    inline const char* m_nRecoilSeed_location = "0x7A1541";
    inline const char* m_nRecoilSeed_pattern = "FB B4 11 BC 4C 8D 8F ?? ?? ?? ?? 48 89";
    inline constexpr int m_nRecoilSeed_offset = 2012;
    inline const char* m_nRecoilSeed_hex = "0x7DC";

    // m_nSpreadSeed Info
    inline const char* m_nSpreadSeed_location = "0x7A156F";
    inline const char* m_nSpreadSeed_pattern = "9B A1 31 36 48 89 45 F8 4C 8D 8F ?? ?? ?? ?? C7 45";
    inline constexpr int m_nSpreadSeed_offset = 2016;
    inline const char* m_nSpreadSeed_hex = "0x7E0";

    // m_flRecoilMagnitude Info
    inline const char* m_flRecoilMagnitude_location = "0x7A126B";
    inline const char* m_flRecoilMagnitude_pattern = "A1 67 6A 85 4C 8D 8F ?? ?? ?? ?? 48 89";
    inline constexpr int m_flRecoilMagnitude_offset = 1960;
    inline const char* m_flRecoilMagnitude_hex = "0x7A8";

    // m_flInaccuracyMove Info
    inline const char* m_flInaccuracyMove_location = "0x7A11D1";
    inline const char* m_flInaccuracyMove_pattern = "39 25 C9 17 4C 8D 8F ?? ?? ?? ?? 48 89";
    inline constexpr int m_flInaccuracyMove_offset = 1936;
    inline const char* m_flInaccuracyMove_hex = "0x790";

    // m_pWeaponServices Info
    inline const char* m_pWeaponServices_location = "0x402B16";
    inline const char* m_pWeaponServices_pattern = "48 8D 05 33 8B 56 ?? ?? ?? ?? 48 89 45";
    inline constexpr int m_pWeaponServices_offset = 1;
    inline const char* m_pWeaponServices_hex = "0x1";

    // m_hActiveWeapon Info
    inline const char* m_hActiveWeapon_location = "0x30AA50";
    inline const char* m_hActiveWeapon_pattern = "48 8D 05 89 64 ?? ?? ?? ?? 41 08 C6 01 0D C7 41 10 B0 0F 00 00";
    inline constexpr int m_hActiveWeapon_offset = 100;
    inline const char* m_hActiveWeapon_hex = "0x64";

    // m_hMyWeapons Info
    inline const char* m_hMyWeapons_location = "0x2039EE0";
    inline const char* m_hMyWeapons_pattern = "STATIC_DATA_TABLE";
    inline constexpr int m_hMyWeapons_offset = 72;
    inline const char* m_hMyWeapons_hex = "0x48";

}
