#include <iostream>

/* Public members and methods of class Base can only be consumed 
   by class Derived, but not by anyone else in posession of an instance of 
   derived */

class Motor		// takes methods from Car class
{
public:
	void switchIgnition()
	{
		std::cout << "Ignition ON\n";
	}
	void pumpFuel()
	{
		std::cout << "Fuel in cylinders\n";
	}
	void fireCylinders()
	{
		std::cout << "Vrroooom\n";
	}

};

class Car : private Motor
{
public:
	void move()
	{
		switchIgnition();
		pumpFuel();
		fireCylinders();
	}
};

/* CANNOT ACCESS IN THIS WAY
class Vehicle : private Car
{
public:
	void move()
	{
		switchIgnition();
		pumpFuel();
		fireCylinders();
	}
};
*/

int main()
{
	Car myDreamCar;
	myDreamCar.move();

	// myDreamCar.pumpFuel();	// INACESSIBLE
	


	return 0;
}