#pragma once
#include "raylib.h"
#include "Pickup.h"

enum e_type
{
	KNIFE  = 0,
	BAT    = 1,
	WRENCH = 2,
};

class Melee: public Pickup
{
private: 
	int e_type;
	int width;
	int height;
	int damage;
	int range;
	Vector2 position;


public:
	Melee();
	~Melee();
	virtual void Interact();
	virtual void Draw();
	virtual void Update(float deltaTime);
	virtual void Interact();
};

class Knife : public Melee
{
	enum w_type : 0;
	int width : 3;
	int height : 5;
	int damage : 10;
	int range : 10;
	Color color = LIGHTGRAY;
};

class Bat : public Melee
{
	enum w_type : 1;
	int width : 3;
	int height : 5;
	int damage : 10;
	int range : 10;
	Color color = BEIGE;
};

class Wrench : public Melee
{
	enum w_type : 2;
	int width : 3;
	int height : 5;
	int damage : 10;
	int range : 10;
	Color color = DARKGRAY;
};