#include <iostream>

inline int power(int value);

int main()
{
	using std::cin;
	using std::cout;

	const int predefinedVal = 3;

	cout << "The power of " << predefinedVal << " is = "
		<< power(predefinedVal) << "\n";

	return 0;
}

inline int power(int value)
{
	return value * value;
}
