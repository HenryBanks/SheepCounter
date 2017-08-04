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

// Intro_Text
struct  Intro_Text_t3199159032  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Intro_Text::letterPause
	float ___letterPause_2;
	// System.String Intro_Text::message
	String_t* ___message_3;
	// UnityEngine.UI.Text Intro_Text::textComp
	Text_t356221433 * ___textComp_4;
	// System.Boolean Intro_Text::message1
	bool ___message1_5;
	// System.Boolean Intro_Text::message2
	bool ___message2_6;
	// System.Boolean Intro_Text::message3
	bool ___message3_7;
	// System.Boolean Intro_Text::message4
	bool ___message4_8;

public:
	inline static int32_t get_offset_of_letterPause_2() { return static_cast<int32_t>(offsetof(Intro_Text_t3199159032, ___letterPause_2)); }
	inline float get_letterPause_2() const { return ___letterPause_2; }
	inline float* get_address_of_letterPause_2() { return &___letterPause_2; }
	inline void set_letterPause_2(float value)
	{
		___letterPause_2 = value;
	}

	inline static int32_t get_offset_of_message_3() { return static_cast<int32_t>(offsetof(Intro_Text_t3199159032, ___message_3)); }
	inline String_t* get_message_3() const { return ___message_3; }
	inline String_t** get_address_of_message_3() { return &___message_3; }
	inline void set_message_3(String_t* value)
	{
		___message_3 = value;
		Il2CppCodeGenWriteBarrier(&___message_3, value);
	}

	inline static int32_t get_offset_of_textComp_4() { return static_cast<int32_t>(offsetof(Intro_Text_t3199159032, ___textComp_4)); }
	inline Text_t356221433 * get_textComp_4() const { return ___textComp_4; }
	inline Text_t356221433 ** get_address_of_textComp_4() { return &___textComp_4; }
	inline void set_textComp_4(Text_t356221433 * value)
	{
		___textComp_4 = value;
		Il2CppCodeGenWriteBarrier(&___textComp_4, value);
	}

	inline static int32_t get_offset_of_message1_5() { return static_cast<int32_t>(offsetof(Intro_Text_t3199159032, ___message1_5)); }
	inline bool get_message1_5() const { return ___message1_5; }
	inline bool* get_address_of_message1_5() { return &___message1_5; }
	inline void set_message1_5(bool value)
	{
		___message1_5 = value;
	}

	inline static int32_t get_offset_of_message2_6() { return static_cast<int32_t>(offsetof(Intro_Text_t3199159032, ___message2_6)); }
	inline bool get_message2_6() const { return ___message2_6; }
	inline bool* get_address_of_message2_6() { return &___message2_6; }
	inline void set_message2_6(bool value)
	{
		___message2_6 = value;
	}

	inline static int32_t get_offset_of_message3_7() { return static_cast<int32_t>(offsetof(Intro_Text_t3199159032, ___message3_7)); }
	inline bool get_message3_7() const { return ___message3_7; }
	inline bool* get_address_of_message3_7() { return &___message3_7; }
	inline void set_message3_7(bool value)
	{
		___message3_7 = value;
	}

	inline static int32_t get_offset_of_message4_8() { return static_cast<int32_t>(offsetof(Intro_Text_t3199159032, ___message4_8)); }
	inline bool get_message4_8() const { return ___message4_8; }
	inline bool* get_address_of_message4_8() { return &___message4_8; }
	inline void set_message4_8(bool value)
	{
		___message4_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
