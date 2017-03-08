#include <iostream>

int main()
{
	using std::cout;
	using std::endl;

	enum CardinalDirections 
	{
		North = 24,        // starting from that value
		South,
		East,
		West
	};

	cout << "Displaying directions and their symbolic values\n";
	cout << "North:" << North << endl;
	cout << "South:" << South << endl;
	cout << "East:" << East << endl;
	cout << "West:" << West << endl;

	CardinalDirections windDirection = South;
	CardinalDirections rainDirection = North;

	cout << "\n";
	cout << "Variable windDirection = " << windDirection << endl;
	cout << "Variable rainDirection = " << rainDirection << endl;

	return 0;
}