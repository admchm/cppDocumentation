#include <iostream>

class Fish
{
public:
	// define a pure virtual function swim
	virtual void swim() = 0;
};

class Tuna : public Fish
{
public:
	void swim()
	{
		std::cout << "Tuna swims fast in the sea!\n";
	}
};

class Carp : public Fish
{
public:
	void swim()
	{
		std::cout << "Carp swims slow in the lake!\n";
	}
};

void makeFishSwim(Fish& inputFish)
{
	inputFish.swim();
}

int main()
{

	// Fish myFish;			// Fails, cannot instantiate an abstract base class
	Carp myLunch;
	makeFishSwim(myLunch);

	Tuna myDinner;
	makeFishSwim(myDinner);

	return 0;
}