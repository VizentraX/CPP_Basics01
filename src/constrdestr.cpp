
/**
 *	constructor / destructor example
 */

/**
 * Example usage:
 *   include constrdestr.h in main
 *	 call TestConstructDestruct(); from main();
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

void TestConstructDestruct()
{
	Entity e;
	e.Print();
}