#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_PositionalVoice_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class PositionalVoice.VoiceChatRendererInterface
// 0x0000 (0x0028 - 0x0028)
class UVoiceChatRendererInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PositionalVoice.VoiceChatRendererInterface");
		return ptr;
	}

};


// Class PositionalVoice.MockVoiceChatRenderer
// 0x0030 (0x0058 - 0x0028)
class UMockVoiceChatRenderer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PositionalVoice.MockVoiceChatRenderer");
		return ptr;
	}

};


// Class PositionalVoice.VoiceChatRendererRetreivalInterface
// 0x0000 (0x0028 - 0x0028)
class UVoiceChatRendererRetreivalInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PositionalVoice.VoiceChatRendererRetreivalInterface");
		return ptr;
	}

};


// Class PositionalVoice.MockVoiceChatRendererRetriever
// 0x0010 (0x0038 - 0x0028)
class UMockVoiceChatRendererRetriever : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PositionalVoice.MockVoiceChatRendererRetriever");
		return ptr;
	}

};


// Class PositionalVoice.PositionalVoiceTestFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UPositionalVoiceTestFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PositionalVoice.PositionalVoiceTestFunctionLibrary");
		return ptr;
	}


	int STATIC_GetNumberOfUnmutedRemotePlayers(class APlayerController* CurrentPlayer);
	int STATIC_GetNumberOfRegisteredChatEmitters(class UObject* WorldContextObject, class UClass* VoiceChatRendererClass);
	int STATIC_GetMaxNumberOfAudibleChatEmitters();
};


// Class PositionalVoice.VoiceChatEmitterInterface
// 0x0000 (0x0028 - 0x0028)
class UVoiceChatEmitterInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PositionalVoice.VoiceChatEmitterInterface");
		return ptr;
	}


	struct FVector GetVoiceLocation();
	void GetVoiceAudioEmitterProxy(struct FWwiseEmitter* EmitterProxy);
	float GetVoiceAttenuationScaler(const TScriptInterface<class UVoiceChatEmitterInterface>& RelativeToThisEmitter);
};


// Class PositionalVoice.TestVoiceChatEmitter
// 0x0038 (0x04A8 - 0x0470)
class ATestVoiceChatEmitter : public AActor
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0470(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PositionalVoice.TestVoiceChatEmitter");
		return ptr;
	}


	struct FVector GetVoiceLocation();
	void GetVoiceAudioEmitterProxy(struct FWwiseEmitter* EmitterProxy);
	float GetVoiceAttenuationScaler(const TScriptInterface<class UVoiceChatEmitterInterface>& RelativeToThisEmitter);
};


// Class PositionalVoice.VoiceChatRenderer
// 0x0110 (0x0138 - 0x0028)
class UVoiceChatRenderer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1BB];                                     // 0x0028(0x01BB) MISSED OFFSET
	class UWwiseEvent*                                 AttenuatedVoiceEvent;                                     // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 AttenuatedAndSpatialisedVoiceEvent;                       // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 UnattenuatedVoiceEvent;                                   // 0x01E3(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PreBufferInMilliseconds;                                  // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                ChatRoutingListenerIndex;                                 // 0x01E3(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PositionalVoice.VoiceChatRenderer");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif