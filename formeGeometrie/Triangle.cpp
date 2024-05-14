#include "Triangle.h"
#include <cmath>

Triangle::Triangle(double base, double height) : base(base), height(height) 
{

}

double Triangle::getArea() const 
{
    return 0.5 * base * height;
}

double Triangle::getPerimeter() const 
{
    return base + height + std::sqrt(std::pow(base, 2) + std::pow(height, 2));
}
