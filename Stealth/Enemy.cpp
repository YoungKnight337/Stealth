#include "Enemy.h"


Enemy::Enemy()
{

}

Enemy::~Enemy()
{

}

void Enemy::Draw()
{
	DrawRectangle(position.x, position.y, width, height, color);
}

void Enemy::Update(float deltaTime)
{

}

void Enemy::Behavior()
{
	//Patrol()
	//IS PLAYER IN LOS
		//Follow() 
	//ELSE
		//Patrol()

}
void Enemy::Move()
{
	switch (DIRECTION)
	{
	case 0:
		position.x -= speed;
		break;
	case 1:
		position.x += speed;
		break;
	case 2:
		position.y -= speed;
		break;
	case 3:
		position.y += speed;
		break;
	}
}

void Enemy::Follow()
{
	Move();
}

void Enemy::Patrol()
{
	Move();
	//LOS
}

void Enemy::Attack()
{

}