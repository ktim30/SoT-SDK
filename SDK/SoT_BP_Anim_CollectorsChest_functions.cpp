// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_Anim_CollectorsChest_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Anim_CollectorsChest.BP_Anim_CollectorsChest_C.ExecuteUbergraph_BP_Anim_CollectorsChest
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Anim_CollectorsChest_C::ExecuteUbergraph_BP_Anim_CollectorsChest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Anim_CollectorsChest.BP_Anim_CollectorsChest_C.ExecuteUbergraph_BP_Anim_CollectorsChest");

	UBP_Anim_CollectorsChest_C_ExecuteUbergraph_BP_Anim_CollectorsChest_Params params;
	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
