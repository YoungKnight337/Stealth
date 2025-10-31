#pragma once
#include "raylib.h"
class Weapon
{
private:
	int damage;
	int range;
	int ammo;
public:
	Weapon();
	~Weapon();
	void Draw();
	void Update(float deltaTime);


};

