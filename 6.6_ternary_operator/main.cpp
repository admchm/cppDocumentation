#include <iostream>

int main()
{
	using std::cout;
	using std::cin;
	
	int higherVal, lowerVal;
	higherVal = 52;
	lowerVal = 11;						    /* returns when:
										     true     false */
	int result = (lowerVal < higherVal) ? lowerVal : higherVal;

	cout << "Lower val is " << lowerVal << "\n";

	return 0;
}