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

}

void Enemy::Follow()
{

}