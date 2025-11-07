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
	int width;
	int height;
	int health;
	float speed;
	bool hasWeapon;
	bool isAlive;
	bool isNPC;
	Vector2 position;
public:
	CharacterController();
	~CharacterController();
	void Update(float deltaTime);
	void Draw();
	void Movement();
	void Damage(int health);
	void Attack();
	void Look();
	void Interact();

};

