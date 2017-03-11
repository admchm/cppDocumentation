#include <iostream>
#include <string>

const double pi = 3.14159265;

double area(double radius);
double area(double radius, std::string customMessage);

int main()
{
	std::string message = "Overloaded area function was called!\n";

	const int radiusVal = 40;

	std::cout << "Result of basic value: " << area(radiusVal) << "\n\n";
	std::cout << "Result of overloaded function: " << area(radiusVal, message) << "\n";

	return 0;
}

double area(double radius)
{
	return pi * radius * radius;
}

double area(double radius, std::string customMessage)
{
	std::cout << customMessage;
	return pi * radius * radius;
}