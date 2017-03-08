#include <iostream>

// constexpr is used for evaluation of the expression at compile time

constexpr double getPi();
constexpr double twicePi();

int main()
{
	using std::cout;
	using std::endl;

	// const double pi = 22.0 / 7;
	const double pi{ 22.0 / 7 };

	cout << "constant pi contains value " << pi << endl;
	cout << "constexpr getPi() returns value " << getPi() << endl;
	cout << "constexpr twicePi() returns value " << twicePi() << endl;

	return 0;
}

constexpr double getPi()   { return 22.0 / 7; }
constexpr double twicePi() { return 2 * getPi(); }