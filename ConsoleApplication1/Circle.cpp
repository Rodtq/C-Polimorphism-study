#pragma once
#include "Circle.h"
#include <iostream>

Circle::Circle() : Shape()
{

};

Circle::~Circle() {
	std::cout << "Circle hass been exploded" << std::endl;
};


void Circle::PrintShape() {
	std::cout << "Hi, I'm The Circle 0" << std::endl;
};