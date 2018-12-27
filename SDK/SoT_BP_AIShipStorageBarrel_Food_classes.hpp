#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_AIShipStorageBarrel_Food_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AIShipStorageBarrel_Food.BP_AIShipStorageBarrel_Food_C
// 0x0020 (0x05B0 - 0x0590)
class ABP_AIShipStorageBarrel_Food_C : public AStorageContainer
{
public:
	class UReplenishableComponent*                     Replenishable;                                            // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShipTelemetrySubjectComponent*              ShipTelemetrySubject;                                     // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStorageContainerComponent*                  StorageContainer;                                         // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_AIShipStorageBarrel_Food.BP_AIShipStorageBarrel_Food_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
