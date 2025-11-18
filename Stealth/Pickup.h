#pragma once
#include "raylib.h"

class Pickup
{
private:
	int width;
	int height;
	Color color;
	Vector2 position;
};

class Key : public Pickup
{
private:
	int width = 2;
	int height = 2;
	Color color = YELLOW;
	Vector2 position;
public:
	Key();
	~Key();
	void Draw();
	void Update(float deltaTime);
};