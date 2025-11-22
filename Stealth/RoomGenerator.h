#pragma once
#include "raylib.h"
 
class TileMap;

class RoomGenerator
{
private:
	TileMap* room;
public:
	RoomGenerator();
	~RoomGenerator();
};

