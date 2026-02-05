#pragma once
#include "raylib.h"
#include "Pickup.h"
class Melee:public Pickup
{
public:
	Melee();
	~Melee();
	void Draw();
	void Update(float deltaTime);
	void Interact();
};

class Knife : public Melee
{
	enum w_type : 0;
	int width : 3;
	int height : 5;
	int damage : 10;
	int range : 10;
	bool isFirearm = false;
	Color color = LIGHTGRAY;
};

class Bat : public Melee
{
	enum w_type : 1;
	int width : 3;
	int height : 5;
	int damage : 10;
	int range : 10;
	bool isFirearm = false;
	Color color = BEIGE;
};

class Wrench : public Melee
{
	enum w_type : 2;
	int width : 3;
	int height : 5;
	int damage : 10;
	int range : 10;
	bool isFirearm = false;
	Color color = DARKGRAY;
};