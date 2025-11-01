#pragma once
#include "raylib.h"
#include "Interactable.h"

enum
class Weapon : public Interactable
{
private:
	int damage;
	int range;
	int ammo;
	int rateofFire;
public:
	Weapon();
	~Weapon();
	void Draw();
	void Update(float deltaTime);
	void Interact();
};

class Pistol : public Weapon
{
	int damage : 10;
	int range : 200;
	int ammo : 12;
	int rateofFire : 1;
};

class Shotgun : public Weapon
{
	int damage : 25;
	int range : 100;
	int ammo : 8;
	int rateofFire : 1;
};
