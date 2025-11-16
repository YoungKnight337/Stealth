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
	void Enter();
	void Update();
	void Exit();
};

class Patrol : public State
{
private:
public:
	void Enter();
	void Update();
	void Exit();

};

class Follow : public State
{
private:
public:
	void Enter();
	void Update();
	void Exit();
};

class Reload : public State
{
private:
public:
	void Enter();
	void Update();
	void Exit();
};

class Search : public State
{
private:
public:
	void Enter();
	void Update();
	void Exit();
};

class Interact : public State
{
private:
public:
	void Enter();
	void Update();
	void Exit();
};