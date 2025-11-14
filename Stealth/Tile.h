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
	int width = 20;
	int height = 20;
	int weight;
	Vector2 position;
	Color color;
public:
	void Draw();
};

class Wall : public Tile
{
private:
	enum type : 0;
	int weight = 100;
	Color color = DARKGRAY;
public:
	Wall();
	~Wall();
	void Draw();
};

class Floor : public Tile
{
private:
	enum type : 1;
	int weight = 50;
	Color color = LIGHTGRAY;
public:
	Floor();
	~Floor();
	void Draw();
};

class Door : public Tile
{
private:
	enum type : 2;
	int weight = 75;
	bool isOpen = false;
	bool locked = true;
	Color color = BROWN;
public:
	Door();
	~Door();
	void Draw();
	void Update();
};