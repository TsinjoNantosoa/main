#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Shape.h"

class Triangle : public Shape 
{
public:
    Triangle(double base, double height);
    double getArea() const override;
    double getPerimeter() const override;

private:
    double base;
    double height;
};

#endif // TRIANGLE_H
