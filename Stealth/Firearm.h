#pragma once
#include "raylib.h"
#include "Pickup.h"

enum fa_type
{
	PISTOL  = 0,
	SHOTGUN = 1,
	RIFLE   = 2
};

class Firearm : public Pickup
{
private:
	int fa_type;
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
	void Interact();
	void Shoot();
	void Reload(int i);
	int GetAmmo() { return ammo; }
	int SetAmmo() { return ammo; }
};


class Pistol : public Firearm
{
	enum fa_type : 3;
	int width : 5;
	int height : 5;
	int damage : 10;
	int range : 200;
	int ammo : 12;
	Color color = DARKGRAY;
};

class Shotgun : public Firearm
{
	enum fa_type : 4;
	int width : 10;
	int height : 5;
	int damage : 25;
	int range : 100;
	int ammo : 8;
	Color color = DARKGRAY;
};

class Rifle : public Firearm
{
	enum fa_type : 5;
	int width : 8;
	int height : 5;
	int damage : 15;
	int range : 300;
	int ammo : 30;
	Color color = BROWN;
};
