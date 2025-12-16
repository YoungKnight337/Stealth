#pragma once
#include "raylib.h"
#include "CharacterController.h"

class Radius;
class State;
class FiniteStateMachine;

enum STATE
{
	PATROL = 0,
	SEARCH = 1,
	FOLLOW = 2,
	ATTACK = 3,
	DEAD   = 4
};

class Enemy: public CharacterController
{
private:
	int STATE;
	int width  = 20;
	int height = 20;
	int health = 100;
	float speed = 50.0f;
	bool isAlive = true;
	bool isNPC   = true;
	Vector2 position;
	Color color = RED;
public:
	Enemy();
	~Enemy();
	void Update(float deltaTime);
	void Draw();
	void Behavior();
	State* m_current;
};

//virtual void Move();
//virtual void Attack();
//virtual void Damage(int health);
//void Patrol();
//void Follow();
//void Reload();



