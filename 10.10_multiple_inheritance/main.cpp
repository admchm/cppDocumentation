#include <iostream>

class Mammal
{
public:
	void feedBabyMilk()
	{
		std::cout << "Mammal: Baby says gulg!\n";
	}
};

class Reptile
{
public:
	void spitVenom()
	{
		std::cout << "Reptile: Shoo enemy! Spits venom!\n";
	}
};

class Bird
{
public:
	void layEggs()
	{
		std::cout << "Bird: laid my eggs, am lighter now!\n";
	}
};

class Platypus : public Mammal, public Reptile, public Bird
{
public:
	void swim()
	{
		std::cout << "Platypus: Voila, I can swim!\n";
	}
};

int main()
{

	Platypus realFreak;
	realFreak.layEggs();
	realFreak.feedBabyMilk();
	realFreak.spitVenom();
	realFreak.swim();

	return 0;
}