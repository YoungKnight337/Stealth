#pragma once
#include "raylib.h"
#include "CharacterController.h"

enum STATE
{
	PATROL = 0,
	FOLLOW = 1,
	ATTACK = 2,
	DEAD   = 3
};

/*enum TYPE
{
	CREEP = 0,
	BRUTE = 1 
};
*/

enum DIRECTION
{
	LEFT  = 0,
	RIGHT = 1,
	UP    = 2,
	DOWN  = 3
};
class Enemy: public CharacterController
{
private:
	//int TYPE = 1;
	int STATE;
	int TYPE;
	int DIRECTION;
	int height = 50;
	int width  = 50;
	int health = 100;
	float speed;
	float lineofSight;
	bool isAlive = true;
	bool isNPC   = true;
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




