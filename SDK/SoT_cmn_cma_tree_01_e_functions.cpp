// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_cmn_cma_tree_01_e_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function cmn_cma_tree_01_e.cmn_cma_tree_01_e_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Acmn_cma_tree_01_e_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function cmn_cma_tree_01_e.cmn_cma_tree_01_e_C.UserConstructionScript");

	Acmn_cma_tree_01_e_C_UserConstructionScript_Params params;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
