#include <iostream>
#include <algorithm>
#include <vector>

void displayNums(std::vector<int>&);

int main()
{
	std::vector<int> myNums;
	myNums.push_back(52);
	myNums.push_back(1);
	myNums.push_back(7);
	myNums.push_back(102);

	displayNums(myNums);

	std::cout << "Sorting them in descending order\n";

	sort(myNums.begin(), myNums.end(),
		[](int num1, int num2) { return (num2 < num1); } );

	displayNums(myNums);

	return 0;
}

void displayNums(std::vector<int>& dynArray)
{
	for_each (dynArray.begin(), dynArray.end(),
		[](int element){ std::cout << element << " ";}  // lambda function
		);
	std::cout << "\n";
}

