#pragma once

class Shape
{
public:
	virtual void PrintShape() = 0;
	virtual ~Shape() {};
protected:
	Shape() {} ;
};
