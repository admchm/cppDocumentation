#include <iostream>
#include <string>

int main()
{
	using std::cout; 
	using std::endl;
	
	// getline
	cout << "Enter your line: " << endl;
	std::string userLine;
	std::getline(std::cin, userLine);
	
	cout << "Your line: " << userLine << endl;

	// concat
	std::string stringToAdd("is just great!");
	std::string concatResult = userLine + " " + stringToAdd + "\n";

	cout << "Entire line is: " << concatResult << endl;

	// size
	cout << "The size of your line is: " << userLine.size() << endl;
	return 0;
}