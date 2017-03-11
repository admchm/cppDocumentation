#include <iostream>

int main()
{
	// requests LOTS of memory space, use nothrow
	/* if allocation request fail, new returns NULL */
	int* pointsToManyNums = new(std::nothrow) int [0x1fffffff];
	
	if (pointsToManyNums) // check pointsToManyNums != NULL
	{
		// use the allocated memory...

		delete[] pointsToManyNums;
	}
	else
	{
		std::cout << "Memory allocation failed. Ending program.\n";
	}

	return 0;
}