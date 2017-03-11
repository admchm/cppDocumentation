#include <iostream>

const double pi = 3.14159265;

/* funtion that rely on auto return type deduction needs to be defined 
   before it's invoked */

inline auto area(double radius)
{
	return pi * radius * radius;
}


int main()
{
	using std::cin;
	using std::cout;

	cout << "Enter radius : ";
	double radius = 0;
	
	cin >> radius;
	cout << "Area is: " << area(radius) << "\n";

	return 0;
}

