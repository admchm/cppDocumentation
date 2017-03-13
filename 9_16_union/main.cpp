#include <iostream>

union SimpleUnion
{
	int num;		// public by default
	char alphabet;
};

struct ComplexType
{
	enum dataType
	{
		Int, 
		Char
	} Type;

	union Value
	{
		int num;
		char alphabet;

		Value() {};
		~Value() {};
	} value;
};

void displayComplexType(const ComplexType& obj)
{
	switch (obj.Type)
	{
	case ComplexType::Int:
		std::cout << "Union contains number: " << obj.value.num << "\n";
		break;

	case ComplexType::Char:
		std::cout << "Union contains character: " << obj.value.alphabet << "\n";
		break;
	}
}


int main()
{
	SimpleUnion u1, u2;
	u1.num = 2100;
	u2.alphabet = 'C';

	ComplexType myData1, myData2;
	myData1.Type = ComplexType::Int;
	myData1.value.num = 2017;

	myData2.Type = ComplexType::Char;
	myData2.value.alphabet = 'X';

	displayComplexType(myData1);
	displayComplexType(myData2);

	return 0;
}