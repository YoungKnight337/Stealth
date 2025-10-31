#include "Player.h"

Player::Player()
{

}

Player::~Player()
{

}

void Player::Draw()
{
	DrawRectangle(50,50,width,height, BLUE);
}

void Player::Update(float deltaTime)
{

}

void Player::Controls()
{
	if (IsKeyDown(KEY_W))
		postion += speed;
	if (IsKeyDown(KEY_A))
	{

	}
	if (IsKeyDown(KEY_S))
	{
		position -= speed;
	}
	if (IsKeyDown(KEY_A))
	{

	}
	if (IsKeyDown(KEY_SPACE))
	{
		Shoot();
	}
}

void Player::Shoot()
{

}