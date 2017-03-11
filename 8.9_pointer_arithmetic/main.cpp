#include <iostream>

int main()
{
	const int numEntries = 3;

	int* pointsToInts = new int[numEntries];

	std::cout << "Allocated for " << numEntries << " integers \n";
	for (int counter = 0; counter < numEntries; ++counter)
	{
		std::cout << "Enter number " << counter << ": ";
		std::cin >> *(pointsToInts + counter);
	}

	std::cout << "Displaying all numbers entered: \n";
	for (int counter = 0; counter < numEntries; ++counter)
	{
		std::cout << *(pointsToInts++) << " ";
	}

	// return pointer to initial poistion
	pointsToInts -= numEntries;

	delete[] pointsToInts;

	return 0;
}

