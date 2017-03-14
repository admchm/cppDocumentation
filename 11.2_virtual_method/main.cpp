#include <iostream>

class Fish
{
public:
	virtual void swim() {}
};

class Tuna : public Fish
{
public:

	void swim()
	{
		std::cout << "Tuna swims\n";
	}
};


class Carp : public Fish
{
public:

	void swim()
	{
		std::cout << "Carp swims\n";
	}
};

int main()
{

	Tuna tuna;
	tuna.swim();

	Carp carp;
	carp.swim();
	return 0;
}