#pragma once
#include "raylib.h"

class Tile
{
private:
	int width = 20;
	int height = 20;
	int weight;
	Color color;
public:
	void Draw();
	void Update();
};

class Wall : public Tile
{
private:
	int weight = 100;
	Color color = DARKGRAY;
public:
	Wall();
	~Wall();
};

class Floor : public Tile
{
private:
	int weight = 50;
	Color color = LIGHTGRAY;
public:
	Floor();
	~Floor();
};

class Door : public Tile
{
private:
	int weight = 75;
	bool isOpen = false;
	bool locked = true;
	Color color = BROWN;
public:
	Door();
	~Door();

};