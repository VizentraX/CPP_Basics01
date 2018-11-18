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

// Example Implementation inside main
/*
	SPlayer p;
	p.x = 10;
	p.y = 20;
	p.move();

	CPlayer pc;
	pc.x = 34;
	pc.y = 22;
	pc.move();

*/