#pragma once
#include "raylib.h"
#include "Pickup.h"

enum w_type
{
	KNIFE   = 0,
	BAT     = 1,
	WRENCH  = 2,
	PISTOL  = 3,
	SHOTGUN = 4,
	RIFLE   = 5
};

class Firearm : public Pickup
{
private:
	int w_type;
	int width;
	int height;
	int damage;
	int range;
	int ammo;
	bool isPicked;
	bool isReloading;
	Color color;
	Vector2 position;
public:
	Firearm();
	~Firearm();
	void Draw();
	void Update(float deltaTime);
	//void Interact();
	void Shoot();
	void Reload(int i);
	int GetAmmo() { return ammo; }
};


class Pistol : public Firearm
{
	enum w_type : 3;
	int width : 5;
	int height : 5;
	int damage : 10;
	int range : 200;
	int ammo : 12;
	Color color = DARKGRAY;
};

class Shotgun : public Firearm
{
	enum w_type : 4;
	int width : 10;
	int height : 5;
	int damage : 25;
	int range : 100;
	int ammo : 8;
	Color color = DARKGRAY;
};

class Rifle : public Firearm
{
	enum w_type : 5;
	int width : 8;
	int height : 5;
	int damage : 15;
	int range : 300;
	int ammo : 30;
	Color color = BROWN;
};
