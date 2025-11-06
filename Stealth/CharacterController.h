#pragma once
#include "raylib.h"

class CharacterController
{
private:
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
	void Aim();
	void Interact();

};

