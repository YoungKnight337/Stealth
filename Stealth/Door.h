#pragma once
class Door: public Interactable
{
private:
	bool locked;
public:
	Door();
	~Door();
	void Draw();
	void Update(float deltaTime);
};

