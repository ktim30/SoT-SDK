#pragma once

// Sea of Thieves (1.2.6) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_NetworkingUtilsMacroLibrary_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_NetworkingUtilsMacroLibrary.BP_NetworkingUtilsMacroLibrary_C
// 0x0000 (0x0490 - 0x0490)
class ABP_NetworkingUtilsMacroLibrary_C : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_NetworkingUtilsMacroLibrary.BP_NetworkingUtilsMacroLibrary_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
