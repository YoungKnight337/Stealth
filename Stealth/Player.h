#pragma once
#include "CharacterController.h"

class Player:  public CharacterController
{
private:
	
public:
	Player();
	~Player();
	void Update(float deltaTime) override;
	void Draw();
};

