#pragma once
#include "CharacterController.h"

class Weapon;

class Player:  public CharacterController
{
private:
	int height = 50;
	int width = 50;
	int lives = 3;
	float speed;
	bool hasWeapon = false;
	Weapon* invent[2];
	Vector2 position;
	Color color = BLUE;
public:
	Player();
	~Player();
	void Update(float deltaTime);
	void Draw();
	void Controls();
	void Attack();
	void Interact();
};

