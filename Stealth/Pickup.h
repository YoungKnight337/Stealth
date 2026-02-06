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
	virtual ~Pickup();
	virtual void Draw() = 0;
	virtual void Update(float deltaTime) = 0;
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
	virtual void Draw();
	virtual void Update(float deltaTime);
};