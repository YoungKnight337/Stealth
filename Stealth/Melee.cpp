#include "Melee.h"

Melee::Melee()
{

}

Melee::~Melee()
{

}

virtual void Melee::Interact()
{

}

virtual void Melee::Update(float deltaTime)
{

}

void Knife::Draw()
{
	DrawRectangle(position.x, position.y, width, height, color);
}

void Bat::Draw()
{

}
