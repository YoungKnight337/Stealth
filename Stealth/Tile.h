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
};

class Floor : public Tile
{
	int weight = 50;
};
