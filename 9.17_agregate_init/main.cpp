#include <iostream>

class MonsterDB
{
private:
	~MonsterDB();

public:

	static void destroyInstance(MonsterDB* pInstance)
	{
		delete pInstance;   // member can invoke private destructor
	}

	void doSomething() {};  // sample empty member method
};

int main()
{
	using std::cout;
	using std::cin;

	MonsterDB* myDB = new MonsterDB();    // on heap
	// uncomment next line to see compile failure
	// delete myDB;                       // private destructor cannot be invoked

	// use static member to release memory
	MonsterDB::destroyInstance(myDB);

	return 0;
}