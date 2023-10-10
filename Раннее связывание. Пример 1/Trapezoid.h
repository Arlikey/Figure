#pragma once
#include "Figure.h"
class Trapezoid : public Figure
{
	double h;
public:
	Trapezoid(double a, double b, double height);
	virtual void ShowArea() const;
};

