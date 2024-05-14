#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape 
{
public:
    Rectangle(double width, double height);
    double getArea() const override;
    double getPerimeter() const override;

private:
    double width;
    double height;
};

#endif // RECTANGLE_H
