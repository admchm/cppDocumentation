#include <iostream>

/* shift op. move the entire bit swquence to the right or to the left,
   and thus can help with multiplication or division by multiples of two,
   apart from having other uses in an application */

int main()
{
	using std::cout;

	cout << "Enter your number: ";
	int inputNum = 0;
	std::cin >> inputNum;

	int halfNum = inputNum >> 1;
	int quarterNum = inputNum >> 2;
	int doubleNum = inputNum << 1;
	int quadrupleNum = inputNum << 2;

	cout << "Half: " << halfNum << "\n";
	cout << "Quarter: " << quarterNum << "\n";
	cout << "Double: " << doubleNum << "\n";
	cout << "Quadruple: " << quadrupleNum << "\n";

	return 0;
}