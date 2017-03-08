#include <iostream>

int main()
{
	unsigned int unsignedIntVal = 0;
	std::cout << "Size of unsigned int value = " << sizeof(unsignedIntVal) << "\n";

	int signedIntVal = 0;
	std::cout << "Size of signed int value = " << sizeof(signedIntVal) << "\n";

	long int longIntVal = 11111111;
	std::cout << "Size of long int value = " << sizeof(longIntVal) << "\n";

	return 0;
}