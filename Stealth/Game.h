#pragma once
#include "raylib.h"

class Player;
class EnemyManager;
class TileMap;

class Game
{
private:
	Player* player;
	EnemyManager* spawner;
	TileMap* Room;
public:
	Game();
	~Game();
	void Update(float deltaTime);
	void Draw();


};

