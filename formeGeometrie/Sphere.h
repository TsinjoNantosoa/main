#ifndef SPHERE_H
#define SPHERE_H

#include "Shape.h"

class Sphere : public Shape 
{
public:
    Sphere(double radius);
    double getArea() const override;
    double getPerimeter() const override;

private:
    double radius;
};

#endif // SPHERE_H