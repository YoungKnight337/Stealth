#pragma once
#include "raylib.h"

class Pickup
{
private:
	int width;
	int height;
	Color color;
	Vector2 position;
public:
	Pickup();
	Pickup();
	void Draw();
	void Update(float deltaTime);
};

class Key : public Pickup
{
private:
	int width;
	int height;
	Color color;
	Vector2 position;
public:
	Key();
	~Key();
	void Draw();
	void Update(float deltaTime);
};