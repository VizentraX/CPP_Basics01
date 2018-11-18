/**
 * Code demonstrating difference between struct and class
 */

#include <iostream>
#include "log.cpp"

int main()
{
	Log log;
	log.setLevel(log.levelWarn);
	log.error("hello");
	log.warn("hello");
	log.info("hello");
}