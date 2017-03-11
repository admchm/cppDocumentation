#include <iostream>
#include <string>

int main()
{
	std::cout << "How many integers shall I reserve memory for?\n";
	int numEntries = 0;
	std::cin >> numEntries;

	int* myNumbers = new int[numEntries];

	std::cout << "Memory allocated at: 0x" << myNumbers << "\n";

	delete[] myNumbers;   // deallocate memory

	return 0;
}