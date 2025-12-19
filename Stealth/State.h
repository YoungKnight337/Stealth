#pragma once
#include "raylib.h"

enum class STATE
{
	PATROL = 0,
	SEARCH = 1,
	FOLLOW = 2,
	RELOAD = 3,
	ATTACK = 4
};

class State
{
private:
public:
	virtual void Enter();
	virtual void Update(float deltaTime);
	virtual void Exit();
};



