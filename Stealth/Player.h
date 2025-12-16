#pragma once
#include "CharacterController.h"

class Key;
class Door;
class Enemy;
class Weapon;
class Radius;

enum STATE
{
	ATTACK,
	RELOAD,
	INTERACT,
};
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
	float speed = 50.0f;
	bool hasWeapon = false;
	bool isAlive = true;
	bool isNPC = false;
	Weapon* invent[2];
	Vector2 position;
	Color color = BLUE;
public:
	Player();
	~Player();
	void Update(float deltaTime);
	void Draw();
	void Controls();
	void Damage(int health);
	void Move();
	void Interact();
	void Attack();
};

