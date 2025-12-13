#pragma once
#include "raylib.h"
#include "State.h"
class Attack : public State
{
private:
public:
	virtual void Enter();
	virtual void Update(float deltaTime);
	virtual void Exit();
};

