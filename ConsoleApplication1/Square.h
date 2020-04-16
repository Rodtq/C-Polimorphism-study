#pragma once
#include "Shape.h"

class Square : public Shape
{
public:
	Square();
	virtual ~Square();
	virtual void PrintShape();
};
