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
	void Execute(); //{ Move(); };
};