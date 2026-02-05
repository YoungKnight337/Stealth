#pragma once
#include "raylib.h"

enum class STATE
{
	PATROL = 0,
	SEARCH = 1,
	FOLLOW = 2,
	RELOAD = 3,
	ATTACK = 4,
	SHOOT =5
};

class State
{
protected:
	const char* stateName;
	const STATE stateID;
public:
	State() {}
	~State() {}
	virtual void Enter();
	virtual void Update(float deltaTime);
	virtual void Exit();
};



