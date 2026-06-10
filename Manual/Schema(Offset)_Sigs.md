# Manual Schema Signatures (Function to offset pointers)
## How to use:
- Get the signature
- Extract the offset from wildcards (usually 4 wildcards in a row is the offset), Will be placed at the end! for ease of use

**Updated:** 10.06.2026 | **Time:** 17:21

| Name | Pattern | Module |
| :--- | :--- | :--- |
| **HealthFunc (m_iHealth, CBaseEntity)** | `48 8D ? 47 D5 57 01 48 89 41 ? C6 01 05 C7 41 10 ? ? ? ?` | `client.dll` |
| **LifeState (m_lifeState, CBaseEntity)** | `48 8D 05 3A B7 57 ? C7 45 C7 ? ? ? ?` | `client.dll` |
| **SpreadFunc (m_flSpread, CCSWeaponBaseVData)** | `48 8D ? E5 1C 28 01 C7 ? ? ? ? ? ? 4C 8D 8F ? ? ? ?` | `client.dll` |
---
