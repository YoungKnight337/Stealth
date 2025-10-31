#pragma once
#include "raylib.h"

class CharacterController
{
private:
	Vector2 position;
	float speed;
	int lives;
public:
	CharacterController();
	~CharacterController();
	void Update(float deltaTime);
	void Draw();

};

