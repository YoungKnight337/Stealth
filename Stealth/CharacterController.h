#pragma once
#include "raylib.h"

class CharacterController
{
private:
	Vector2 position;
	float speed;
	int lives;
	bool isAlive;
	bool isNPC;
public:
	CharacterController();
	~CharacterController();
	void Update(float deltaTime);
	void Draw();

};

