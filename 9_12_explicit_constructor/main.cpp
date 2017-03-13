#include <iostream>

class Human
{
private:
	int age;

public:
	// explicit constructor blocks implicit conversions
	explicit Human(int humansAge) : age(humansAge) {};
};

void doSomething(Human person)
{
	std::cout << "Human sent did something\n";
}

int main()
{
	Human kid(10);                  // explicit conversion is OK
	Human anotherKid = Human(11);   // explicit, OK
	doSomething(kid);               // OK

	/*
		Human anotherKid2 = 11;     // failure: implicit conversion not OK
		doSomething(10);            // implicit conversion
	*/

	return 0;
}