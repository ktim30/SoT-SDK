#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Duke_FriendsPlayFree_001_BilgeRats_NPC_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Duke_FriendsPlayFree_001_BilgeRats_NPC.BP_Duke_FriendsPlayFree_001_BilgeRats_NPC_C
// 0x0018 (0x0598 - 0x0580)
class ABP_Duke_FriendsPlayFree_001_BilgeRats_NPC_C : public AShopkeeper
{
public:
	class UCapsuleComponent*                           Capsule;                                                  // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UNPCDialogComponent*                         NPCDialog;                                                // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitter;                                   // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_Duke_FriendsPlayFree_001_BilgeRats_NPC.BP_Duke_FriendsPlayFree_001_BilgeRats_NPC_C"));
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
