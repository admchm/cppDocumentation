#include <iostream>
#include <string>

class Human
{
private:
	friend void displayAge(const Human& person);
	std::string name;
	int age;

public:
	Human(std::string humansName, int humansAge)
	{
		name = humansName;
		age = humansAge;
	}
};

void displayAge(const Human& person)
{
	std::cout << person.age << "\n";
}

int main()
{
	
	Human firstMan("Adam", 25);
	std::cout << "Accessing private member age via friend function: ";
	displayAge(firstMan);

	return 0;
}