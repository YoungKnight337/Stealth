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
	FiniteStateMachine();
	~FiniteStateMachine();
	void Update(Enemy& enemy);
	void InitializeStates(Enemy& enemy);
	void StateTransition(State* newState);
	void AddState(State* state);
	
};

