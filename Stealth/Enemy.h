#pragma once
#include "raylib.h"
#include "CharacterController.h"

class Enemy: public CharacterController
{
private:
	float;
public:
	Enemy();
	~Enemy();
	void Update(float deltaTime);
	void Draw();

};

