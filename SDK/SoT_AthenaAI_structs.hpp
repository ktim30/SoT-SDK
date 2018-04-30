#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Maths_classes.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"
#include "SoT_AIModule_classes.hpp"
#include "SoT_Athena_classes.hpp"
#include "SoT_ActionStateMachine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AthenaAI.AIFormDamageResponse
// 0x0010
struct FAIFormDamageResponse
{
	bool                                               IsKnockbackDisabled;                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	class UClass*                                      DamagerType;                                              // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageMultiplier;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECharacterHitReactionAnimType>         HitReaction;                                              // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AIDebugVisualisationBox
// 0x0040
struct FAIDebugVisualisationBox
{
	TEnumAsByte<EAIDebugColour>                        Colour;                                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	struct FVector                                     Centre;                                                   // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Extents;                                                  // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FQuat                                       Rotation;                                                 // 0x01E3(0x0010) (IsPlainOldData)
};

// ScriptStruct AthenaAI.AIDebugVisualisationCylinder
// 0x0020
struct FAIDebugVisualisationCylinder
{
	TEnumAsByte<EAIDebugColour>                        Colour;                                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	struct FVector                                     To;                                                       // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     From;                                                     // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AIDebugVisualisationSphere
// 0x0014
struct FAIDebugVisualisationSphere
{
	TEnumAsByte<EAIDebugColour>                        Colour;                                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	struct FVector                                     Centre;                                                   // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AIDebugVisualisationCone
// 0x0028
struct FAIDebugVisualisationCone
{
	TEnumAsByte<EAIDebugColour>                        Colour;                                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	struct FVector                                     Origin;                                                   // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Length;                                                   // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AngleWidthRadians;                                        // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AngleHeightRadians;                                       // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AIIndividualVarietyEntry
// 0x0020
struct FAIIndividualVarietyEntry
{
	int                                                MaxPerEncounter;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	TArray<struct FStringAssetReference>               Loadouts;                                                 // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                RankOffset;                                               // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AIFormVarietyEntry
// 0x0028
struct FAIFormVarietyEntry
{
	TArray<struct FAIIndividualVarietyEntry>           Individuals;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FStringAssetReference                       Form;                                                     // 0x01E3(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              Weight;                                                   // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxPerEncounter;                                          // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AthenaAIControllerSenseSettings
// 0x0010
struct FAthenaAIControllerSenseSettings
{
	float                                              MaxHearingRange;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	float                                              SightRadius;                                              // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LoseSightRadius;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PeripheralVisionAngleDegrees;                             // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AthenaAIControllerSenseSettingOverride
// 0x0020
struct FAthenaAIControllerSenseSettingOverride
{
	bool                                               ClearPerceivedData;                                       // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	class UClass*                                      AIStrategy;                                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAthenaAIControllerSenseSettings            SenseSettings;                                            // 0x01E3(0x0010) (Edit)
};

// ScriptStruct AthenaAI.AthenaAIControllerParamValue
// 0x000C
struct FAthenaAIControllerParamValue
{
	float                                              Value;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FName                                       ParamName;                                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AthenaAIControllerWeightedRangesParamValue
// 0x0038
struct FAthenaAIControllerWeightedRangesParamValue
{
	struct FWeightedProbabilityRangeOfRanges           Value;                                                    // 0x0000(0x0030) (Edit)
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	struct FName                                       ParamName;                                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AIFormRankMapping
// 0x0018
struct FAIFormRankMapping
{
	TArray<float>                                      Weights;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	class UAthenaAIFormDataAsset*                      Form;                                                     // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AILoadoutRankMapping
// 0x0018
struct FAILoadoutRankMapping
{
	TArray<float>                                      Weights;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	class ULoadoutAsset*                               Loadout;                                                  // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AISkillsetRankMapping
// 0x0018
struct FAISkillsetRankMapping
{
	TArray<float>                                      Weights;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	class UAthenaAIControllerParamsDataAsset*          Skillset;                                                 // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AIPartsCategoryMapping
// 0x0010
struct FAIPartsCategoryMapping
{
	class UAIPartsCategory*                            PartsCategory;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	class UClass*                                      ClassId;                                                  // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AIPartsCategoryFormMapping
// 0x0018
struct FAIPartsCategoryFormMapping
{
	TArray<struct FAIPartsCategoryMapping>             CategoryMappings;                                         // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	class UAthenaAIFormDataAsset*                      Form;                                                     // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AITypeData
// 0x0058
struct FAITypeData
{
	struct FName                                       FeatureToggle;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	struct FName                                       AITypeName;                                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FStringClassReference                       AIPawnClass;                                              // 0x01E3(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       DefaultDebugSkillset;                                     // 0x01E3(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       DefaultDebugLoadout;                                      // 0x01E3(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      DefaultDebugAIClassId;                                    // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RequireNavMesh;                                           // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                AIRegionCostUnits;                                        // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                AIWorldCostUnits;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AISpawnTypeParams
// 0x0068
struct FAISpawnTypeParams
{
	struct FStringAssetReference                       TeamColorOverride;                                        // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	TAssetPtr<class UClass>                            AIClass;                                                  // 0x01E3(0x0020) (Edit)
	struct FStringAssetReference                       SkillsetOverride;                                         // 0x01E3(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       LoadoutOverride;                                          // 0x01E3(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       FormOverride;                                             // 0x01E3(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      AIClassIdOverride;                                        // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.WeightedAISpawnTypeParams
// 0x0070
struct FWeightedAISpawnTypeParams
{
	struct FAISpawnTypeParams                          Params;                                                   // 0x0000(0x0068) (Edit)
	unsigned char                                      UnknownData00[0x17B];                                     // 0x0068(0x017B) MISSED OFFSET
	float                                              Weight;                                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxTimesCanBeSelected;                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AISpawnTypeParamsCollection
// 0x0048
struct FAISpawnTypeParamsCollection
{
	TArray<struct FWeightedAISpawnTypeParams>          SpawnParams;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0010(0x0038) MISSED OFFSET
};

// ScriptStruct AthenaAI.AISpawnContextIdEncounterSettingsPair
// 0x0010
struct FAISpawnContextIdEncounterSettingsPair
{
	class UAIEncounterSettings*                        EncounterSettings;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	class UClass*                                      SpawnContext;                                             // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AISpawnContextData
// 0x0010
struct FAISpawnContextData
{
	class UClass*                                      Id;                                                       // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AISpawnerWave
// 0x0130
struct FAISpawnerWave
{
	struct FWeightedProbabilityRangeOfRanges           DelayBeforeRetryingThisWaveIfUnsuccessful;                // 0x0000(0x0030) (Edit)
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	float                                              SpawnChance;                                              // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FWeightedProbabilityRange                   NumOfSpawnsInWave;                                        // 0x01E3(0x0020) (Edit)
	struct FAISpawnTypeParamsCollection                SpawnTypeParamsOverride;                                  // 0x01E3(0x0048) (Edit)
	struct FWeightedProbabilityRangeOfRanges           DelayBeforeWave;                                          // 0x01E3(0x0030) (Edit)
	struct FWeightedProbabilityRangeOfRanges           DelayBetweenSpawns;                                       // 0x01E3(0x0030) (Edit)
	struct FWeightedProbabilityRangeOfRanges           DelayBeforeNextWaveIfSuccessful;                          // 0x01E3(0x0030) (Edit)
};

// ScriptStruct AthenaAI.AIBountySpawnerWave
// 0x0058 (0x0188 - 0x0130)
struct FAIBountySpawnerWave : public FAISpawnerWave
{
	unsigned char                                      UnknownData00[0xB3];                                      // 0x0130(0x00B3) MISSED OFFSET
	bool                                               IsTarget;                                                 // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBountyTargetGender>                   Gender;                                                   // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBountyTargetRank>                     Rank;                                                     // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      BountyReward;                                             // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AIBountySpawnerWaveGroup
// 0x0028
struct FAIBountySpawnerWaveGroup
{
	int                                                NumNonTargetAIToKillToMoveToNextWaveGroup;                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	TArray<struct FAIBountySpawnerWave>                Waves;                                                    // 0x01E3(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AthenaAI.AIFaunaSpawnerWave
// 0x0010 (0x0140 - 0x0130)
struct FAIFaunaSpawnerWave : public FAISpawnerWave
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0130(0x0010) MISSED OFFSET
};

// ScriptStruct AthenaAI.RankBasedWave
// 0x0148
struct FRankBasedWave
{
	struct FAISpawnerWave                              Wave;                                                     // 0x0000(0x0130) (Edit)
	unsigned char                                      UnknownData00[0xB3];                                      // 0x0130(0x00B3) MISSED OFFSET
	int                                                MinRankInclusive;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxRankInclusive;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              AppliesOnlyToSpawnContextList;                            // 0x01E3(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AthenaAI.AIPerCrewSpawnerRankBasedDelay
// 0x0048
struct FAIPerCrewSpawnerRankBasedDelay
{
	struct FWeightedProbabilityRangeOfRanges           WeightedProbabilityRangeOfRanges;                         // 0x0000(0x0030) (Edit)
	unsigned char                                      UnknownData00[0x1B3];                                     // 0x0030(0x01B3) MISSED OFFSET
	int                                                MinRankInclusive;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxRankInclusive;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              AppliesOnlyToSpawnContextList;                            // 0x01E3(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AthenaAI.RankedWaveArray
// 0x0028
struct FRankedWaveArray
{
	TArray<struct FAISpawnerWave>                      Waves;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	int                                                MinRankInclusive;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxRankInclusive;                                         // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              AppliesOnlyToSpawnContextList;                            // 0x01E3(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct AthenaAI.CarriedItemThreatOverride
// 0x0010
struct FCarriedItemThreatOverride
{
	float                                              Threat;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	class UClass*                                      ItemDesc;                                                 // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.HearingThreat
// 0x0010
struct FHearingThreat
{
	float                                              CarrierSpeedThreshold;                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FName                                       SoundTag;                                                 // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Threat;                                                   // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AIStategyControllerMovementMod
// 0x0010
struct FAIStategyControllerMovementMod
{
	float                                              OverrideControlRotationInterpSpeed;                       // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	class UClass*                                      AIStrategy;                                               // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AIStrategyMovementProperties
// 0x0018
struct FAIStrategyMovementProperties
{
	float                                              OverrideBlendSpeed;                                       // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	class UClass*                                      AIStrategy;                                               // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeedAmp;                                              // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxAccelAmp;                                              // 0x01E3(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OverrideRVOAvoidanceRadius;                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AthenaAICharacterControllerItemCategoryProjectileEffectivenessProperties
// 0x0010
struct FAthenaAICharacterControllerItemCategoryProjectileEffectivenessProperties
{
	class UCurveFloat*                                 DistanceInMToProjectileHitChanceCurve;                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	class UClass*                                      ItemCategory;                                             // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AthenaAICharacterControllerItemCategoryNamedParams
// 0x0018
struct FAthenaAICharacterControllerItemCategoryNamedParams
{
	TArray<struct FAthenaAIControllerParamValue>       NamedControllerParams;                                    // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	class UClass*                                      ItemCategory;                                             // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AthenaAIItemParamValue
// 0x0030
struct FAthenaAIItemParamValue
{
	float                                              Value;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	TAssetPtr<class UClass>                            ItemClass;                                                // 0x01E3(0x0020) (Edit)
	struct FName                                       ParamName;                                                // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.BlackboardValueCondition
// 0x0038
struct FBlackboardValueCondition
{
	bool                                               OnExit;                                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	struct FBlackboardKeySelector                      BlackboardKey;                                            // 0x01E3(0x0028) (Edit)
	TEnumAsByte<EBlackboardValueComparisonType>        Comparison;                                               // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OnEntry;                                                  // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.ChanceAndBlackboardKeyPair
// 0x0058
struct FChanceAndBlackboardKeyPair
{
	struct FBlackboardKeySelector                      BlackboardKey;                                            // 0x0000(0x0028) (Edit)
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	struct FAIDataProviderFloatValue                   Chance;                                                   // 0x01E3(0x0030) (Edit)
};

// ScriptStruct AthenaAI.AttackableTypeToAnimMapping
// 0x0028
struct FAttackableTypeToAnimMapping
{
	struct FName                                       RumbleTag;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	TEnumAsByte<ESwimAttackableType>                   AttackType;                                               // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	class UObject*                                     AnimMontage;                                              // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               PlayAsDynamicMontage;                                     // 0x01E3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AnimLength;                                               // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeIntoAnimOfAttack;                                     // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TargetKnockBackStrength;                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.TinySharkParams
// 0x0010
struct FTinySharkParams
{
	float                                              TargetRadius;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	class UClass*                                      TinySharkType;                                            // 0x01E3(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct AthenaAI.TinySharkServiceParams
// 0x0008
struct FTinySharkServiceParams
{
	class UTinySharkParamsDataAsset*                   TinySharkParams;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct AthenaAI.AIEncounterSpecification
// 0x0050
struct FAIEncounterSpecification
{
	int                                                TeamColorIndex;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	TAssetPtr<class UClass>                            PawnClass;                                                // 0x01E3(0x0020)
	class UAthenaAIControllerParamsDataAsset*          Skillset;                                                 // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class ULoadoutAsset*                               Loadout;                                                  // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAthenaAIFormDataAsset*                      Form;                                                     // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      AIClass;                                                  // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAIPartsCategory*                            PartsCategory;                                            // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AIEncounterWave
// 0x0010
struct FAIEncounterWave
{
	TArray<struct FAIEncounterSpecification>           Specifications;                                           // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct AthenaAI.AIBountySpawnerParams
// 0x0098
struct FAIBountySpawnerParams
{
	float                                              WaveSuicideMinDist;                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	TArray<struct FAIEncounterWave>                    AISpawnerCreationDesc;                                    // 0x01E3(0x0010) (ZeroConstructor)
	struct FStringAssetReference                       TeamColor;                                                // 0x01E3(0x0010) (ZeroConstructor)
	TArray<int>                                        NumTargetsInWave;                                         // 0x01E3(0x0010) (ZeroConstructor)
	float                                              MinTimeBetweenSpawns;                                     // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxTimeBetweenSpawns;                                     // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MinTimeBetweenWaves;                                      // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxTimeBetweenWaves;                                      // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FWeightedProbabilityRange                   WavesPerRelocate;                                         // 0x01E3(0x0020)
	struct FWeightedProbabilityRange                   WaveSplitChance;                                          // 0x01E3(0x0020)
	TArray<float>                                      WaveSuicideTime;                                          // 0x01E3(0x0010) (ZeroConstructor)
};

// ScriptStruct AthenaAI.AthenaAIFormComponentAggregateTickFunction
// 0x0018 (0x0060 - 0x0048)
struct FAthenaAIFormComponentAggregateTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x19B];                                     // 0x0048(0x019B) MISSED OFFSET
	TArray<class UAthenaAIFormComponent*>              AIFormComponents;                                         // 0x01E3(0x0010) (ExportObject, ZeroConstructor, Transient)
};

// ScriptStruct AthenaAI.BountySpawnerTargetDesc
// 0x0002
struct FBountySpawnerTargetDesc
{
	TEnumAsByte<EBountyTargetRank>                     Rank;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	TEnumAsByte<EBountyTargetGender>                   Gender;                                                   // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AIBountySpawnerWaveLocation
// 0x0014
struct FAIBountySpawnerWaveLocation
{
	bool                                               AllowForTarget;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	struct FVector                                     Location;                                                 // 0x01E3(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SelectionWeight;                                          // 0x01E3(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AIPerCrewSpawnerCrewUnit
// 0x0018
struct FAIPerCrewSpawnerCrewUnit
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AthenaAI.AthenaAIControllerAggregateTickFunction
// 0x0010 (0x0058 - 0x0048)
struct FAthenaAIControllerAggregateTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0048(0x0010) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventAIOnDelayedAssignedMeshConsumed
// 0x0010
struct FEventAIOnDelayedAssignedMeshConsumed
{
	class USkeletalMesh*                               ConsumedMesh;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	class USkeletalMeshComponent*                      MeshComponent;                                            // 0x01E3(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventAIPawnCarrierChange
// 0x0008
struct FEventAIPawnCarrierChange
{
	class AActor*                                      Carrier;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventAIUnderwaterStateChange
// 0x0001
struct FEventAIUnderwaterStateChange
{
	bool                                               IsAboveWater;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventAICustomEventDuringDeath
// 0x0001
struct FEventAICustomEventDuringDeath
{
	TEnumAsByte<ECustomAiEventDuringDeathEnum>         UserData;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventAIDebugTextUpdated
// 0x0001
struct FEventAIDebugTextUpdated
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventAIStartedDeadActionState
// 0x0001
struct FEventAIStartedDeadActionState
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventAIControllerUnPossess
// 0x0001
struct FEventAIControllerUnPossess
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventAIKnockbackEnded
// 0x0001
struct FEventAIKnockbackEnded
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventAIKnockbackStarted
// 0x0018
struct FEventAIKnockbackStarted
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventNewAIStrategy
// 0x0008
struct FEventNewAIStrategy
{
	class UClass*                                      NewAIStrategy;                                            // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventPawnRequestDespawn
// 0x0001
struct FEventPawnRequestDespawn
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventPawnRemoveOwnership
// 0x0008
struct FEventPawnRemoveOwnership
{
	class APawn*                                       AIPawn;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventPawnFinishedDying
// 0x0010
struct FEventPawnFinishedDying
{
	TEnumAsByte<ECharacterDeathType>                   DeathType;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	class APawn*                                       AIPawn;                                                   // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventPawnStartedDying
// 0x0018
struct FEventPawnStartedDying
{
	class AActor*                                      Instigator;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	class APawn*                                       AIPawn;                                                   // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECharacterDeathType>                   DeathType;                                                // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventOwnedPawnRemoveOwnership
// 0x0001
struct FEventOwnedPawnRemoveOwnership
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventOwnedPawnFinishedDying
// 0x0001
struct FEventOwnedPawnFinishedDying
{
	TEnumAsByte<ECharacterDeathType>                   DeathType;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventOwnedPawnStartedDying
// 0x0010
struct FEventOwnedPawnStartedDying
{
	class AActor*                                      Instigator;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	TEnumAsByte<ECharacterDeathType>                   DeathType;                                                // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventVisualAppearanceSelected
// 0x0010
struct FEventVisualAppearanceSelected
{
	int                                                ColorTextureIndex;                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	class UAIPartsCategory*                            PartsCategory;                                            // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventAILoadoutSelected
// 0x0020
struct FEventAILoadoutSelected
{
	struct FItemLoadout                                Loadout;                                                  // 0x0000(0x0020)
};

// ScriptStruct AthenaAI.EventAIFormSelected
// 0x0008
struct FEventAIFormSelected
{
	class UAthenaAIFormDataAsset*                      Form;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventAIPawnReadyToConstructDebugText
// 0x0001
struct FEventAIPawnReadyToConstructDebugText
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventOwnedPawnFinishedSpawning
// 0x0038
struct FEventOwnedPawnFinishedSpawning
{
	class UAthenaAIControllerParamsDataAsset*          Skillset;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	class UObject*                                     AICoordinator;                                            // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Region;                                                   // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpawnPos;                                                 // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      ActorToPerceiveOnSpawn;                                   // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              MaximumDistanceToPerceiveOnSpawn;                         // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.PeriodicAINoiseEventAggregateTickFunction
// 0x0018 (0x0060 - 0x0048)
struct FPeriodicAINoiseEventAggregateTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x19B];                                     // 0x0048(0x019B) MISSED OFFSET
	TArray<class UPeriodicAINoiseEventComponent*>      AINoiseEventComponents;                                   // 0x01E3(0x0010) (ExportObject, ZeroConstructor, Transient)
};

// ScriptStruct AthenaAI.EventPlayerLeftAISpawnableWater
// 0x0008
struct FEventPlayerLeftAISpawnableWater
{
	class AActor*                                      Player;                                                   // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventPlayerEnterAISpawnableWater
// 0x0018
struct FEventPlayerEnterAISpawnableWater
{
	class AActor*                                      Player;                                                   // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventPlayerSetFootUponAISpawnRegion
// 0x0020
struct FEventPlayerSetFootUponAISpawnRegion
{
	class AActor*                                      Player;                                                   // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventPlayerLeftAISpawnRegion
// 0x0018
struct FEventPlayerLeftAISpawnRegion
{
	class AActor*                                      Player;                                                   // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventPlayerEnteredAISpawnRegion
// 0x0020
struct FEventPlayerEnteredAISpawnRegion
{
	class AActor*                                      Player;                                                   // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct AthenaAI.BountySpawnerNewWaveGroupSpawnedEvent
// 0x0018
struct FBountySpawnerNewWaveGroupSpawnedEvent
{
	bool                                               WaveHasCaptain;                                           // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	TArray<struct FVector>                             SpawnLocations;                                           // 0x01E3(0x0010) (ZeroConstructor)
};

// ScriptStruct AthenaAI.BountySpawnerAudioChangedNetworkEvent
// 0x0018 (0x0028 - 0x0010)
struct FBountySpawnerAudioChangedNetworkEvent : public FNetworkEventStruct
{
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	TEnumAsByte<EBountySpawnerAudioState>              AudioState;                                               // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	float                                              Intensity;                                                // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBountySpawnerType>                    BountyType;                                               // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     BountyPosition;                                           // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventAIBountySpawnerAllTargetsKilled
// 0x0018
struct FEventAIBountySpawnerAllTargetsKilled
{
	struct FGuid                                       CrewId;                                                   // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1D3];                                     // 0x0010(0x01D3) MISSED OFFSET
	struct FName                                       IslandName;                                               // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventAIBountySpawnerTargetKilled
// 0x0038
struct FEventAIBountySpawnerTargetKilled
{
	class AActor*                                      Instigator;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	class FString                                      TargetName;                                               // 0x01E3(0x0010) (ZeroConstructor)
	struct FName                                       RewardId;                                                 // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	class AItemInfo*                                   ItemDropped;                                              // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBountyTargetRank>                     Rank;                                                     // 0x01E3(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     DeathLocation;                                            // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventAIBountySpawnerWaveCompleted
// 0x0028
struct FEventAIBountySpawnerWaveCompleted
{
	class AActor*                                      InstigatorOfFinalAIPawnDeath;                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	struct FName                                       IslandName;                                               // 0x01E3(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       CrewId;                                                   // 0x01E3(0x0010) (ZeroConstructor, IsPlainOldData)
	int                                                WaveIndex;                                                // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TotalWaves;                                               // 0x01E3(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventFaunaThreatLevelChanged
// 0x0001
struct FEventFaunaThreatLevelChanged
{
	TEnumAsByte<EAIThreatLevel>                        ThreatLevel;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.EventFaunaAgitationEnded
// 0x0001
struct FEventFaunaAgitationEnded
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AthenaAI.EventFaunaAgitationBegun
// 0x0008
struct FEventFaunaAgitationBegun
{
	class AActor*                                      SourceActor;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AITargetBounds
// 0x0018
struct FAITargetBounds
{
	struct FVector                                     Extents;                                                  // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1D7];                                     // 0x000C(0x01D7) MISSED OFFSET
	struct FVector                                     Offset;                                                   // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AthenaAI.AITargetInfo
// 0x0028
struct FAITargetInfo
{
	float                                              TargetYaw;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DF];                                     // 0x0004(0x01DF) MISSED OFFSET
	struct FAITargetBounds                             Bounds;                                                   // 0x01E3(0x0018)
	struct FVector                                     TargetPos;                                                // 0x01E3(0x000C) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif