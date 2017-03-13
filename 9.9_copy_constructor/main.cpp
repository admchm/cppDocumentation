/* define a copy constructor to ensure deep copy of dynamically allocated buffers */

#include <iostream>
#include <string.h>

using std::cout;

class MyString
{
private:
	char* buffer;

public:
	MyString(const char* initString);
	MyString(const MyString& object);    // copy constructor
	~MyString();

	int getLength();
	const char* getString();
};

MyString::MyString(const char* initString)
{
	buffer = NULL;
	std::cout << "Default constructor: creating new MyString\n";
	if (initString != NULL)
	{
		buffer = new char [strlen(initString) + 1];
		strcpy(buffer, initString);
	}

	std::cout << "buffer points to: 0x" << std::hex;
	std::cout << (unsigned int*)buffer << "\n";
}

/* This copy constructor is doing almost the same stuff like basic constructor is doing,
   but instead of passing initString by pointer MyString obj is passed by reference,
   because I want to do a deep copy, instead shallow */

MyString::MyString(const MyString& sayHello)
{
	buffer = NULL;
	std::cout << "Default constructor: creating new MyString\n";
	if (sayHello.buffer != NULL)
	{
		buffer = new char[strlen(sayHello.buffer) + 1];
		strcpy(buffer, sayHello.buffer);
	}

	std::cout << "buffer points to: 0x" << std::hex;
	std::cout << (unsigned int*)buffer << "\n";
}

MyString::~MyString()
{
	std::cout << "Invoking destructor, clearning up\n";
	if (buffer != NULL)
	{
		delete[] buffer;
	}
}

int MyString::getLength()
{
	return strlen(buffer);
}

const char* MyString::getString()
{
	return buffer;
}

void useMyString(MyString sayHello)  // if we have some objects that contain raw pointers and we are copying that obj without 
{                                    // copy constructor, data will be corrupted
	std::cout << "String buffer in sayHello is " << sayHello.getLength();
	std::cout << " characters long\n";

	std::cout << "Buffer contains: " << sayHello.getString() << "\n";
}

int main()
{

	MyString sayHello("Hello 123456\n");
	
	useMyString(sayHello);	 /* 
						      if in this case I could use something like: 
						      MyString overwrite("message"), overwrite = sayHello,
							  then it would be a shallow copy, because we don't have
							  a copy assignment operator=

							  we need something like:
							  MyString::operator= (const MyString& copySource) { ... }
						      */

	return 0;
}