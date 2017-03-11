#include <iostream>
#include <bitset>

int main()
{
	using std::cout;
	using std::cin;

	cout << "Enter a number (0 - 255): ";
	unsigned short inputNum = 0; 
	cin >> inputNum;

	std::bitset<8> inputBits(inputNum);
	cout << inputNum << " in binary is " << inputBits << "\n\n";

	std::bitset<8> bitwiseNOT = (inputNum);
	cout << "Logical NOT ~\n";
	cout << "~" << inputBits << " = " << bitwiseNOT << "\n\n";

	cout << "Logical AND, & with 00001111\n";
	std::bitset<8> bitwiseAND = (0x0F & inputNum);      // 0x0F is hex for 0001111
	cout << "0001111 & " << inputBits << " = " << bitwiseAND << "\n\n";

	cout << "Logical OR, | with 00001111\n";
	std::bitset<8> bitwiseOR = (0x0F | inputNum);
	cout << "00001111 | " << inputBits << " = " << bitwiseOR << "\n\n";

	cout << "Logical XOR, ^ with 00001111\n";          // exclusive OR
	std::bitset<8> bitwiseXOR = (0x0F ^ inputNum);
	cout << "00001111 ^ " << inputBits << " = " << bitwiseXOR << "\n";

	return 0;
}