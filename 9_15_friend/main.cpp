#include <iostream>
#include <string>

class Human
{
private:
	friend class Utility;
	std::string name;
	int age;

public:
	Human(std::string humansName, int humansAge)
		:name(humansName), age(humansAge) {};
};

class Utility
{
public:
	static void displayAge(const Human& person)
	{
		std::cout << person.age << "\n";
	}
};

int main()
{
	Human firstMan("Adam", 25);
	
	std::cout << "Accessing private member age via friend class: \n";
	Utility::displayAge(firstMan);

	return 0;
}