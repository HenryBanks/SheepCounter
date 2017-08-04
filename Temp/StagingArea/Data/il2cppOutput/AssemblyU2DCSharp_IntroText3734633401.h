#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t356221433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IntroText
struct  IntroText_t3734633401  : public MonoBehaviour_t1158329972
{
public:
	// System.Single IntroText::letterPause
	float ___letterPause_2;
	// System.String IntroText::message
	String_t* ___message_3;
	// UnityEngine.UI.Text IntroText::textComp
	Text_t356221433 * ___textComp_4;

public:
	inline static int32_t get_offset_of_letterPause_2() { return static_cast<int32_t>(offsetof(IntroText_t3734633401, ___letterPause_2)); }
	inline float get_letterPause_2() const { return ___letterPause_2; }
	inline float* get_address_of_letterPause_2() { return &___letterPause_2; }
	inline void set_letterPause_2(float value)
	{
		___letterPause_2 = value;
	}

	inline static int32_t get_offset_of_message_3() { return static_cast<int32_t>(offsetof(IntroText_t3734633401, ___message_3)); }
	inline String_t* get_message_3() const { return ___message_3; }
	inline String_t** get_address_of_message_3() { return &___message_3; }
	inline void set_message_3(String_t* value)
	{
		___message_3 = value;
		Il2CppCodeGenWriteBarrier(&___message_3, value);
	}

	inline static int32_t get_offset_of_textComp_4() { return static_cast<int32_t>(offsetof(IntroText_t3734633401, ___textComp_4)); }
	inline Text_t356221433 * get_textComp_4() const { return ___textComp_4; }
	inline Text_t356221433 ** get_address_of_textComp_4() { return &___textComp_4; }
	inline void set_textComp_4(Text_t356221433 * value)
	{
		___textComp_4 = value;
		Il2CppCodeGenWriteBarrier(&___textComp_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
