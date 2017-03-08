#include <iostream>

int main()
{
	// typedef is useful when dealing with cumbersome types 
	// (like types that are using templates)

	typedef unsigned int STRICTLY_POSITIVE_INTEGER;
	STRICTLY_POSITIVE_INTEGER testVar = 40;

	std::cout << testVar << "\n";

	typedef float FLOAT_ALTERNATIVE;
	FLOAT_ALTERNATIVE testFloatVar{ 3.0f };

	std::cout << testFloatVar << "\n";

	return 0;
}