#include "Player.h"

Player::Player()
{
}

Player::~Player()
{
}

void Player::Draw()
{
	DrawRectangle(position.x,position.y, width, height, BLUE);
}

void Player::Update(float deltaTime)
{
	Controls();
}

void Player::Controls()
{
	if (IsKeyDown(KEY_W))
		DIRECTION = 2;
	if (IsKeyDown(KEY_A))
		DIRECTION = 0;
	if (IsKeyDown(KEY_S))
		DIRECTION = 3;
	if (IsKeyDown(KEY_A))
		DIRECTION = 1;
	if (IsKeyDown(KEY_SPACE))
	if (IsKeyDown(KEY_E))
		Interact();
	if (IsKeyDown(KEY_R));
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

void Player::Interact()
{

}

