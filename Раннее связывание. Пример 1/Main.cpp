#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Trapezoid.h"
#include "Square.h"
#include "Parallelogram.h"
#include <iostream>
using namespace std;

int main()
{
   
    int userChoice;
    cout << "1. Rectangle\n2. Triangle\n3. Circle\n4. Trapezoid\n5. Square\n6. Parallelogram" << endl;
    cout << "-> ";
    cin >> userChoice;
    
    Figure* ptr = nullptr;

    switch (userChoice)
    {
    case 1:
        ptr = new Rectangle();
        ptr->SetDimension(10, 5);
        break;
    case 2:
        ptr = new Triangle();
        ptr->SetDimension(10, 15);
        break;
    case 3:
        ptr = new Circle();
        ptr->SetDimension(10);
        break;
    case 4:
        ptr = new Trapezoid(5, 15, 6);
        break;
    case 5:
        ptr = new Square();
        ptr->SetDimension(10, 5);
        break;
    case 6:
        ptr = new Parallelogram(5, 7);
        break;
    default:
        break;
    }

    ptr->ShowArea();
    delete ptr;

    return 0;
}