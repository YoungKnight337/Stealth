#pragma once
#include "raylib.h"
#include "IInteractable.h"

class Door: public IInteractable
{
private:
	bool locked;
public:
	Door();
	~Door();
	void Draw();
	void Update(float deltaTime);

};

