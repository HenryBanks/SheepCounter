#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;
// HeartSystem
struct HeartSystem_t3448635605;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HeartSystem
struct  HeartSystem_t3448635605  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 HeartSystem::maxHeart
	int32_t ___maxHeart_2;
	// System.Int32 HeartSystem::startHeart
	int32_t ___startHeart_3;
	// System.Int32 HeartSystem::curHealth
	int32_t ___curHealth_4;
	// System.Int32 HeartSystem::maxHealth
	int32_t ___maxHealth_5;
	// System.Int32 HeartSystem::livePerHeart
	int32_t ___livePerHeart_6;
	// UnityEngine.GameObject[] HeartSystem::healthImages
	GameObjectU5BU5D_t3057952154* ___healthImages_7;
	// UnityEngine.Sprite[] HeartSystem::healthSprites
	SpriteU5BU5D_t3359083662* ___healthSprites_8;

public:
	inline static int32_t get_offset_of_maxHeart_2() { return static_cast<int32_t>(offsetof(HeartSystem_t3448635605, ___maxHeart_2)); }
	inline int32_t get_maxHeart_2() const { return ___maxHeart_2; }
	inline int32_t* get_address_of_maxHeart_2() { return &___maxHeart_2; }
	inline void set_maxHeart_2(int32_t value)
	{
		___maxHeart_2 = value;
	}

	inline static int32_t get_offset_of_startHeart_3() { return static_cast<int32_t>(offsetof(HeartSystem_t3448635605, ___startHeart_3)); }
	inline int32_t get_startHeart_3() const { return ___startHeart_3; }
	inline int32_t* get_address_of_startHeart_3() { return &___startHeart_3; }
	inline void set_startHeart_3(int32_t value)
	{
		___startHeart_3 = value;
	}

	inline static int32_t get_offset_of_curHealth_4() { return static_cast<int32_t>(offsetof(HeartSystem_t3448635605, ___curHealth_4)); }
	inline int32_t get_curHealth_4() const { return ___curHealth_4; }
	inline int32_t* get_address_of_curHealth_4() { return &___curHealth_4; }
	inline void set_curHealth_4(int32_t value)
	{
		___curHealth_4 = value;
	}

	inline static int32_t get_offset_of_maxHealth_5() { return static_cast<int32_t>(offsetof(HeartSystem_t3448635605, ___maxHealth_5)); }
	inline int32_t get_maxHealth_5() const { return ___maxHealth_5; }
	inline int32_t* get_address_of_maxHealth_5() { return &___maxHealth_5; }
	inline void set_maxHealth_5(int32_t value)
	{
		___maxHealth_5 = value;
	}

	inline static int32_t get_offset_of_livePerHeart_6() { return static_cast<int32_t>(offsetof(HeartSystem_t3448635605, ___livePerHeart_6)); }
	inline int32_t get_livePerHeart_6() const { return ___livePerHeart_6; }
	inline int32_t* get_address_of_livePerHeart_6() { return &___livePerHeart_6; }
	inline void set_livePerHeart_6(int32_t value)
	{
		___livePerHeart_6 = value;
	}

	inline static int32_t get_offset_of_healthImages_7() { return static_cast<int32_t>(offsetof(HeartSystem_t3448635605, ___healthImages_7)); }
	inline GameObjectU5BU5D_t3057952154* get_healthImages_7() const { return ___healthImages_7; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_healthImages_7() { return &___healthImages_7; }
	inline void set_healthImages_7(GameObjectU5BU5D_t3057952154* value)
	{
		___healthImages_7 = value;
		Il2CppCodeGenWriteBarrier(&___healthImages_7, value);
	}

	inline static int32_t get_offset_of_healthSprites_8() { return static_cast<int32_t>(offsetof(HeartSystem_t3448635605, ___healthSprites_8)); }
	inline SpriteU5BU5D_t3359083662* get_healthSprites_8() const { return ___healthSprites_8; }
	inline SpriteU5BU5D_t3359083662** get_address_of_healthSprites_8() { return &___healthSprites_8; }
	inline void set_healthSprites_8(SpriteU5BU5D_t3359083662* value)
	{
		___healthSprites_8 = value;
		Il2CppCodeGenWriteBarrier(&___healthSprites_8, value);
	}
};

struct HeartSystem_t3448635605_StaticFields
{
public:
	// HeartSystem HeartSystem::instance
	HeartSystem_t3448635605 * ___instance_9;

public:
	inline static int32_t get_offset_of_instance_9() { return static_cast<int32_t>(offsetof(HeartSystem_t3448635605_StaticFields, ___instance_9)); }
	inline HeartSystem_t3448635605 * get_instance_9() const { return ___instance_9; }
	inline HeartSystem_t3448635605 ** get_address_of_instance_9() { return &___instance_9; }
	inline void set_instance_9(HeartSystem_t3448635605 * value)
	{
		___instance_9 = value;
		Il2CppCodeGenWriteBarrier(&___instance_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
