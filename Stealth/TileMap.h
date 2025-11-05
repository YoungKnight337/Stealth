#pragma once
#include "raylib.h"

class Tile;

class TileMap
{
private:
	Tile** map[n];
public:
	TileMap();
	~TileMap();
	void Draw();
	void Update(float deltaTime);
	void Load();
};

