#include <iostream>
#include <string>

class Human
{
private:
	int age;
	std::string name;

public:
	Human(int humansAge = 25, std::string humansName = "Adam")
		:age(humansAge), name(humansName)
	{
		std::cout << "Constructed a human called " << name
			<< ", " << age << " years old\n";
	}
};

int main()
{
	// Human adam;
	Human eve(22, "Eve");

	return 0;
}