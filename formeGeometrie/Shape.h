#ifndef SHAPE_H
#define SHAPE_H

#include <cmath>

class Shape 
{
public:
    virtual double getArea() const = 0;
    virtual double getPerimeter() const = 0;
    virtual ~Shape() = default;
};

#endif // SHAPE_H
