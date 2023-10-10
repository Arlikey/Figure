#include "Parallelogram.h"
#include <iostream>
using namespace std;

Parallelogram::Parallelogram(double a, double h) {
	m_value1 = a;
	height = h;
}

void Parallelogram::ShowArea() const {
	cout << "Area of parallelogram: " << m_value1 * height << endl;
}