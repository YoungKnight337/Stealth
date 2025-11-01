#pragma once
#include "raylib.h"
#include "Interactable.h"

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

