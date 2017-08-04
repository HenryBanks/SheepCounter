#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.AudioSource
struct AudioSource_t1135106623;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// musicManager
struct  musicManager_t3229378930  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioSource musicManager::source
	AudioSource_t1135106623 * ___source_2;
	// UnityEngine.AudioSource musicManager::source2
	AudioSource_t1135106623 * ___source2_3;
	// System.Int32 musicManager::selecter
	int32_t ___selecter_4;

public:
	inline static int32_t get_offset_of_source_2() { return static_cast<int32_t>(offsetof(musicManager_t3229378930, ___source_2)); }
	inline AudioSource_t1135106623 * get_source_2() const { return ___source_2; }
	inline AudioSource_t1135106623 ** get_address_of_source_2() { return &___source_2; }
	inline void set_source_2(AudioSource_t1135106623 * value)
	{
		___source_2 = value;
		Il2CppCodeGenWriteBarrier(&___source_2, value);
	}

	inline static int32_t get_offset_of_source2_3() { return static_cast<int32_t>(offsetof(musicManager_t3229378930, ___source2_3)); }
	inline AudioSource_t1135106623 * get_source2_3() const { return ___source2_3; }
	inline AudioSource_t1135106623 ** get_address_of_source2_3() { return &___source2_3; }
	inline void set_source2_3(AudioSource_t1135106623 * value)
	{
		___source2_3 = value;
		Il2CppCodeGenWriteBarrier(&___source2_3, value);
	}

	inline static int32_t get_offset_of_selecter_4() { return static_cast<int32_t>(offsetof(musicManager_t3229378930, ___selecter_4)); }
	inline int32_t get_selecter_4() const { return ___selecter_4; }
	inline int32_t* get_address_of_selecter_4() { return &___selecter_4; }
	inline void set_selecter_4(int32_t value)
	{
		___selecter_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
