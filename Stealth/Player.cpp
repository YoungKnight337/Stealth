#include "Player.h"

Player::Player()
{
}

Player::~Player()
{
}

void Player::Draw()
{
	DrawRectangle(50, 50, width, height, BLUE);
}

void Player::Update(float deltaTime)
{
	Controls();
}

void Player::Controls()
{
	if (IsKeyDown(KEY_W))

	if (IsKeyDown(KEY_A))

	if (IsKeyDown(KEY_S))
		
	if (IsKeyDown(KEY_A))

	if (IsKeyDown(KEY_SPACE))
		Attack();
	if (IsKeyDown(KEY_E))
		Interact();
	if (IsKeyDown(KEY_R))
		Reload();
}
void Player::Move()
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
void Look()
{

}

void Player::Attack()
{
	if (hasWeapon)
	{

	}
}

void Player::Interact()
{

}

void Player::Reload()
{

}