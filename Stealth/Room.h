#pragma once
#include "raylib.h"
#include "Tilemap.h"

class Room : public TileMap
{
private:

public:
	Room();
	~Room();
	void Draw();
	void Update(float deltaTime);
};

