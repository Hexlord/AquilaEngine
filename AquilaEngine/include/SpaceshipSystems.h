#pragma once
#include <PrecompiledHeader.h>
#include "ECSCore.h"


struct SpaceshipMovementSystem : public System {
	float elapsed{ 0.0f };

	SpaceshipMovementSystem() { uses_threading = true; };
	virtual ecs::Task schedule(ECS_Registry &registry, ecs::TaskEngine & task_engine, ecs::Task & parent, ecs::Task & grandparent);;

	virtual void update(ECS_Registry &registry, float dt);

private:
	//entt::PersistentView<uint64_t, SpaceshipMovementComponent, TransformComponent> *posview;
	
};