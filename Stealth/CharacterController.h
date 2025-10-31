#pragma once
#include "raylib.h"

class CharacterController
{
private:
	Vector2 position;
	float speed;
	int lives;
	int health;
	bool isAlive;
	bool isNPC;
public:
	CharacterController();
	~CharacterController();
	void Update(float deltaTime);
	void Draw();
	void Movement();
	void Damage(int health);
	void Shoot();

};

