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

Rectangle::Rectangle()
{

}

Rectangle::Rectangle(double width_, double length_)
{
    width = width_;
    length = length_;
}

Rectangle::Rectangle(double width_, double length_, string color_, bool filled_)
{
    width = width_;
    length = length_;
    setColor(color_);
    setFilled(filled_);
}

double Rectangle::getArea()
{
    return width * length;
}

double Rectangle::getLength()
{
    return length;
}

double Rectangle::getPerimeter()
{
    return 2 * (width + length);
}

double Rectangle::getWidth()
{
    return width;
}


void Rectangle::setLength(double length_)
{
    length = length_;
}

void Rectangle::setWidth(double width_)
{
    width = width_;
}


string Rectangle::toString()
{
    string temp_bool;
    if (isFilled() == 1) {
        temp_bool = "true";
    } else {
        temp_bool = "false";
    }
    return "Rectangle [Shape[color=" + getColor() + ",filled=" + temp_bool + "],length=" + to_string(length) + ",width=" + to_string(width) + "]";
}
