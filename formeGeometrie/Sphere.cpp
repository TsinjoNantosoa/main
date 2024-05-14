#include "Sphere.h"
#include <cmath>

Sphere::Sphere(double radius) : radius(radius) 
{

}

double Sphere::getArea() const 
{
    return 4 * M_PI * radius * radius;
}

double Sphere::getPerimeter() const 
{
    return 4 * M_PI * radius;
}