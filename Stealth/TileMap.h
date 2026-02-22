#pragma once
#include "raylib.h"

//BSP Maze Generation
class Tile;

class TileMap
{
private:
	const static int N = 20;
	Tile** map[N][N];
public:
	TileMap();
	~TileMap();
	void Initialize();
	void Draw();
	void Update(float deltaTime);
	void Load();
};
