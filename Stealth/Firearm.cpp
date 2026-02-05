#include "Weapon.h"

Weapon::Weapon()
{
	
}

Weapon::~Weapon()
{

}

void Weapon::Draw()
{
	DrawRectangle(position.x, position.y, width, height, color);
}

void Weapon::Update(float deltaTime)
{
	
}

/*void Weapon::Interact()
{
	if (isPicked == false)
	{
		//PickUp;
	}
	if (ammo == 0)
	{
		//Drop
	}
	
}
*/

void Weapon::Shoot()
{
	ammo--;
}

void Weapon::Reload(int i)
{
	if (i <= ammo)
	{
		ammo ++;
	}
}