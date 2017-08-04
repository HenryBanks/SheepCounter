#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// sheepGenerator
struct  sheepGenerator_t1985949440  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject sheepGenerator::sheepPrefab
	GameObject_t1756533147 * ___sheepPrefab_2;
	// UnityEngine.GameObject sheepGenerator::wolfPrefab
	GameObject_t1756533147 * ___wolfPrefab_3;
	// UnityEngine.Vector3 sheepGenerator::spawnPos
	Vector3_t2243707580  ___spawnPos_4;
	// System.Boolean sheepGenerator::isSpawning
	bool ___isSpawning_5;
	// System.Boolean sheepGenerator::flyingSheep
	bool ___flyingSheep_6;
	// System.Single sheepGenerator::timeAtStart
	float ___timeAtStart_7;
	// System.Single sheepGenerator::timeToNextSheep
	float ___timeToNextSheep_8;
	// System.Single sheepGenerator::initialSpawnDelay
	float ___initialSpawnDelay_9;
	// System.Single sheepGenerator::randomDelay
	float ___randomDelay_10;
	// System.Int32 sheepGenerator::IntAsDiff
	int32_t ___IntAsDiff_12;

public:
	inline static int32_t get_offset_of_sheepPrefab_2() { return static_cast<int32_t>(offsetof(sheepGenerator_t1985949440, ___sheepPrefab_2)); }
	inline GameObject_t1756533147 * get_sheepPrefab_2() const { return ___sheepPrefab_2; }
	inline GameObject_t1756533147 ** get_address_of_sheepPrefab_2() { return &___sheepPrefab_2; }
	inline void set_sheepPrefab_2(GameObject_t1756533147 * value)
	{
		___sheepPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___sheepPrefab_2, value);
	}

	inline static int32_t get_offset_of_wolfPrefab_3() { return static_cast<int32_t>(offsetof(sheepGenerator_t1985949440, ___wolfPrefab_3)); }
	inline GameObject_t1756533147 * get_wolfPrefab_3() const { return ___wolfPrefab_3; }
	inline GameObject_t1756533147 ** get_address_of_wolfPrefab_3() { return &___wolfPrefab_3; }
	inline void set_wolfPrefab_3(GameObject_t1756533147 * value)
	{
		___wolfPrefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___wolfPrefab_3, value);
	}

	inline static int32_t get_offset_of_spawnPos_4() { return static_cast<int32_t>(offsetof(sheepGenerator_t1985949440, ___spawnPos_4)); }
	inline Vector3_t2243707580  get_spawnPos_4() const { return ___spawnPos_4; }
	inline Vector3_t2243707580 * get_address_of_spawnPos_4() { return &___spawnPos_4; }
	inline void set_spawnPos_4(Vector3_t2243707580  value)
	{
		___spawnPos_4 = value;
	}

	inline static int32_t get_offset_of_isSpawning_5() { return static_cast<int32_t>(offsetof(sheepGenerator_t1985949440, ___isSpawning_5)); }
	inline bool get_isSpawning_5() const { return ___isSpawning_5; }
	inline bool* get_address_of_isSpawning_5() { return &___isSpawning_5; }
	inline void set_isSpawning_5(bool value)
	{
		___isSpawning_5 = value;
	}

	inline static int32_t get_offset_of_flyingSheep_6() { return static_cast<int32_t>(offsetof(sheepGenerator_t1985949440, ___flyingSheep_6)); }
	inline bool get_flyingSheep_6() const { return ___flyingSheep_6; }
	inline bool* get_address_of_flyingSheep_6() { return &___flyingSheep_6; }
	inline void set_flyingSheep_6(bool value)
	{
		___flyingSheep_6 = value;
	}

	inline static int32_t get_offset_of_timeAtStart_7() { return static_cast<int32_t>(offsetof(sheepGenerator_t1985949440, ___timeAtStart_7)); }
	inline float get_timeAtStart_7() const { return ___timeAtStart_7; }
	inline float* get_address_of_timeAtStart_7() { return &___timeAtStart_7; }
	inline void set_timeAtStart_7(float value)
	{
		___timeAtStart_7 = value;
	}

	inline static int32_t get_offset_of_timeToNextSheep_8() { return static_cast<int32_t>(offsetof(sheepGenerator_t1985949440, ___timeToNextSheep_8)); }
	inline float get_timeToNextSheep_8() const { return ___timeToNextSheep_8; }
	inline float* get_address_of_timeToNextSheep_8() { return &___timeToNextSheep_8; }
	inline void set_timeToNextSheep_8(float value)
	{
		___timeToNextSheep_8 = value;
	}

	inline static int32_t get_offset_of_initialSpawnDelay_9() { return static_cast<int32_t>(offsetof(sheepGenerator_t1985949440, ___initialSpawnDelay_9)); }
	inline float get_initialSpawnDelay_9() const { return ___initialSpawnDelay_9; }
	inline float* get_address_of_initialSpawnDelay_9() { return &___initialSpawnDelay_9; }
	inline void set_initialSpawnDelay_9(float value)
	{
		___initialSpawnDelay_9 = value;
	}

	inline static int32_t get_offset_of_randomDelay_10() { return static_cast<int32_t>(offsetof(sheepGenerator_t1985949440, ___randomDelay_10)); }
	inline float get_randomDelay_10() const { return ___randomDelay_10; }
	inline float* get_address_of_randomDelay_10() { return &___randomDelay_10; }
	inline void set_randomDelay_10(float value)
	{
		___randomDelay_10 = value;
	}

	inline static int32_t get_offset_of_IntAsDiff_12() { return static_cast<int32_t>(offsetof(sheepGenerator_t1985949440, ___IntAsDiff_12)); }
	inline int32_t get_IntAsDiff_12() const { return ___IntAsDiff_12; }
	inline int32_t* get_address_of_IntAsDiff_12() { return &___IntAsDiff_12; }
	inline void set_IntAsDiff_12(int32_t value)
	{
		___IntAsDiff_12 = value;
	}
};

struct sheepGenerator_t1985949440_StaticFields
{
public:
	// System.Single sheepGenerator::difficulty
	float ___difficulty_11;

public:
	inline static int32_t get_offset_of_difficulty_11() { return static_cast<int32_t>(offsetof(sheepGenerator_t1985949440_StaticFields, ___difficulty_11)); }
	inline float get_difficulty_11() const { return ___difficulty_11; }
	inline float* get_address_of_difficulty_11() { return &___difficulty_11; }
	inline void set_difficulty_11(float value)
	{
		___difficulty_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
