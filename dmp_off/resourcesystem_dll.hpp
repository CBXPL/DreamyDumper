// Dumped using DreamyDumper 1.5
// Dumped at: 2026-09-23

#pragma once

#include <cstddef>
#include <cstdint>

namespace dreamydumper {
    namespace schemas {
        namespace resourcesystem_dll {
            enum class NoiseStreamModifier_t : uint32_t {
                NOISE_STREAM_MODIFIER_NONE = 0x0,
                NOISE_STREAM_MODIFIER_LINES = 0x1,
                NOISE_STREAM_MODIFIER_CLUMPS = 0x2,
                NOISE_STREAM_MODIFIER_RINGS = 0x3
            };
            enum class NoiseStreamTurbulence_t : uint32_t {
                NOISE_STREAM_TURB_NONE = 0x0,
                NOISE_STREAM_TURB_HIGHLIGHT = 0x1,
                NOISE_STREAM_TURB_FEEDBACK = 0x2,
                NOISE_STREAM_TURB_LOOPY = 0x3,
                NOISE_STREAM_TURB_CONTRAST = 0x4,
                NOISE_STREAM_TURB_ALTERNATE = 0x5
            };
            enum class NoiseStreamType_t : uint32_t {
                NOISE_STREAM_TYPE_PERLIN = 0x0,
                NOISE_STREAM_TYPE_SIMPLEX = 0x1,
                NOISE_STREAM_TYPE_WORLEY = 0x2,
                NOISE_STREAM_TYPE_CURL = 0x3,
                NOISE_STREAM_TYPE_NONE = 0x4
            };
            enum class FuseVariableType_t : uint8_t {
                INVALID = 0x0,
                BOOL = 0x1,
                INT8 = 0x2,
                INT16 = 0x3,
                INT32 = 0x4,
                UINT8 = 0x5,
                UINT16 = 0x6,
                UINT32 = 0x7,
                FLOAT32 = 0x8
            };
            enum class FuseVariableAccess_t : uint8_t {
                WRITABLE = 0x0,
                READ_ONLY = 0x1
            };
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCResponseRulesList {
            }
            namespace AABBWS_t {
                constexpr std::ptrdiff_t m_vMinBounds = 0x0; // VectorWS
                constexpr std::ptrdiff_t m_vMaxBounds = 0xC; // VectorWS
            }
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCDotaItemDefinitionResource {
            }
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCMorphSetData {
            }
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCVSoundStackScriptList {
            }
            namespace PackedAABB_t {
                constexpr std::ptrdiff_t m_nPackedMin = 0x0; // uint32
                constexpr std::ptrdiff_t m_nPackedMax = 0x4; // uint32
            }
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCVPhysXSurfacePropertiesList {
            }
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeManifestTestResource_t {
            }
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ConstantInfo_t {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_nameToken = 0x8; // CUtlStringToken
                constexpr std::ptrdiff_t m_flValue = 0xC; // float32
            }
            namespace FuseFunctionIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // uint16
            }
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCGcExportableExternalData {
            }
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeIAnimGraphModelBinding {
            }
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCJavaScriptResource {
            }
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFuseSymbolTable {
                constexpr std::ptrdiff_t m_constants = 0x0; // CUtlVector<ConstantInfo_t>
                constexpr std::ptrdiff_t m_variables = 0x18; // CUtlVector<VariableInfo_t>
                constexpr std::ptrdiff_t m_functions = 0x30; // CUtlVector<FunctionInfo_t>
                constexpr std::ptrdiff_t m_constantMap = 0x48; // CUtlHashtable<CUtlStringToken,int32>
                constexpr std::ptrdiff_t m_variableMap = 0x68; // CUtlHashtable<CUtlStringToken,int32>
                constexpr std::ptrdiff_t m_functionMap = 0x88; // CUtlHashtable<CUtlStringToken,int32>
            }
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCRenderMesh {
            }
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCVoxelVisibility {
            }
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeISmartProp {
            }
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCPhysAggregateData {
            }
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCNmClip {
            }
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeWorld_t {
            }
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeProceduralTestResource_t {
            }
            namespace AABB_t {
                constexpr std::ptrdiff_t m_vMinBounds = 0x0; // Vector
                constexpr std::ptrdiff_t m_vMaxBounds = 0xC; // Vector
            }
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCPostProcessingResource {
            }
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace VariableInfo_t {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_nameToken = 0x8; // CUtlStringToken
                constexpr std::ptrdiff_t m_nIndex = 0xC; // FuseVariableIndex_t
                constexpr std::ptrdiff_t m_nNumComponents = 0xE; // uint8
                constexpr std::ptrdiff_t m_eVarType = 0xF; // FuseVariableType_t
                constexpr std::ptrdiff_t m_eAccess = 0x10; // FuseVariableAccess_t
            }
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeIParticleSnapshot {
            }
            namespace FourQuaternions {
                constexpr std::ptrdiff_t x = 0x0; // fltx4
                constexpr std::ptrdiff_t y = 0x10; // fltx4
                constexpr std::ptrdiff_t z = 0x20; // fltx4
                constexpr std::ptrdiff_t w = 0x30; // fltx4
            }
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCPanoramaLayout {
            }
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCTypeScriptResource {
            }
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCChoreoSceneResource {
            }
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCNmSkeleton {
            }
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCTestResourceData {
            }
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCAnimationGroup {
            }
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCVSoundEventScriptList {
            }
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCVoiceContainerBase {
            }
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCPanoramaStyle {
            }
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCWorldNode {
            }
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCSurfaceGraph {
            }
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCCSGOEconItem {
            }
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCNmGraphDefinition {
            }
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CFuseProgram {
                constexpr std::ptrdiff_t m_programBuffer = 0x0; // CUtlVector<uint8>
                constexpr std::ptrdiff_t m_variablesRead = 0x18; // CUtlVector<FuseVariableIndex_t>
                constexpr std::ptrdiff_t m_variablesWritten = 0x30; // CUtlVector<FuseVariableIndex_t>
                constexpr std::ptrdiff_t m_nMaxTempVarsUsed = 0x48; // int32
            }
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCCompositeMaterialKit {
            }
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCVMixListResource {
            }
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCAnimData {
            }
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeIMaterial2 {
            }
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCVDSPResource {
            }
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeIVectorGraphic {
            }
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCPanoramaDynamicImages {
            }
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeIPulseGraphDef {
            }
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCVDataItemDefs {
            }
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace FunctionInfo_t {
                constexpr std::ptrdiff_t m_name = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_nameToken = 0x10; // CUtlStringToken
                constexpr std::ptrdiff_t m_nParamCount = 0x14; // int32
                constexpr std::ptrdiff_t m_nIndex = 0x18; // FuseFunctionIndex_t
                constexpr std::ptrdiff_t m_bIsPure = 0x1A; // bool
            }
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCVDataResource {
            }
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace NoiseOscillatorDef_t {
                constexpr std::ptrdiff_t m_flPhase = 0x0; // float32
                constexpr std::ptrdiff_t m_flFrequency = 0x4; // float32
                constexpr std::ptrdiff_t m_flAmplitude = 0x8; // float32
            }
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCModel {
            }
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCDOTANovelsList {
            }
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace NoiseStreamDef_t {
                constexpr std::ptrdiff_t m_nType = 0x0; // NoiseStreamType_t
                constexpr std::ptrdiff_t m_nModifier = 0x4; // NoiseStreamModifier_t
                constexpr std::ptrdiff_t m_nTurbulence = 0x8; // NoiseStreamTurbulence_t
                constexpr std::ptrdiff_t m_flOutputMin = 0xC; // float32
                constexpr std::ptrdiff_t m_flOutputMax = 0x10; // float32
                constexpr std::ptrdiff_t m_flScale = 0x14; // float32
                constexpr std::ptrdiff_t m_vOffsetRate = 0x18; // Vector
                constexpr std::ptrdiff_t m_flOffset = 0x24; // float32
                constexpr std::ptrdiff_t m_nOctaves = 0x28; // int32
                constexpr std::ptrdiff_t m_flTurbulenceScale = 0x2C; // float32
                constexpr std::ptrdiff_t m_flTurbulenceMix = 0x30; // float32
                constexpr std::ptrdiff_t m_Oscillators = 0x38; // CUtlVector<NoiseOscillatorDef_t>
            }
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCTextureBase {
            }
            namespace FuseVariableIndex_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // uint16
            }
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeIParticleSystemDefinition {
            }
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCSequenceGroupData {
            }
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace ManifestTestResource_t {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_child = 0x8; // CStrongHandle<InfoForResourceTypeManifestTestResource_t>
            }
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCEntityLump {
            }
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCDOTAPatchNotesList {
            }
        }
    }
}
