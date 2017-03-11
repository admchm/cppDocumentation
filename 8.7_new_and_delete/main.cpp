#include <iostream>

int main()
{
	// request for memory space for an int
	int* pointsToAnAge = new int;

	// use the allocated memory to store a number
	std::cout << "Enter your dog's age: ";
	std::cin >> *pointsToAnAge;

	// use indirection operator* to access value
	std::cout << "Age " << *pointsToAnAge << " is stored at 0x" << pointsToAnAge << "\n";

	delete pointsToAnAge;    // release memory

	return 0;
}