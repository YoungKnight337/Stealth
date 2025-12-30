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
    for (const State::Transition& transition : m_currentState->GetTransitions())
    {
        if (transition.condition->IsTrue(enemy))
        {
            newState = transition.targetState;
            break;  // If a transition condition is met, break out of the loop
        }
    }

    // If a new state is found, transition to the new state
    if (newState != nullptr && newState != m_currentState)
    {
        m_currentState->Exit(enemy);      // Exit the current state
        m_currentState = newState;        // Change to the new state
        m_currentState->Enter(enemy);     // Enter the new state (this will change color)
    }

    // Update the current state
    m_currentState->Update(enemy, deltaTime);
}