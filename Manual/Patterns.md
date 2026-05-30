# Manual Signatures

**Updated:** 30.05.2026 | **Time:** 14:21

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
| **LevelInit** | `40 55 56 41 56 48 8D 6C 24 B9 48 81 EC ? ? ? ? 48 8B 0D ? ? ? ?` | `client.dll` |
| **EventSystem::GetEventName** | `8B 41 14 0F BA E0 1E 73 05 48 8D 41 18 C3` | `client.dll` |
| **Load KeyValues** | `?LoadKV3@@YA_NPEAVKeyValues3@@PEAVCUtlString@@PEAVCUtlBuffer@@AEBUKV3ID_t@@PEBDI@Z` | `tier0.dll` |
| **Skybox::DrawArray** | `45 85 C9 0F 8E ? ? ? ? 4C 8B DC 55 41 56` | `scenesystem.dll` |
| **Particles::GetParticleSystem** | `48 8B 05 49 AF 23 00 C3 ? ? ? ? ? CC CC CC 48 83 EC 28 8B 0D` | `particles.dll` |
| **Particles::DrawArray** | `40 55 53 56 57 48 8D 6C 24 F8 48 81 EC ? ? ? ?` | `particles.dll` |
| **DrawAggregateSceneObject** | `48 8B C4 48 89 50 ? 48 89 48 ? 55 53 56 57 41 54 41 55 41 56 41 57 48 8D A8 ? ? ? ? 48 81 EC ? ? ? ? 0F 29 70` | `scenesystem.dll` |
| **SteamOverlay::ResizeBuffers** | `40 53 55 56 57 41 54 41 56 51 57 48 83 EC 30 48 8B E2 48 8B E9` | `GameOverlayRenderer64.dll` |
| **SteamOverlay::SwapChain (Creation)** | `40 53 55 56 57 48 83 EC 28 48 8B F9 49 8B F1 48 8D 0D 7A 8C 08 00 49 8B D8 48 8B EA E8 FF ? ? ? 48 8D 0D E8 D6 0C 00 E8 93 99 FD FF 48 8D 0D 2C D7 0C 00 E8 D7 D3 FD FF 48 8D 0D 80 D7 0C 00 E8 0B 80 FE FF 48 8B 05 2C E0 0C ? 4C 8B CE 4C 8B C3 48 8B D5 48 8B CF FF D0 8B D8 85 C0 78 18 48 85 F6 74 13 48 83 3E 00 74 0D 48 8B D5 48 8B CE E8 FA F8 FF FF 8B C3 48 83 C4 28 5F 5E 5D 5B C3` | `GameOverlayRenderer64.dll` |

---
