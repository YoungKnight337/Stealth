#pragma once
#include "raylib.h"

class State
{
private:
public:
	virtual void Enter();
	virtual void Update();
	virtual void Exit();
};


class Search : public State
{
private:
public:
	virtual void Enter();
	virtual void Update();
	virtual void Exit();
};

