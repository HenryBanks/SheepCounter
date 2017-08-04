#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// UnityEngine.Light
struct Light_t494725636;
// UnityEngine.Renderer
struct Renderer_t257310565;
// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// lightManager
struct  lightManager_t1944978659  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Light lightManager::thisLight
	Light_t494725636 * ___thisLight_2;
	// System.Single lightManager::duration
	float ___duration_3;
	// UnityEngine.Renderer lightManager::rend
	Renderer_t257310565 * ___rend_4;
	// UnityEngine.Transform lightManager::background
	Transform_t3275118058 * ___background_5;
	// UnityEngine.Color lightManager::colour
	Color_t2020392075  ___colour_6;

public:
	inline static int32_t get_offset_of_thisLight_2() { return static_cast<int32_t>(offsetof(lightManager_t1944978659, ___thisLight_2)); }
	inline Light_t494725636 * get_thisLight_2() const { return ___thisLight_2; }
	inline Light_t494725636 ** get_address_of_thisLight_2() { return &___thisLight_2; }
	inline void set_thisLight_2(Light_t494725636 * value)
	{
		___thisLight_2 = value;
		Il2CppCodeGenWriteBarrier(&___thisLight_2, value);
	}

	inline static int32_t get_offset_of_duration_3() { return static_cast<int32_t>(offsetof(lightManager_t1944978659, ___duration_3)); }
	inline float get_duration_3() const { return ___duration_3; }
	inline float* get_address_of_duration_3() { return &___duration_3; }
	inline void set_duration_3(float value)
	{
		___duration_3 = value;
	}

	inline static int32_t get_offset_of_rend_4() { return static_cast<int32_t>(offsetof(lightManager_t1944978659, ___rend_4)); }
	inline Renderer_t257310565 * get_rend_4() const { return ___rend_4; }
	inline Renderer_t257310565 ** get_address_of_rend_4() { return &___rend_4; }
	inline void set_rend_4(Renderer_t257310565 * value)
	{
		___rend_4 = value;
		Il2CppCodeGenWriteBarrier(&___rend_4, value);
	}

	inline static int32_t get_offset_of_background_5() { return static_cast<int32_t>(offsetof(lightManager_t1944978659, ___background_5)); }
	inline Transform_t3275118058 * get_background_5() const { return ___background_5; }
	inline Transform_t3275118058 ** get_address_of_background_5() { return &___background_5; }
	inline void set_background_5(Transform_t3275118058 * value)
	{
		___background_5 = value;
		Il2CppCodeGenWriteBarrier(&___background_5, value);
	}

	inline static int32_t get_offset_of_colour_6() { return static_cast<int32_t>(offsetof(lightManager_t1944978659, ___colour_6)); }
	inline Color_t2020392075  get_colour_6() const { return ___colour_6; }
	inline Color_t2020392075 * get_address_of_colour_6() { return &___colour_6; }
	inline void set_colour_6(Color_t2020392075  value)
	{
		___colour_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
