#ifndef TRAPEZOID_H
#define TRAPEZOID_H

#include "Shape.h"

class Trapezoid : public Shape 
{
public:
    Trapezoid(double base1, double base2, double height);
    double getArea() const override;
    double getPerimeter() const override;

private:
    double base1;
    double base2;
    double height;
};

#endif // TRAPEZOID_H
