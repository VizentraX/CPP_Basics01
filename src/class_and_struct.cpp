#include <iostream>

struct SPlayer
{
	int x, y;

	void move()
	{
		std::cout << "Moving player to " << x << " " << y << std::endl;
	}
};

class CPlayer
{
public:
	int x, y;

	void move()
	{
		std::cout << "Moving player to " << x << " " << y << std::endl;
	}
};