#pragma once
#include "CharacterController.h"

class Weapon;

enum DIRECTION
{
	LEFT  = 0,
	RIGHT = 1,
	UP    = 2,
	DOWN  = 3
};

class Player:  public CharacterController
{
private:
	int TYPE = 0;
	int STATE;
	int DIRECTION;
	int width = 20;
	int height = 20;
	int lives = 3;
	float speed;
	bool hasWeapon = false;
	bool isAlive = true;
	Weapon* invent[2];
	Vector2 position;
	Color color = BLUE;
public:
	Player();
	~Player();
	void Update(float deltaTime);
	void Draw();
	void Controls();
	void Move();
	void Interact();
};

