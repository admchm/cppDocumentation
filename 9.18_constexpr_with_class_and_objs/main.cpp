#include <iostream>

/* constexpr used with classes and objects that evaluate as constants. 
   Compiler would ignore constexpr when the function or class is used with entities that are not constant */

class Human
{
private:
	int age;

public:
	constexpr Human(int humansAge) :age(humansAge) {}
	constexpr int getAge() const
	{
		return age;
	}
};

int main()
{
	constexpr Human somePerson(15);
	const int hisAge = somePerson.getAge();

	Human anotherPerson(45); // not constant expression, so won't be treated like a constexpr
}