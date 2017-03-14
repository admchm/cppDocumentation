#include <iostream>

class Fish
{
public:
	void swim()
	{
		std::cout << "Fish swims... !\n";
	}	

	void swim(bool isFreshWaterFish)	// overloaded version
	{
		if (isFreshWaterFish)
		{
			std::cout << "Swims in lake\n";
		}
		else
		{
			std::cout << "Swims in sea\n";
		}
	}
};

class Tuna : public Fish
{
public:
	void swim()
	{
		std::cout << "Tuna swims real fast\n";
	}
};

int main() 
{
	Tuna myDinner;
	std::cout << "About my food\n";

	//myDinner.swim(false); // failure: Tuna.swim() hides fish::swim(bool)
	//myDinner.swim();
	//myDinner.Fish::swim(false);


	return 0;
}


