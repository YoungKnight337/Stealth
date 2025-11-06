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
	Move();
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

}

void Enemy::Patrol()
{

}

void Enemy::Attack()
{

}