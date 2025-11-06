#pragma once
#include "raylib.h"
#include "CharacterController.h"

enum STATE
{
	PATROL,
	FOLLOW,
	ATTACK
};

class Enemy: public CharacterController
{
private:
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



