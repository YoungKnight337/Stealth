#pragma once
#include <vector>
#include "raylib.h"

class State;
class Enemy;

class FiniteStateMachine
{
private:
	State* currentState;
	std::vector<State*> m_states;
public:
	virtual ~FiniteStateMachine();
	void Update();
	void InitializeStates(Agent& Enemy);
	void StateTransition(State* newState);
	void AddState(State* state);
	
};

