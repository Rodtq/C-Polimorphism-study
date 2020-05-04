#include <iostream>
#include "Circle.h"


Circle::Circle()
{
}


Circle::~Circle()
{
	std::cout << "Circle hass been exploded" << std::endl;
}

void Circle::PrintShape()
{
	std::cout << "Hi, I'm The Circle" << std::endl;
}
