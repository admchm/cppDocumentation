#include <iostream>

class Car {
private:
	Motor heartOfCar;

public:
	void move()
	{
		heartOfCar.switchIgnition();
		heartOfCar.pumpFuel();
		heartOfCar.fireCylinders();
	}
};

class Motor
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


int main()
{
	Car car;

	car.move();

	return 0;
}