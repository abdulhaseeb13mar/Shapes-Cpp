#include <iostream>
#include <string>
#include <cmath>
#include "Shape.h"
#include "TriangularShape.h"
#include "RectangularShape.h"
#include "CircularShape.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"

using namespace std;

Circle::Circle()
{
}

Circle::Circle(double radius_)
{
    radius = radius_;
}

Circle::Circle(double radius_, string color_, bool filled_)
{
    radius = radius_;
    setColor(color_);
    setFilled(filled_);
}

double Circle::getRadius()
{
    return radius;
}

void Circle::setRadius(double radius_)
{
    radius = radius_;
}

double Circle::getArea()
{
    return M_PI * pow(radius, 2);
}

double Circle::getPerimeter()
{
    return 2 * M_PI * radius;
}

string Circle::toString()
{
    string temp_bool;
    if (isFilled() == 1) {
        temp_bool = "true";
    } else {
        temp_bool = "false";
    }
    return "Circle [Shape[color=" + getColor() + ",filled=" + temp_bool + "],radius=" + to_string(radius) + "]";
}


