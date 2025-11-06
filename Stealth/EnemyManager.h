#pragma once
#include "raylib.h"

class Enemy;

class EnemyManager
{
private:
public:
	EnemyManager();
	~EnemyManager();
	void Update(float deltaTime);
};

