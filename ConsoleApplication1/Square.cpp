#pragma once
#include "Square.h"
#include <iostream>
Square::Square() : Shape()
{

};

Square::~Square() {
	std::cout << "Square hass been exploded" << std::endl;
}

void Square::PrintShape() {
	std::cout << "Hi, I'm The Square []" << std::endl;
};