#pragma once
#include "raylib.h"

class Tile;

class TileMap
{
private:
	Tile** map[N];
public:
	TileMap();
	~TileMap();
	void Draw();
	void Update(float deltaTime);
	void Load();
};

