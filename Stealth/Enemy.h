#pragma once
#include "raylib.h"
#include "CharacterController.h"

class Sight;

enum STATE
{
	PATROL = 0,
	FOLLOW = 1,
	ATTACK = 2,
	DEAD   = 3
};

enum DIRECTION
{
	LEFT  = 0,
	RIGHT = 1,
	UP    = 2,
	DOWN  = 3
};

class Enemy: public CharacterController
{
private:
	int STATE;
	int DIRECTION;
	int width  = 20;
	int height = 20;
	int health = 100;
	float speed;
	float lineofSight;
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
	void Move();
	void Patrol();
	void Follow();
	void Attack();
};

/*
	PATROL
	 
	IF PLAYER IS SEEN
		FOLLOW
		IF PLAYER IS WITHIN RANGE
			ATTACK
		OTHERWISE
			PATROL

*/



