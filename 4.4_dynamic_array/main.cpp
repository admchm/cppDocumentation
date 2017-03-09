#include <iostream>
#include <vector>

int main() 
{
	using std::cout;
	using std::endl;

	std::vector<int> dynamicArray(4);

	dynamicArray[0] = 365;
	dynamicArray[1] = 12;
	dynamicArray[2] = 2222;

	cout << "Number of elements of array: " << dynamicArray.size() << endl;


	cout << "\nElements of the array: " 
		<< "\n" << dynamicArray[0]
		<< "\n" << dynamicArray[1]
		<< "\n" << dynamicArray[2]
		<< "\n" << dynamicArray[3] << endl;

	cout << "\nAdding another element: " << endl;
	dynamicArray.push_back(525252);

	cout << dynamicArray[4] << endl;

	return 0;
}