#pragma once
#include "raylib.h"

enum class STATE
{
	PATROL = 0,
	SEARCH = 1,
	FOLLOW = 2,
	ATTACK = 3,
	SHOOT  = 4
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



