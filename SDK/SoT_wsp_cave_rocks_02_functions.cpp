// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wsp_cave_rocks_02_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function wsp_cave_rocks_02.wsp_cave_rocks_02_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Awsp_cave_rocks_02_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function wsp_cave_rocks_02.wsp_cave_rocks_02_C.UserConstructionScript");

	Awsp_cave_rocks_02_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
