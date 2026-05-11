#pragma once
#include "raylib.h"

enum class STATE
{
	PATROL = 0,
	FOLLOW = 1,
	ATTACK = 2,
};

class State
{
protected:
	const char* stateName;
	const STATE stateID;
public:
	State();
	~State();
	virtual void Enter();
	virtual void Update(float deltaTime);
	virtual void Exit();
};



