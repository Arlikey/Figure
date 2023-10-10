#include "Trapezoid.h"
#include <iostream>
using namespace std;

Trapezoid::Trapezoid(double a, double b, double height) {
	m_value1 = a;
	m_value2 = b;
	h = height;
} 

void Trapezoid::ShowArea() const {
	cout << "S: " << (m_value1 + m_value2) * h / 2 << endl;
};