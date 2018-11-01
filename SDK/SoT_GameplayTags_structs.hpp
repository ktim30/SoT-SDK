#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_CoreUObject_classes.hpp"
#include "SoT_Engine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum GameplayTags.EGameplayTagQueryExprType
enum class EGameplayTagQueryExprType : uint8_t
{
	EGameplayTagQueryExprType__Undefined = 0,
	None                           = 1,
	EGameplayTagQueryExprType__AnyExprMatch = 2,
	None01                         = 3,
	NameProperty                   = 4
};


// Enum GameplayTags.EGameplayContainerMatchType
enum class EGameplayContainerMatchType : uint8_t
{
	EGameplayContainerMatchType__Any = 0,
	None                           = 1
};


// Enum GameplayTags.EGameplayTagMatchType
enum class EGameplayTagMatchType : uint8_t
{
	EGameplayTagMatchType__Explicit = 0,
	None                           = 1
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameplayTags.GameplayTag
// 0x0008
struct FGameplayTag
{
	struct FName                                       TagName;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct GameplayTags.GameplayTagQuery
// 0x0048
struct FGameplayTagQuery
{
	int                                                TokenStreamVersion;                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FGameplayTag>                        TagDictionary;                                            // 0x0008(0x0010) (ZeroConstructor)
	TArray<unsigned char>                              QueryTokenStream;                                         // 0x0018(0x0010) (ZeroConstructor)
	class FString                                      UserDescription;                                          // 0x0028(0x0010) (ZeroConstructor)
	class FString                                      AutoDescription;                                          // 0x0038(0x0010) (ZeroConstructor)
};

// ScriptStruct GameplayTags.GameplayTagContainer
// 0x0028
struct FGameplayTagContainer
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TArray<struct FGameplayTag>                        GameplayTags;                                             // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               Tags;                                                     // 0x0018(0x0010) (ZeroConstructor, Deprecated)
};

// ScriptStruct GameplayTags.GameplayTagNode
// 0x0078
struct FGameplayTagNode
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0000(0x0078) MISSED OFFSET
};

// ScriptStruct GameplayTags.GameplayTagTableRow
// 0x0047 (0x0048 - 0x0001)
struct FGameplayTagTableRow : public FTableRowBase
{
	class FString                                      Tag;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FText                                       CategoryText;                                             // 0x0010(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0010(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
