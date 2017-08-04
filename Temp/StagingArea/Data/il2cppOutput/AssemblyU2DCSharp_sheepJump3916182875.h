#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t2203355011;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// sheepJump
struct  sheepJump_t3916182875  : public MonoBehaviour_t1158329972
{
public:
	// System.Single sheepJump::upmove
	float ___upmove_2;
	// UnityEngine.AudioClip[] sheepJump::JumpSound
	AudioClipU5BU5D_t2203355011* ___JumpSound_3;
	// UnityEngine.AudioSource sheepJump::source
	AudioSource_t1135106623 * ___source_4;
	// System.Int32 sheepJump::soundselecter
	int32_t ___soundselecter_5;

public:
	inline static int32_t get_offset_of_upmove_2() { return static_cast<int32_t>(offsetof(sheepJump_t3916182875, ___upmove_2)); }
	inline float get_upmove_2() const { return ___upmove_2; }
	inline float* get_address_of_upmove_2() { return &___upmove_2; }
	inline void set_upmove_2(float value)
	{
		___upmove_2 = value;
	}

	inline static int32_t get_offset_of_JumpSound_3() { return static_cast<int32_t>(offsetof(sheepJump_t3916182875, ___JumpSound_3)); }
	inline AudioClipU5BU5D_t2203355011* get_JumpSound_3() const { return ___JumpSound_3; }
	inline AudioClipU5BU5D_t2203355011** get_address_of_JumpSound_3() { return &___JumpSound_3; }
	inline void set_JumpSound_3(AudioClipU5BU5D_t2203355011* value)
	{
		___JumpSound_3 = value;
		Il2CppCodeGenWriteBarrier(&___JumpSound_3, value);
	}

	inline static int32_t get_offset_of_source_4() { return static_cast<int32_t>(offsetof(sheepJump_t3916182875, ___source_4)); }
	inline AudioSource_t1135106623 * get_source_4() const { return ___source_4; }
	inline AudioSource_t1135106623 ** get_address_of_source_4() { return &___source_4; }
	inline void set_source_4(AudioSource_t1135106623 * value)
	{
		___source_4 = value;
		Il2CppCodeGenWriteBarrier(&___source_4, value);
	}

	inline static int32_t get_offset_of_soundselecter_5() { return static_cast<int32_t>(offsetof(sheepJump_t3916182875, ___soundselecter_5)); }
	inline int32_t get_soundselecter_5() const { return ___soundselecter_5; }
	inline int32_t* get_address_of_soundselecter_5() { return &___soundselecter_5; }
	inline void set_soundselecter_5(int32_t value)
	{
		___soundselecter_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
