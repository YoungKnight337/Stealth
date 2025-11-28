#pragma once
#include "raylib.h"
#include "State.h"

class Interact: public State
{
private:
public:
	virtual void Enter();
	virtual void Update();
	virtual void Exit();

};

