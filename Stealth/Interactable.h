#pragma once
#include "raylib.h"

class Interactable
{
private:

public:
	Interactable();
	~Interactable();
	void Draw();
	void Update(float deltaTime);
	void Interact();
};

