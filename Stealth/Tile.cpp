#include "Tile.h"

Tile::Tile()
{

}

Tile::~Tile()
{

}

void Tile::Draw()
{
	DrawRectangle(position.x, position.y, width, height, color);
}



