#include "Firearm.h"

Firearm::Firearm()
{
	
}

Firearm::~Firearm()
{

}

void Firearm::Draw()
{
	DrawRectangle(position.x, position.y, width, height, color);
}

void Firearm::Update(float deltaTime)
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

void Firearm::Shoot()
{
	ammo--;
}

void Firearm::Reload(int i)
{
	if (i <= ammo)
	{
		ammo ++;
	}
}