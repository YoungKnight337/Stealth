#include "Weapon.h"

Weapon::Weapon()
{
	
}

Weapon::~Weapon()
{

}

void Weapon::Draw()
{

}

void Weapon::Update(float deltaTime)
{
	
}

void Weapon::Interact()
{
	if (isPicked == false)
	{
		PickUp;
	}
	if (ammo == 0)
	{
		//Drop
	}
}

void Weapon::Shoot()
{
	ammo--;
}