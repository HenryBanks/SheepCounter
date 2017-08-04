#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Text
struct Text_t356221433;
// scoreManager
struct scoreManager_t2403363277;
// sheepGenerator
struct sheepGenerator_t1985949440;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// scoreManager
struct  scoreManager_t2403363277  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 scoreManager::score
	int32_t ___score_2;
	// UnityEngine.UI.Text scoreManager::scoreText
	Text_t356221433 * ___scoreText_3;
	// UnityEngine.UI.Text scoreManager::multiplierText
	Text_t356221433 * ___multiplierText_4;
	// sheepGenerator scoreManager::flyingSheepGen
	sheepGenerator_t1985949440 * ___flyingSheepGen_7;

public:
	inline static int32_t get_offset_of_score_2() { return static_cast<int32_t>(offsetof(scoreManager_t2403363277, ___score_2)); }
	inline int32_t get_score_2() const { return ___score_2; }
	inline int32_t* get_address_of_score_2() { return &___score_2; }
	inline void set_score_2(int32_t value)
	{
		___score_2 = value;
	}

	inline static int32_t get_offset_of_scoreText_3() { return static_cast<int32_t>(offsetof(scoreManager_t2403363277, ___scoreText_3)); }
	inline Text_t356221433 * get_scoreText_3() const { return ___scoreText_3; }
	inline Text_t356221433 ** get_address_of_scoreText_3() { return &___scoreText_3; }
	inline void set_scoreText_3(Text_t356221433 * value)
	{
		___scoreText_3 = value;
		Il2CppCodeGenWriteBarrier(&___scoreText_3, value);
	}

	inline static int32_t get_offset_of_multiplierText_4() { return static_cast<int32_t>(offsetof(scoreManager_t2403363277, ___multiplierText_4)); }
	inline Text_t356221433 * get_multiplierText_4() const { return ___multiplierText_4; }
	inline Text_t356221433 ** get_address_of_multiplierText_4() { return &___multiplierText_4; }
	inline void set_multiplierText_4(Text_t356221433 * value)
	{
		___multiplierText_4 = value;
		Il2CppCodeGenWriteBarrier(&___multiplierText_4, value);
	}

	inline static int32_t get_offset_of_flyingSheepGen_7() { return static_cast<int32_t>(offsetof(scoreManager_t2403363277, ___flyingSheepGen_7)); }
	inline sheepGenerator_t1985949440 * get_flyingSheepGen_7() const { return ___flyingSheepGen_7; }
	inline sheepGenerator_t1985949440 ** get_address_of_flyingSheepGen_7() { return &___flyingSheepGen_7; }
	inline void set_flyingSheepGen_7(sheepGenerator_t1985949440 * value)
	{
		___flyingSheepGen_7 = value;
		Il2CppCodeGenWriteBarrier(&___flyingSheepGen_7, value);
	}
};

struct scoreManager_t2403363277_StaticFields
{
public:
	// System.Int32 scoreManager::multiplier
	int32_t ___multiplier_5;
	// scoreManager scoreManager::instance
	scoreManager_t2403363277 * ___instance_6;

public:
	inline static int32_t get_offset_of_multiplier_5() { return static_cast<int32_t>(offsetof(scoreManager_t2403363277_StaticFields, ___multiplier_5)); }
	inline int32_t get_multiplier_5() const { return ___multiplier_5; }
	inline int32_t* get_address_of_multiplier_5() { return &___multiplier_5; }
	inline void set_multiplier_5(int32_t value)
	{
		___multiplier_5 = value;
	}

	inline static int32_t get_offset_of_instance_6() { return static_cast<int32_t>(offsetof(scoreManager_t2403363277_StaticFields, ___instance_6)); }
	inline scoreManager_t2403363277 * get_instance_6() const { return ___instance_6; }
	inline scoreManager_t2403363277 ** get_address_of_instance_6() { return &___instance_6; }
	inline void set_instance_6(scoreManager_t2403363277 * value)
	{
		___instance_6 = value;
		Il2CppCodeGenWriteBarrier(&___instance_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
