#include <iostream>

/* list initialization is a technique that prevents narrowing */
int main()
{
	int largeNum = 5'000'000;			// using chunking separators (C++14 feature)

	/*
	short anotherNum{ largeNum };		// OK
	short anotherNum = largeNum;		// ERROR
	
	int anotherNum{ largeNum };			// OK

	float someFloat{ largeNum };        // ERROR
	float someFloat = largeNum;         // accepted by the compiler
	*/

	return 0;
}