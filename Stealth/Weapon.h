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

class Weapon : public Pickup
{
private:
	int w_type;
	int width;
	int height;
	int damage;
	int range;
	int ammo;
	int rateofFire;
	bool isPicked;
	bool isFirearm;
	Color color;
	Vector2 position;
public:
	Weapon();
	~Weapon();
	void Draw();
	void Update(float deltaTime);
	void Interact();
	void Shoot();
	void Reload(int i);
	int GetAmmo() { return ammo; }
};

class Knife : public Weapon
{
	enum w_type : 0;
	int width : 3;
	int height : 5;
	int damage : 10;
	int range : 10;
	bool isFirearm = false;
	Color color = LIGHTGRAY;
};

class Bat : public Weapon
{
	enum w_type : 1;
	int width : 3;
	int height : 5;
	int damage : 10;
	int range : 10;
	bool isFirearm = false;
	Color color = BEIGE;
};

class Wrench : public Weapon
{
	enum w_type : 2;
	int width : 3;
	int height : 5;
	int damage : 10;
	int range : 10;
	bool isFirearm = false;
	Color color = DARKGRAY;
};

class Pistol : public Weapon
{
	enum w_type : 3;
	int width : 5;
	int height : 5;
	int damage : 10;
	int range : 200;
	int ammo : 12;
	int rateofFire : 1;
	bool isFirearm = true;
	Color color = DARKGRAY;
};

class Shotgun : public Weapon
{
	enum w_type : 4;
	int width : 10;
	int height : 5;
	int damage : 25;
	int range : 100;
	int ammo : 8;
	int rateofFire : 1;
	bool isFirearm = true;
	Color color = DARKGRAY;
};

class Rifle : public Weapon
{
	enum w_type : 5;
	int width : 8;
	int height : 5;
	int damage : 15;
	int range : 300;
	int ammo : 30;
	int rateofFire : 1;
	bool isFirearm = true;
	Color color = BROWN;
};
