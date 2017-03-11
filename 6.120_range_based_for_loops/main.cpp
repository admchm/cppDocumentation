#include <iostream>

int main()
{
	std::cout << "Values from the array:\n";
	int favoriteNums[] = { 1, 2, 3, 7, 52, 101 };

	for (int nums : favoriteNums)
	{
		 std::cout << nums << " ";
	}
	std::cout << "\n";

	// when nums var is a const int &
	for (const int& nums : favoriteNums)
	{
		std::cout << nums << " ";
	}
	std::cout << "\n";

	// when nums var is derived from auto
	for (auto nums : favoriteNums)
	{
		std::cout << nums << " ";
	}
	std::cout << "\n";

	return 0;
}