#include <iostream>

void getSquare(const int& number, int& result);

int main()
{
	std::cout << "Enter a number you wisth to square: ";
	int number = 0;
	std::cin >> number;

	int square = 0;
	getSquare(number, square);
	std::cout << number << "^2 = " << square << "\n";

	return 0;
}

void getSquare(const int& number, int& result)
{
	result = number * number;
}
