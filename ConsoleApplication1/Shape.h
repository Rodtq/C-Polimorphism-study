#pragma once

class Shape
{
public:
	virtual ~Shape() {};
	virtual void PrintShape() = 0; // método abstrato
protected:
	Shape() {}; // evita qualquer um instanciar
};
