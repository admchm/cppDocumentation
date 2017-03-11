#include <iostream>

int main()
{
	using std::cout;
	
	int startValue = 101;
	cout << "Start value of integer being operated: " << startValue << "\n";

	int postFixIncrement = startValue++;
	cout << "Result of postfix increment = " << postFixIncrement << "\n";
	cout << "After postfix increment, start value = " << startValue << "\n";

	cout << "\n";

	startValue = 101;
	int prefixIncrement = ++startValue;
	cout << "Result of prefix increment = " << prefixIncrement << "\n";
	cout << "After prefix increment, startValue = " << startValue << "\n";

	cout << "\n";

	startValue = 101;
	int postfixDecrement = startValue--;
	cout << "Result of postfix decrement = " << postfixDecrement << "\n";
	cout << "After postfix decrement, startValue = " << startValue << "\n";

	cout << "\n";

	startValue = 101;
	int prefixDecrement = --startValue;
	cout << "Result of prefix decrement = " << prefixDecrement << "\n";
	cout << "After prefix decrement, startValue = " << startValue << "\n";

	return 0;
}