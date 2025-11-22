#pragma once
#include "raylib.h"
class Command
{
private:
public:
	Command();
	~Command();
	virtual void execute() = 0;
};

class MoveCommand : public Command
{
private:
public: 
	MoveCommand();
	~MoveCommand();
	void execute(); //{ move(); };
};