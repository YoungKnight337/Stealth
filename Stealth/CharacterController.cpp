#include "CharacterController.h"

CharacterController::CharacterController()
{
}

CharacterController::~CharacterController()
{
}

void CharacterController::Draw()
{
	//Draw Character
}

void CharacterController::Movement()
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

void CharacterController::Damage(int health)
{

}

void CharacterController::Attack()
{

}

void CharacterController::Attack()
{

}

void CharacterController::Interact()
{

}