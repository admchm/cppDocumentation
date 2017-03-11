#include <iostream>

void calcArea(const double* const ptrPi, // const pointer to const data
	const double* const ptrRadius,       // i.e.
	double* const  ptrArea);             // const pointer to non-const data 

int main()
{
	const double pi = 3.1416;

	std::cout << "Enter the radius of the circle: ";
	double radius = 0;
	std::cin >> radius;

	double area = 0;
	calcArea(&pi, &radius, &area);

	std::cout << "Area is = " << area << "\n";

	return 0;
}

void calcArea(const double* const ptrPi,
	const double* const ptrRadius,
	double* const  ptrArea)
{
	// check pointer validity before using!
	if (ptrPi && ptrRadius && ptrArea)
	{
		*ptrArea = (*ptrPi) * (*ptrRadius) * (*ptrRadius);
	}

	return;
}
