# Manual Signatures

**Updated:** 21.05.2026 | **Time:** 20:25

| Name | Pattern | Module |
| :--- | :--- | :--- |
| **GlobalVars** | `48 89 15 ? ? ? ? 48 89 42` | `client.dll` |
| **FrameStageNotify** | `48 89 5C 24 ? 48 89 6C 24 ? 57 48 83 EC ? 48 8B F9 33 ED` | `client.dll` |
| **GetHitboxSet** | `48 89 5C 24 ? 48 89 74 24 ? 57 48 81 EC ? ? ? ? 8B DA 48 8B F9 E8 ? ? ? ? 48 8B F0` | `client.dll` |
| **TraceShape** | `48 89 5C 24 ? 48 89 4C 24 ? 55 57 41` | `client.dll` |
| **OverrideView** | `40 57 48 83 EC ? 48 8B FA E8 ? ? ? ? BA` | `client.dll` |
| **Draw Team Intro** | `48 83 EC 28 45 0F B6 08 44 38 89 ? ? ? ?` | `client.dll` |
| **SetViewAngles** | `85 D2 75 3D 48 63 81` | `client.dll` |
| **CCsgoInput::CreateMove** | `85 D2 0F 85 85 10 00 00 48 8B C4 44 88 40 18` | `client.dll` |
| **DrawViewModel** | `40 55 53 56 41 56 41 57 48 8B EC 48 83 EC ? 4D 8B F8 4C 8B F2 48 8B` | `client.dll` |
| **LevelInit** | `40 55 56 41 56 48 8D 6C 24 B9 48 81 EC ? ? ? ? 48 8B 0D 30 8B 81 01 4C 8B F2 45 33 C9 48 8D 15 B3 C1 E3 ?` | `client.dll` |
| **Load KeyValues** | `?LoadKV3@@YA_NPEAVKeyValues3@@PEAVCUtlString@@PEAVCUtlBuffer@@AEBUKV3ID_t@@PEBDI@Z` | `tier0.dll` |
| **Skybox::DrawArray** | `45 85 C9 0F 8E ? ? ? ? 4C 8B DC 55 41 56` | `scenesystem.dll` |
| **Particles::GetParticleSystem** | `48 8B 05 49 AF 23 00 C3 ? ? ? ? ? CC CC CC 48 83 EC 28 8B 0D` | `particles.dll` |
| **Particles::DrawArray** | `40 55 53 56 57 48 8D 6C 24 F8 48 81 EC ? ? ? ?` | `particles.dll` |

---
