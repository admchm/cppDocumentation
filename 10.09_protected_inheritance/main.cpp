#include <iostream>

class Motor						// takes methods from RaceCar & Car class 
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
	void stop()
	{
		std::cout << "<stopping>\n";
	}
};

class Car : protected Motor
{
public:
	void move()
	{
		switchIgnition();
		pumpFuel();
		fireCylinders();
		stop();
	}
};

class RaceCar : protected Car	// can access public & protected members of Base
{
public:
	void move()
	{
		switchIgnition();		// RaceCar has access to members of base Motor
		pumpFuel();				// due to "protected" inheritance between
		fireCylinders();		// RaceCar & Car, Car & Motor
		fireCylinders();
		fireCylinders();
	}
};

int main()
{
	RaceCar myNewCar;
	myNewCar.move();

	return 0;
}