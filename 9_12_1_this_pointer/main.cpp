#include <iostream>

// this is a reserved keyword that contains the address of the object

class Box
{
private:
	double length;
	double breadth;
	double height;

public:
	Box(double l = 2.0, double b = 2.0, double h = 2.0)
	{
		std::cout << "Constructor called\n";
		length = l;
		breadth = b;
		height = h;
	}

	double volume()
	{
		return length * breadth * height;
	}

	int compare(Box box)
	{
		return this->volume() > box.volume();
	}

};

int main()
{
	Box box1(3.3, 1.2, 1.5);
	Box box2(8.5, 6.0, 2.0);

	if (box1.compare(box2))
	{
		std::cout << "Box2 is smaller than box1\n";
	}
	else
	{
		std::cout << "Box2 is equal to larger than box1\n";
	}

	return 0;
}