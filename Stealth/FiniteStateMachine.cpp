#include "FiniteStateMachine.h"

FiniteStateMachine::FiniteStateMachine()
{
	currentState = nullptr;
}

FiniteStateMachine::~FiniteStateMachine()
{

}

void FiniteStateMachine::Update(Enemy& enemy, float deltaTime)
{
    State* newState = nullptr;

    // Check for transitions in the current state
    for (const State::Transition& transition : currentState->GetTransitions())
    {
        if (transition.condition->IsTrue(enemy))
        {
            newState = transition.targetState;
            break;  // If a transition condition is met, break out of the loop
        }
    }

    // If a new state is found, transition to the new state
    if (newState != nullptr && newState != currentState)
    {
        currentState->Exit(enemy);      // Exit the current state
        currentState = newState;        // Change to the new state
        currentState->Enter(enemy);     // Enter the new state (this will change color)
    }

    // Update the current state
    currentState->Update(enemy, deltaTime);
}

void FiniteStateMachine::Enter(Enemy* enemy)
{
    if (currentState)
    {
        currentState->Enter(enemy);
    }
}

void FiniteStateMachine::AddState(State* state)
{

}