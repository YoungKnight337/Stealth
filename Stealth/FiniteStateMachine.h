#pragma once
#include <vector>
#include "raylib.h"

class State;

class FiniteStateMachine
{
private:
	State* currentState;
	std::vector<State*> m_states;
public:
	virtual ~FiniteStateMachine();
	void Update();
	void ChangeState(State* newState);
	void AddState(State* state);
};

