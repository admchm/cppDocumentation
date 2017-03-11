#include <iostream>

// prototype with defaul value
/* we can have multiple params with default values;
however, these should all be at the tail end of the
param list*/

double area(double, double pi = 3.14);

int main()
{
	using std::cin;
	using std::cout;

	cout << "Enter radius: ";
	double radius = 0;
	cin >> radius;

	// ignoring 2nd param in this case, pi has default val
	cout << "Area is: " << area(radius) << "\n"; 
	
	cout << "Area with longer val of pi: " << area(radius, 3.141592) << "\n";

	return 0;
}

double area(double radius, double pi)
{
	return pi * radius * radius;
}