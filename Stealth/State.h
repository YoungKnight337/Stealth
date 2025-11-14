#pragma once
#include "raylib.h"

class State
{
private:
public:
	void Enter();
	void Update();
	void Exit();
};

class Attack : public State
{

};

class Patrol : public State
{

};

class Follow : public State
{
};