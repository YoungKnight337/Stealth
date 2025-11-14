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
private:
public:
};

class Patrol : public State
{
private:
public:

};

class Follow : public State
{
private:
public:
};