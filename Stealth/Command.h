#pragma once
#include "raylib.h"
class Command
{
private:
public:
	Command();
	~Command();
	virtual void Execute() = 0;
};

class MoveCommand : public Command
{
private:
public: 
	MoveCommand();
	~MoveCommand();
	virtual void Execute(); //{ Move(); };
};

class AttackCommand :public Command
{
private:
public:
	AttackCommand();
	~AttackCommand();
	virtual void Execute(); //{ Attack(); };
};

class ReloadCommand : public Command
{
private:
public:
	ReloadCommand();
	~ReloadCommand();
	virtual void Execute(); //{ Reload(); };
};

class InteractCommand : public Command
{
private:
public:
	InteractCommand();
	~InteractCommand();
	virtual void Execute(); //{ Interact(); };
};