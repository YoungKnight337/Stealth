#pragma once
#include "raylib.h"
#include "Interactable.h"

enum w_type
{
	PISTOL = 0,
	SHOTGUN = 1,
	RIFLE = 2
};

class Weapon : public Interactable
{
private:
	int w_type;
	int width;
	int height;
	int damage;
	int range;
	int ammo;
	int rateofFire;
	Color color = DARKGRAY;
	Vector2 position;
public:
	Weapon();
	~Weapon();
	void Draw();
	void Update(float deltaTime);
	void Interact();
	void Shoot();
};

class Pistol : public Weapon
{
	enum w_type : 0;
	int width = 5;
	int height = 5;
	int damage : 10;
	int range : 200;
	int ammo : 12;
	int rateofFire : 1;
};

class Shotgun : public Weapon
{
	enum w_type : 1;
	int width = 10;
	int height = 5;
	int damage : 25;
	int range : 100;
	int ammo : 8;
	int rateofFire : 1;
};

class Rifle : public Weapon
{
	enum w_type : 2;
	int width = 8;
	int height = 5;
	int damage : 15;
	int range : 300;
	int ammo : 30;
	int rateofFire : 1;
};
