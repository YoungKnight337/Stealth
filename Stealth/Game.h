#pragma once
#include "raylib.h"

class Player;
class EnemyManager;
class Room;

class Game
{
private:
public:
	Game();
	~Game();
	void Update(float deltaTime);
	void Draw();


};

