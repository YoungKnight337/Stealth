#pragma once
class Tile
{
private:
	int width;
	int height;
	int weight;
public:
	Tile();
	~Tile();
};

class Wall : public Tile
{
	int weight = 100;
};

