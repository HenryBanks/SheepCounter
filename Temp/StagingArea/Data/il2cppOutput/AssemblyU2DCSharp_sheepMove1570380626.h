#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Animator
struct Animator_t69676727;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// sheepMove
struct  sheepMove_t1570380626  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 sheepMove::moveSpeed
	int32_t ___moveSpeed_2;
	// System.Int32 sheepMove::minSpeed
	int32_t ___minSpeed_3;
	// System.Int32 sheepMove::maxSpeed
	int32_t ___maxSpeed_4;
	// UnityEngine.Animator sheepMove::MyAnim
	Animator_t69676727 * ___MyAnim_5;

public:
	inline static int32_t get_offset_of_moveSpeed_2() { return static_cast<int32_t>(offsetof(sheepMove_t1570380626, ___moveSpeed_2)); }
	inline int32_t get_moveSpeed_2() const { return ___moveSpeed_2; }
	inline int32_t* get_address_of_moveSpeed_2() { return &___moveSpeed_2; }
	inline void set_moveSpeed_2(int32_t value)
	{
		___moveSpeed_2 = value;
	}

	inline static int32_t get_offset_of_minSpeed_3() { return static_cast<int32_t>(offsetof(sheepMove_t1570380626, ___minSpeed_3)); }
	inline int32_t get_minSpeed_3() const { return ___minSpeed_3; }
	inline int32_t* get_address_of_minSpeed_3() { return &___minSpeed_3; }
	inline void set_minSpeed_3(int32_t value)
	{
		___minSpeed_3 = value;
	}

	inline static int32_t get_offset_of_maxSpeed_4() { return static_cast<int32_t>(offsetof(sheepMove_t1570380626, ___maxSpeed_4)); }
	inline int32_t get_maxSpeed_4() const { return ___maxSpeed_4; }
	inline int32_t* get_address_of_maxSpeed_4() { return &___maxSpeed_4; }
	inline void set_maxSpeed_4(int32_t value)
	{
		___maxSpeed_4 = value;
	}

	inline static int32_t get_offset_of_MyAnim_5() { return static_cast<int32_t>(offsetof(sheepMove_t1570380626, ___MyAnim_5)); }
	inline Animator_t69676727 * get_MyAnim_5() const { return ___MyAnim_5; }
	inline Animator_t69676727 ** get_address_of_MyAnim_5() { return &___MyAnim_5; }
	inline void set_MyAnim_5(Animator_t69676727 * value)
	{
		___MyAnim_5 = value;
		Il2CppCodeGenWriteBarrier(&___MyAnim_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
