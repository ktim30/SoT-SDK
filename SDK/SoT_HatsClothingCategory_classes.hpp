#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_HatsClothingCategory_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass HatsClothingCategory.HatsClothingCategory_C
// 0x0000 (0x0078 - 0x0078)
class UHatsClothingCategory_C : public UClothingCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HatsClothingCategory.HatsClothingCategory_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif