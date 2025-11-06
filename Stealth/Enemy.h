#pragma once
#include "raylib.h"
#include "CharacterController.h"

enum STATE
{
	PATROL = 0,
	FOLLOW = 1,
	ATTACK = 2
};

enum TYPE
{
	CREEP = 0,
	BRUTE = 1 
};

class Enemy: public CharacterController
{
private:
	int STATE;
	int TYPE;
	int height = 50;
	int width = 50;
	float lineofSight;
	bool isNPC = true;
	Vector2 position;
	Color color = RED;
public:
	Enemy();
	~Enemy();
	void Update(float deltaTime);
	void Draw();
	void Move();
	void Follow();
	void Patrol();
	void Attack();
};



