#pragma once
#include "raylib.h"

class Tile;

class TileMap
{
private:
	const static int N = 20;
	Tile** map[N];
public:
	TileMap();
	~TileMap();
	void Draw();
	void Update(float deltaTime);
	void Load();
	void Seed();
};

class Room : public TileMap
{

};