#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TreasureChest_ItemInfo_Rare_DVR_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TreasureChest_ItemInfo_Rare_DVR.BP_TreasureChest_ItemInfo_Rare_DVR_C
// 0x0008 (0x05D8 - 0x05D0)
class ABP_TreasureChest_ItemInfo_Rare_DVR_C : public ATreasureChestItemInfo
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_TreasureChest_ItemInfo_Rare_DVR.BP_TreasureChest_ItemInfo_Rare_DVR_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
