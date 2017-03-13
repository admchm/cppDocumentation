#include <iostream>
#include <string>

class President
{

private:
	
	President() {};                                     // private default constructor
	President(const President&);                        // private copy constructor
	const President& operator=(const President&);       // assignment operator

	std::string name;

public:
	static President& getInstance()
	{
		// static objs are constructed only once
		static President onlyInstance;
		return onlyInstance;
	}

	std::string getName() 
	{ return name; }

	void setName(std::string inputName) 
	{ name = inputName; }
};

int main()
{
	using std::cout;
	using std::cin;
	
	President& onlyPresident = President::getInstance();
	onlyPresident.setName("Abraham Lincoln");

	// uncoment lines to see how compile failures prohibit duplicates
	// President second;                           // cannot access constructor
	// President* third = new President();         // cannot access constructor
	// President fourth = onlyPresident;           // cannot access copy constructor
	// onlyPresident = President::getInstance();   // cannot access operator=

	cout << "The name of the President is: "
		<< President::getInstance().getName() << "\n";

	return 0;
}