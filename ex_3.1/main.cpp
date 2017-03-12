#include <iostream>

void myFunction(const int&, int&);

int main()
{
	int *pointToAnInt = new int;
	*pointToAnInt = 9;
	
	std::cout << *pointToAnInt<< "\n";
	
	return 0;
}


