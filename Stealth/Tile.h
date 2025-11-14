#pragma once
#include "raylib.h"

enum type
{
	WALL  = 0,
	FLOOR = 1,
	DOOR  = 2
};

class Tile
{
private:
	int type;
	int width;
	int height;
	int weight;
	Vector2 position;
	Color color;
public:
	void Draw();
};

class Wall : public Tile
{
private:
	enum type  : 0;
	int width  : 20;
	int height : 20;
	int weight : 100;
	Vector2 position;
	Color color = DARKGRAY;
public:
	Wall();
	~Wall();
	void Draw();
};

class Floor : public Tile
{
private:
	enum type  : 1;
	int width  : 20;
	int height : 20;
	int weight : 50;
	Vector2 position;
	Color color = LIGHTGRAY;
public:
	Floor();
	~Floor();
	void Draw();
};

class Door : public Tile
{
private:
	enum type  : 2;
	int width  : 20;
	int height : 20;
	int weight : 75;
	bool isOpen = false;
	bool locked = true;
	Vector2 position;
	Color color = BROWN;
public:
	Door();
	~Door();
	void Draw() 
	{
		DrawRectangle(position.x, position.y, width, height, color);
	}
	void Update();
};