#include <iostream>

/* Always declare the base class destructor as virtual! */

class Fish
{
public:
	Fish()
	{
		std::cout << "Constructed fish\n";
	}

	virtual ~Fish()
	{
		std::cout << "Destroyted fish\n";
	}
};

class Tuna : public Fish
{
public:
	Tuna()
	{
		std::cout << "Constructed tuna\n";
	}

	~Tuna()
	{
		std::cout << "Destroyed tuna\n";
	}
};

void freeMemory(Tuna* objName)
{
	delete objName;
}

int main()
{
	/*
	std::cout << "Allocating a tuna on the free store:\n";
	Tuna *pTuna = new Tuna;
	std::cout << "Deleting the Tuna:\n";
	freeMemory(pTuna);
	*/

	Fish fish;

	return 0;
}