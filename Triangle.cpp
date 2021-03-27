#include <iostream>
#include <string>
#include "Shape.h"
#include "TriangularShape.h"
#include "RectangularShape.h"
#include "CircularShape.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"
#include "Point.h"

using namespace std;

Triangle::Triangle()
{
    //ctor
}

Triangle::Triangle(double base_, double height_)
{
    base = base_;
    height = height_;
}

Triangle::Triangle(double base_, double height_, string color_, bool filled_)
{
    base = base_;
    height = height_;
    setColor(color_);
    setFilled(filled_);
}

double Triangle::getBase()
{
    return base;
}

double Triangle::getHeight()
{
    return height;
}

void Triangle::setBase(double base_)
{
    base = base_;
}

void Triangle::setHeight(double height_)
{
    height = height_;
}


double Triangle::getArea()
{
    return 0.5 * height * base;
}

string Triangle::toString()
{
    string temp_bool;
    if (isFilled() == 1) {
        temp_bool = "true";
    } else {
        temp_bool = "false";
    }
    return "Triangle [Shape[color=" + getColor() + ",filled=" + temp_bool + "],base=" + to_string(base) + ",height=" + to_string(height) + "]";
}
