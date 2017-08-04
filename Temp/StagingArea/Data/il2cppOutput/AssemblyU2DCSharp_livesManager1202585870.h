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
// livesManager
struct livesManager_t1202585870;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// livesManager
struct  livesManager_t1202585870  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 livesManager::maxLives
	int32_t ___maxLives_2;
	// UnityEngine.UI.Text livesManager::livesText
	Text_t356221433 * ___livesText_4;

public:
	inline static int32_t get_offset_of_maxLives_2() { return static_cast<int32_t>(offsetof(livesManager_t1202585870, ___maxLives_2)); }
	inline int32_t get_maxLives_2() const { return ___maxLives_2; }
	inline int32_t* get_address_of_maxLives_2() { return &___maxLives_2; }
	inline void set_maxLives_2(int32_t value)
	{
		___maxLives_2 = value;
	}

	inline static int32_t get_offset_of_livesText_4() { return static_cast<int32_t>(offsetof(livesManager_t1202585870, ___livesText_4)); }
	inline Text_t356221433 * get_livesText_4() const { return ___livesText_4; }
	inline Text_t356221433 ** get_address_of_livesText_4() { return &___livesText_4; }
	inline void set_livesText_4(Text_t356221433 * value)
	{
		___livesText_4 = value;
		Il2CppCodeGenWriteBarrier(&___livesText_4, value);
	}
};

struct livesManager_t1202585870_StaticFields
{
public:
	// System.Int32 livesManager::currentLives
	int32_t ___currentLives_3;
	// livesManager livesManager::instance
	livesManager_t1202585870 * ___instance_5;

public:
	inline static int32_t get_offset_of_currentLives_3() { return static_cast<int32_t>(offsetof(livesManager_t1202585870_StaticFields, ___currentLives_3)); }
	inline int32_t get_currentLives_3() const { return ___currentLives_3; }
	inline int32_t* get_address_of_currentLives_3() { return &___currentLives_3; }
	inline void set_currentLives_3(int32_t value)
	{
		___currentLives_3 = value;
	}

	inline static int32_t get_offset_of_instance_5() { return static_cast<int32_t>(offsetof(livesManager_t1202585870_StaticFields, ___instance_5)); }
	inline livesManager_t1202585870 * get_instance_5() const { return ___instance_5; }
	inline livesManager_t1202585870 ** get_address_of_instance_5() { return &___instance_5; }
	inline void set_instance_5(livesManager_t1202585870 * value)
	{
		___instance_5 = value;
		Il2CppCodeGenWriteBarrier(&___instance_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
