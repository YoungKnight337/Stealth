#pragma once
#include "raylib.h"
#include "Tilemap.h"

class Room : public TileMap
{
private:
	int id;
public:
	Room();
	~Room();
	void Draw();
	void SeedMap();
	void Update(float deltaTime);
};

