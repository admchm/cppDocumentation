#include <iostream>
int main() 
{
	using std::cout;
	using std::endl;

	auto coinFlippedHeads = true;
	auto largeNumber = 1'000'000'000'000;

	cout << "coinFlippedHeads = " << coinFlippedHeads;
	cout << ", sizeof(coinFlippedHeads) = " << sizeof(coinFlippedHeads) << endl;

	cout << "largeNumber = " << largeNumber;
	cout << ", sizeof(largeNumber) = " << sizeof(largeNumber) << endl;

	return 0;
}