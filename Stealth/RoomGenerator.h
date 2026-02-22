#pragma once
#include "raylib.h"
 
class TileMap;
class Door;
class Wall;
class Floor;
class Key;
class Enemy;
//BSP Maze Generation

class RoomGenerator
{
private:
	TileMap* room;
public:
	RoomGenerator();
	~RoomGenerator();
	void Seed();
};

