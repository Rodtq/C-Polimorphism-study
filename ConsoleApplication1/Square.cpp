#include <iostream>

#include "Square.h"

Square::Square()

{
}


Square::~Square()
{
	std::cout << "Square hass been exploded" << std::endl;
}

void Square::PrintShape()
{
	std::cout << "Hi, I'm The Square" << std::endl;
}

