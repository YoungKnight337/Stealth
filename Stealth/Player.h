#pragma once
#include "CharacterController.h"

class Player:  public CharacterController
{
private:
	int height = 50;
	int width = 50;
	Vector2 position;
	Color color = BLUE;
public:
	Player();
	~Player();
	void Update(float deltaTime);
	void Draw();
};

