#include "TileMap.h"

TileMap::TileMap()
{
}

TileMap::~TileMap()
{

}

void TileMap::Draw()
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			Tile::Draw();
		}
	}
	
}

void TileMap::Update(float deltaTime)
{

}

void TileMap::Load()
{

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			map[i][j] = nullptr;
		}
	}
}

void TileMap::Seed()
{

}