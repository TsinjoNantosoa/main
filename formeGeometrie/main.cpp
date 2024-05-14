#include <iostream>
#include "Shape.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Circle.h"
#include "Sphere.h"
#include "Trapezoid.h"

int main() 
{
    Triangle triangle(5, 10);
    Rectangle rectangle(4, 6);
    Square square(3);
    Circle circle(2);
    Sphere sphere(1);
    Trapezoid trapezoid(3, 7, 8);

    
    std::cout << "Triangle area: " << triangle.getArea() << ", perimeter: " << triangle.getPerimeter() << std::endl;
    std::cout << "Rectangle area: " << rectangle.getArea() << ", perimeter: " << rectangle.getPerimeter() << std::endl;
    std::cout << "Square area: " << square.getArea() << ", perimeter: " << square.getPerimeter() << std::endl;
    std::cout << "Circle area: " << circle.getArea() << ", perimeter: " << circle.getPerimeter() << std::endl;
    std::cout << "Sphere area: " << sphere.getArea() << ", perimeter: " << sphere.getPerimeter() << std::endl;
    std::cout << "Trapezoid area: " << trapezoid.getArea() << ", perimeter: " << trapezoid.getPerimeter() << std::endl;

    return 0;
}
          //compilation:
//  g++ main.cpp Triangle.cpp Rectangle.cpp Square.cpp Circle.cpp Sphere.cpp Trapezoid.cpp -o shapes
//     ./shapes