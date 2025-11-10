#pragma once
#include "raylib.h"

enum TYPE
{
	PLAYER = 0,
	ENEMY  = 1
};

class CharacterController
{
private:
	int TYPE;
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
	void Draw();
	void Movement();
	void Damage(int health);
	void Attack();
	void Look();
	void Interact();

};

