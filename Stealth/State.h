#pragma once
#include "raylib.h"

class State
{
private:
public:
	virtual void Enter();
	virtual void Update(float deltaTime);
	virtual void Exit();
};



