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

Shape::Shape()
{
    //ctor
}

Shape::Shape(string color_, bool filled_) {
    color = color_;
    filled = filled_;
}

void Shape::setColor(string color_) {
    color = color_;
}

string Shape::getColor() {
    return color;
}

bool Shape::isFilled() {
    return filled;
}

void Shape::setFilled(bool filled_) {
    filled = filled_;
}

string Shape::toString() {
    string temp_bool;
    if (filled == true) {
        temp_bool = "true";
    } else {
        temp_bool = "false";
    }
    return "[color=" + color + ", filled=" + temp_bool + "]";
}
