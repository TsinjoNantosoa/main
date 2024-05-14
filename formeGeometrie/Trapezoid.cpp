#include "Trapezoid.h"
#include <cmath>

Trapezoid::Trapezoid(double base1, double base2, double height) : base1(base1), base2(base2), height(height) {}

double Trapezoid::getArea() const {
    return 0.5 * (base1 + base2) * height;
}

double Trapezoid::getPerimeter() const 
{
    return base1 + base2 + 2 * height;
}
