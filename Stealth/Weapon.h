#pragma once
#include "raylib.h"
class Weapon
{
private:
	int damage;

public:
	Weapon();
	~Weapon();
	void Draw();
	void Update(float deltaTime);


};

