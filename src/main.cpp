/**
 * Code demonstrating difference between struct and class
 */

#include <iostream>
#include "class_and_struct.cpp"

int main()
{
	SPlayer p;
	p.x = 10;
	p.y = 20;
	p.move();

	CPlayer pc;
	pc.x = 34;
	pc.y = 22;
	pc.move();

	// main function will return 0 by default even if not specified.
}