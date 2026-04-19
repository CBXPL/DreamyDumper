// Dumper with DreamyDumper2
// Dump date: 2026-04-19 20:14

#pragma once

namespace dreamydumper_weaponbase {
    // m_flSpread Info
    inline const char* m_flSpread_location = "0x7A3BB2";
    inline const char* m_flSpread_pattern = "C4 B9 11 0F 4C 8D 8F ?? ?? ?? ?? 48 89";
    inline constexpr int m_flSpread_offset = 1648;
    inline const char* m_flSpread_hex = "0x670";

    // m_nRecoilSeed Info
    inline const char* m_nRecoilSeed_location = "0x7A407D";
    inline const char* m_nRecoilSeed_pattern = "FB B4 11 BC 4C 8D 8F ?? ?? ?? ?? 48 89";
    inline constexpr int m_nRecoilSeed_offset = 1780;
    inline const char* m_nRecoilSeed_hex = "0x6F4";

    // m_nSpreadSeed Info
    inline const char* m_nSpreadSeed_location = "0x7A40AB";
    inline const char* m_nSpreadSeed_pattern = "9B A1 31 36 48 89 45 F8 4C 8D 8F ?? ?? ?? ?? C7 45";
    inline constexpr int m_nSpreadSeed_offset = 1784;
    inline const char* m_nSpreadSeed_hex = "0x6F8";

    // m_flRecoilMagnitude Info
    inline const char* m_flRecoilMagnitude_location = "0x7A3DA7";
    inline const char* m_flRecoilMagnitude_pattern = "A1 67 6A 85 4C 8D 8F ?? ?? ?? ?? 48 89";
    inline constexpr int m_flRecoilMagnitude_offset = 1728;
    inline const char* m_flRecoilMagnitude_hex = "0x6C0";

    // m_flInaccuracyMove Info
    inline const char* m_flInaccuracyMove_location = "0x7A3D0D";
    inline const char* m_flInaccuracyMove_pattern = "39 25 C9 17 4C 8D 8F ?? ?? ?? ?? 48 89";
    inline constexpr int m_flInaccuracyMove_offset = 1704;
    inline const char* m_flInaccuracyMove_hex = "0x6A8";

    // m_pWeaponServices Info
    inline const char* m_pWeaponServices_location = "0x42F4E6";
    inline const char* m_pWeaponServices_pattern = "48 8D 05 D3 55 54 01 48 03 DA 48 89 45 BF 43 8B 04 2E 39 05 8A 0C E4 01 C7 45 C7 ?? ?? ?? ?? 66 44";
    inline constexpr int m_pWeaponServices_offset = 5080;
    inline const char* m_pWeaponServices_hex = "0x13D8";

    // m_hActiveWeapon Info
    inline const char* m_hActiveWeapon_location = "0x9E0156";
    inline const char* m_hActiveWeapon_pattern = "48 8D 05 ? ? ? ? 48 89 41 08 C6 01 0D C7 41 10 ?? ?? ?? ??";
    inline constexpr int m_hActiveWeapon_offset = 96;
    inline const char* m_hActiveWeapon_hex = "0x60";

    // m_hMyWeapons Info
    inline const char* m_hMyWeapons_location = "0x204BCC0";
    inline const char* m_hMyWeapons_pattern = "STATIC_DATA_TABLE";
    inline constexpr int m_hMyWeapons_offset = 72;
    inline const char* m_hMyWeapons_hex = "0x48";

}
