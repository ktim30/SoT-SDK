#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_OrderOfSoulsShopkeeper_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_OrderOfSoulsShopkeeper.BP_OrderOfSoulsShopkeeper_C
// 0x0008 (0x0528 - 0x0520)
class ABP_OrderOfSoulsShopkeeper_C : public AShopkeeperInteractionProxy
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0520(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_OrderOfSoulsShopkeeper.BP_OrderOfSoulsShopkeeper_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif