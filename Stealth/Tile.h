#pragma once
#include "raylib.h"

class Tile
{
private:
	int width;
	int height;
	int weight;
	Color color;
public:
	Tile();
	~Tile();
};

class Wall : public Tile
{
	int weight = 100;
	Color color = DARKGRAY;
};

class Floor : public Tile
{
	int weight = 50;
	Color color = LIGHTGRAY;
};

