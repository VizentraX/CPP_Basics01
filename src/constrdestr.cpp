
/**
 *	constructor / destructor example
 */

#include <iostream>

class Entity
{
public:

	float X, Y;

	Entity()
	{
		X = 10;
		Y = 20;
		std::cout << "Constructed Entity!" << std::endl;
	}

	~Entity()
	{
		std::cout << "Destructed Entity!" << std::endl;
	}

	void Print()
	{
		std::cout << X << ", " << Y << std::endl;
	}
};