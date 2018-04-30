#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_EDocking_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct BP_Docking.BP_Docking
// 0x0028
struct FBP_Docking
{
	class USkeletalMeshComponent*                      SkeltalMesh_20_CD36D8D547E4234A58C5F18936A94904;          // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1DB];                                     // 0x0008(0x01DB) MISSED OFFSET
	bool                                               CanDock_1_9709281449045809CBDC7C8FF23165CB;               // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsDocked_8_0FC4B3E34D0D0F774E4DF9AC0523AC02;              // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DockingObject_11_F7BECEE04D5FD487613052A206AAC3EE;        // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Socket_14_ECA94EF8471B2E8038367F9F9751E26A;               // 0x01E3(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDocking>                              DockObject_17_E9612C6544DF16AC55D337BBC3BEE605;           // 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif