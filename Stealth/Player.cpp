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
	Controls();
}

void Player::Controls()
{
	if (IsKeyDown(KEY_W))
		position.x += speed;
	if (IsKeyDown(KEY_A))
		position.y += speed;
	if (IsKeyDown(KEY_S))
		position.x -= speed;
	if (IsKeyDown(KEY_A))
		position.y -= speed;
	if (IsKeyDown(KEY_SPACE))
		Shoot();
	if (IsKeyDown(KEY_E))
		Interact();
}

void Player::Shoot()
{
	if (hasWeapon)
	{

	}

}

void Player::Interact()
{

}