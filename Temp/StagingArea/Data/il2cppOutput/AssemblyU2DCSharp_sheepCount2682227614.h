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

// sheepCount
struct  sheepCount_t2682227614  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioClip[] sheepCount::coinClip
	AudioClipU5BU5D_t2203355011* ___coinClip_2;
	// UnityEngine.AudioSource sheepCount::source
	AudioSource_t1135106623 * ___source_3;
	// System.Single sheepCount::lowPitchRange
	float ___lowPitchRange_4;
	// System.Single sheepCount::highPitchRange
	float ___highPitchRange_5;
	// System.Int32 sheepCount::soundselecter
	int32_t ___soundselecter_6;

public:
	inline static int32_t get_offset_of_coinClip_2() { return static_cast<int32_t>(offsetof(sheepCount_t2682227614, ___coinClip_2)); }
	inline AudioClipU5BU5D_t2203355011* get_coinClip_2() const { return ___coinClip_2; }
	inline AudioClipU5BU5D_t2203355011** get_address_of_coinClip_2() { return &___coinClip_2; }
	inline void set_coinClip_2(AudioClipU5BU5D_t2203355011* value)
	{
		___coinClip_2 = value;
		Il2CppCodeGenWriteBarrier(&___coinClip_2, value);
	}

	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(sheepCount_t2682227614, ___source_3)); }
	inline AudioSource_t1135106623 * get_source_3() const { return ___source_3; }
	inline AudioSource_t1135106623 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(AudioSource_t1135106623 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier(&___source_3, value);
	}

	inline static int32_t get_offset_of_lowPitchRange_4() { return static_cast<int32_t>(offsetof(sheepCount_t2682227614, ___lowPitchRange_4)); }
	inline float get_lowPitchRange_4() const { return ___lowPitchRange_4; }
	inline float* get_address_of_lowPitchRange_4() { return &___lowPitchRange_4; }
	inline void set_lowPitchRange_4(float value)
	{
		___lowPitchRange_4 = value;
	}

	inline static int32_t get_offset_of_highPitchRange_5() { return static_cast<int32_t>(offsetof(sheepCount_t2682227614, ___highPitchRange_5)); }
	inline float get_highPitchRange_5() const { return ___highPitchRange_5; }
	inline float* get_address_of_highPitchRange_5() { return &___highPitchRange_5; }
	inline void set_highPitchRange_5(float value)
	{
		___highPitchRange_5 = value;
	}

	inline static int32_t get_offset_of_soundselecter_6() { return static_cast<int32_t>(offsetof(sheepCount_t2682227614, ___soundselecter_6)); }
	inline int32_t get_soundselecter_6() const { return ___soundselecter_6; }
	inline int32_t* get_address_of_soundselecter_6() { return &___soundselecter_6; }
	inline void set_soundselecter_6(int32_t value)
	{
		___soundselecter_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
