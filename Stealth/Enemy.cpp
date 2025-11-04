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
	//Move left
	//Move Right
	//Move Up
	//Move Down
}

void Enemy::Follow()
{

}