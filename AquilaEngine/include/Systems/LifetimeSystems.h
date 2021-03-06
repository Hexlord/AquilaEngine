#pragma once

#include <PrecompiledHeader.h>


struct DestructionSystem : public System {

	struct ExplosionSpawnStruct {
		XMFLOAT3 position;
	};
	struct QueueTraits : public moodycamel::ConcurrentQueueDefaultTraits
	{
		static const size_t BLOCK_SIZE = 256;		// Use bigger blocks
	};
	
	moodycamel::ConcurrentQueue<decs::EntityID, QueueTraits> EntitiesToDelete_decs;
	moodycamel::ConcurrentQueue<ExplosionSpawnStruct, QueueTraits> ExplosionsToSpawn;
	DestructionSystem() { };
	
	virtual void update(ECS_GameWorld & world);
};

struct ExplosionFXSystem : public System {

	ExplosionFXSystem() { };

	virtual void update(ECS_GameWorld& world);
};

struct RandomFlusherSystem : public System {

	RandomFlusherSystem() {  };
};