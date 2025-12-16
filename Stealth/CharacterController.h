#pragma once
#include "raylib.h"

class FiniteStateMachine;

enum TYPE
{
	PLAYER = 0,
	ENEMY  = 1
};

enum DIRECTION
{
	LEFT = 0,
	RIGHT = 1,
	UP = 2,
	DOWN = 3
};

class CharacterController
{
private:
	int TYPE;
	int DIRECTION;
	int width  = 20;
	int height = 20;
	int health = 100;
	float speed;
	bool hasWeapon;
	bool isAlive;
	bool isNPC;
	Vector2 position;
public:
	CharacterController();
	virtual ~CharacterController();
	virtual void Move() = 0;
	virtual void Damage(int health) = 0;
	virtual void Attack() = 0;
};

