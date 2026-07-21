// Dumped using DreamyDumper 1.5
// Dumped at: 2026-07-21

#pragma once

#include <cstddef>
#include <cstdint>

namespace dreamydumper {
    namespace schemas {
        namespace engine2_dll {
            enum class EntityDormancyType_t : uint32_t {
                ENTITY_NOT_DORMANT = 0x0,
                ENTITY_DORMANT = 0x1,
                ENTITY_SUSPENDED = 0x2
            };
            enum class EntityIOTargetType_t : uint32_t {
                ENTITY_IO_TARGET_INVALID = 0xFFFFFFFF,
                ENTITY_IO_TARGET_ENTITYNAME = 0x2,
                ENTITY_IO_TARGET_EHANDLE = 0x6,
                ENTITY_IO_TARGET_ENTITYNAME_OR_CLASSNAME = 0x7
            };
            namespace CEntityInstance {
                constexpr std::ptrdiff_t m_iszPrivateVScripts = 0x8; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_pEntity = 0x10; // CEntityIdentity*
                constexpr std::ptrdiff_t m_CScriptComponent = 0x28; // CScriptComponent*
            }
            namespace CEntityComponent {
            }
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CScriptComponent {
                constexpr std::ptrdiff_t m_scriptClassName = 0x30; // CUtlSymbolLarge
            }
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CEntityIdentity {
                constexpr std::ptrdiff_t m_nameStringTableIndex = 0x14; // int32
                constexpr std::ptrdiff_t m_name = 0x18; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_designerName = 0x20; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_flags = 0x30; // uint32
                constexpr std::ptrdiff_t m_worldGroupId = 0x38; // WorldGroupId_t
                constexpr std::ptrdiff_t m_fDataObjectTypes = 0x3C; // uint32
                constexpr std::ptrdiff_t m_PathIndex = 0x40; // ChangeAccessorFieldPathIndex_t
                constexpr std::ptrdiff_t m_pAttributes = 0x48; // CEntityAttributeTable*
                constexpr std::ptrdiff_t m_pPrev = 0x50; // CEntityIdentity*
                constexpr std::ptrdiff_t m_pNext = 0x58; // CEntityIdentity*
                constexpr std::ptrdiff_t m_pPrevByClass = 0x60; // CEntityIdentity*
                constexpr std::ptrdiff_t m_pNextByClass = 0x68; // CEntityIdentity*
            }
            namespace EventClientPostSimulate_t {
            }
            namespace EventSimpleLoopFrameUpdate_t {
                constexpr std::ptrdiff_t m_LoopState = 0x0; // EngineLoopState_t
                constexpr std::ptrdiff_t m_flRealTime = 0x28; // float32
                constexpr std::ptrdiff_t m_flFrameTime = 0x2C; // float32
            }
            namespace EventPostAdvanceTick_t {
                constexpr std::ptrdiff_t m_nCurrentTick = 0x30; // int32
                constexpr std::ptrdiff_t m_nCurrentTickThisFrame = 0x34; // int32
                constexpr std::ptrdiff_t m_nTotalTicksThisFrame = 0x38; // int32
                constexpr std::ptrdiff_t m_nTotalTicks = 0x3C; // int32
            }
            namespace CEntityIOOutput {
            }
            namespace EventClientSceneSystemThreadStateChange_t {
                constexpr std::ptrdiff_t m_bThreadsActive = 0x0; // bool
            }
            namespace EventClientOutput_t {
                constexpr std::ptrdiff_t m_LoopState = 0x0; // EngineLoopState_t
                constexpr std::ptrdiff_t m_flRenderTime = 0x28; // float32
                constexpr std::ptrdiff_t m_flRealTime = 0x2C; // float32
                constexpr std::ptrdiff_t m_flRenderFrameTimeUnbounded = 0x30; // float32
                constexpr std::ptrdiff_t m_bRenderOnly = 0x34; // bool
            }
            namespace EventServerPostSimulate_t {
                constexpr std::ptrdiff_t m_bLastTickBeforeClientUpdate = 0x30; // bool
            }
            namespace CEntityComponentHelper {
                constexpr std::ptrdiff_t m_flags = 0x8; // uint32
                constexpr std::ptrdiff_t m_pInfo = 0x10; // EntComponentInfo_t*
                constexpr std::ptrdiff_t m_nPriority = 0x18; // int32
                constexpr std::ptrdiff_t m_pNext = 0x20; // CEntityComponentHelper*
            }
            namespace GameTime_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // float32
            }
            namespace EventServerBeginSimulate_t {
            }
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace EntityIOQueuePrioritizedEvent_t {
                constexpr std::ptrdiff_t m_flFireTime = 0x4; // GameTime_t
                constexpr std::ptrdiff_t m_targetType = 0x8; // EntityIOTargetType_t
                constexpr std::ptrdiff_t m_pTarget = 0x10; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_pTargetInput = 0x18; // CUtlSymbolLarge
                constexpr std::ptrdiff_t m_hActivator = 0x20; // CEntityHandle
                constexpr std::ptrdiff_t m_hCaller = 0x24; // CEntityHandle
                constexpr std::ptrdiff_t m_hEntTarget = 0x28; // CEntityHandle
                constexpr std::ptrdiff_t m_variantValue = 0x30; // CVariantBase<CVariantDefaultAllocator>
            }
            namespace EventServerEndAsyncPostTickWork_t {
            }
            namespace EventClientAdvanceTick_t {
            }
            namespace EntInput_t {
            }
            namespace CNetworkVarChainer {
                constexpr std::ptrdiff_t m_PathIndex = 0x20; // ChangeAccessorFieldPathIndex_t
            }
            namespace EventClientSimulate_t {
            }
            namespace EventClientPostOutput_t {
                constexpr std::ptrdiff_t m_LoopState = 0x0; // EngineLoopState_t
                constexpr std::ptrdiff_t m_flRenderTime = 0x28; // float64
                constexpr std::ptrdiff_t m_flRenderFrameTime = 0x30; // float32
                constexpr std::ptrdiff_t m_flRenderFrameTimeUnbounded = 0x34; // float32
                constexpr std::ptrdiff_t m_bRenderOnly = 0x38; // bool
            }
            namespace GameTick_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // int32
            }
            namespace EventClientPollInput_t {
                constexpr std::ptrdiff_t m_LoopState = 0x0; // EngineLoopState_t
                constexpr std::ptrdiff_t m_flRealTime = 0x28; // float32
            }
            namespace EventPreDataUpdate_t {
                constexpr std::ptrdiff_t m_nCount = 0x0; // int32
            }
            namespace EventClientProcessGameInput_t {
                constexpr std::ptrdiff_t m_LoopState = 0x0; // EngineLoopState_t
                constexpr std::ptrdiff_t m_flRealTime = 0x28; // float32
                constexpr std::ptrdiff_t m_flFrameTime = 0x2C; // float32
            }
            namespace EventFrameBoundary_t {
                constexpr std::ptrdiff_t m_flFrameTime = 0x0; // float32
            }
            namespace EventAppShutdown_t {
                constexpr std::ptrdiff_t m_nDummy0 = 0x0; // int32
            }
            namespace EventServerPostAdvanceTick_t {
                constexpr std::ptrdiff_t m_bLastTickBeforeClientUpdate = 0x40; // bool
            }
            namespace EventProfileStorageAvailable_t {
                constexpr std::ptrdiff_t m_nSplitScreenSlot = 0x0; // CSplitScreenSlot
            }
            namespace EventPostDataUpdate_t {
                constexpr std::ptrdiff_t m_nCount = 0x0; // int32
            }
            namespace EventClientPreSimulate_t {
            }
            namespace EventClientPauseSimulate_t {
            }
            namespace EventClientProcessNetworking_t {
                constexpr std::ptrdiff_t m_nTickCount = 0x0; // int32
            }
            namespace CEntityAttributeTable {
                constexpr std::ptrdiff_t m_Attributes = 0x0; // CUtlOrderedMap<CUtlStringTokenNoRegistration,Attribute_t>
                constexpr std::ptrdiff_t m_Names = 0x28; // CUtlOrderedMap<CUtlStringTokenNoRegistration,CUtlString>
            }
            namespace EventClientPreOutputParallelWithServer_t {
            }
            namespace EventAdvanceTick_t {
                constexpr std::ptrdiff_t m_nCurrentTick = 0x30; // int32
                constexpr std::ptrdiff_t m_nCurrentTickThisFrame = 0x34; // int32
                constexpr std::ptrdiff_t m_nTotalTicksThisFrame = 0x38; // int32
                constexpr std::ptrdiff_t m_nTotalTicks = 0x3C; // int32
            }
            namespace EventSplitScreenStateChanged_t {
            }
            namespace EventClientPostAdvanceTick_t {
            }
            namespace EventBugBug_t {
            }
            namespace CVariantDefaultAllocator {
            }
            namespace EventBugBugComplete_t {
                constexpr std::ptrdiff_t m_pPayload = 0x0; // EventBugBug_t*
            }
            namespace EventModInitialized_t {
            }
            namespace EventClientPreOutput_t {
                constexpr std::ptrdiff_t m_LoopState = 0x0; // EngineLoopState_t
                constexpr std::ptrdiff_t m_flRenderTime = 0x28; // float64
                constexpr std::ptrdiff_t m_flRenderFrameTime = 0x30; // float64
                constexpr std::ptrdiff_t m_flRenderFrameTimeUnbounded = 0x38; // float64
                constexpr std::ptrdiff_t m_flRealTime = 0x40; // float32
                constexpr std::ptrdiff_t m_bRenderOnly = 0x44; // bool
            }
            namespace EventClientFrameSimulate_t {
                constexpr std::ptrdiff_t m_LoopState = 0x0; // EngineLoopState_t
                constexpr std::ptrdiff_t m_flRealTime = 0x28; // float32
                constexpr std::ptrdiff_t m_flFrameTime = 0x2C; // float32
                constexpr std::ptrdiff_t m_bScheduleSendTickPacket = 0x30; // bool
            }
            namespace EventServerAdvanceTick_t {
            }
            namespace EventSetTime_t {
                constexpr std::ptrdiff_t m_LoopState = 0x0; // EngineLoopState_t
                constexpr std::ptrdiff_t m_nClientOutputFrames = 0x28; // int32
                constexpr std::ptrdiff_t m_flRealTime = 0x30; // float64
                constexpr std::ptrdiff_t m_flRenderTime = 0x38; // float64
                constexpr std::ptrdiff_t m_flRenderFrameTime = 0x40; // float64
                constexpr std::ptrdiff_t m_flRenderFrameTimeUnbounded = 0x48; // float64
                constexpr std::ptrdiff_t m_flRenderFrameTimeUnscaled = 0x50; // float64
                constexpr std::ptrdiff_t m_flTickRemainder = 0x58; // float64
            }
            namespace EventSimulate_t {
                constexpr std::ptrdiff_t m_LoopState = 0x0; // EngineLoopState_t
                constexpr std::ptrdiff_t m_bFirstTick = 0x28; // bool
                constexpr std::ptrdiff_t m_bLastTick = 0x29; // bool
            }
            namespace CEntityKeyValues {
            }
            namespace EventClientAdvanceNonRenderedFrame_t {
            }
            namespace EventServerProcessNetworking_t {
            }
            namespace CEmptyEntityInstance {
            }
            namespace EntComponentInfo_t {
                constexpr std::ptrdiff_t m_pName = 0x0; // char*
                constexpr std::ptrdiff_t m_pCPPClassname = 0x8; // char*
                constexpr std::ptrdiff_t m_pNetworkDataReferencedDescription = 0x10; // char*
                constexpr std::ptrdiff_t m_pNetworkDataReferencedPtrPropDescription = 0x18; // char*
                constexpr std::ptrdiff_t m_nRuntimeIndex = 0x20; // int32
                constexpr std::ptrdiff_t m_nFlags = 0x24; // uint32
                constexpr std::ptrdiff_t m_pBaseClassComponentHelper = 0x60; // CEntityComponentHelper*
            }
            namespace EngineLoopState_t {
                constexpr std::ptrdiff_t m_nPlatWindowWidth = 0x18; // int32
                constexpr std::ptrdiff_t m_nPlatWindowHeight = 0x1C; // int32
                constexpr std::ptrdiff_t m_nRenderWidth = 0x20; // int32
                constexpr std::ptrdiff_t m_nRenderHeight = 0x24; // int32
            }
            namespace EventClientPollNetworking_t {
                constexpr std::ptrdiff_t m_nTickCount = 0x0; // int32
            }
            namespace EventServerBeginAsyncPostTickWork_t {
                constexpr std::ptrdiff_t m_bIsOncePerFrameAsyncWorkPhase = 0x0; // bool
            }
            namespace EventClientProcessInput_t {
                constexpr std::ptrdiff_t m_LoopState = 0x0; // EngineLoopState_t
                constexpr std::ptrdiff_t m_flRealTime = 0x28; // float32
                constexpr std::ptrdiff_t m_flTickInterval = 0x2C; // float32
                constexpr std::ptrdiff_t m_flTickStartTime = 0x30; // float64
            }
            namespace EventServerEndSimulate_t {
                constexpr std::ptrdiff_t m_bLastTick = 0x0; // bool
            }
            namespace EventServerPollNetworking_t {
            }
        }
    }
}
