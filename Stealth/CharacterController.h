#pragma once
#include "raylib.h"

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
	~CharacterController();
	virtual void Movement() = 0;
	virtual void Damage(int health) = 0;
};

