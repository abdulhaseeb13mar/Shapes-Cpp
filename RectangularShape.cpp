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
#include "Point.h"

using namespace std;

RectangularShape::RectangularShape()
{
}

RectangularShape::RectangularShape(int x1_, int y1_, int x2_, int y2_, int x3_, int y3_, int x4_, int y4_)
{
    x1 = x1_; y1 = y1_;
    x2 = x2_; y2 = y2_;
    x3 = x3_; y3 = y3_;
    x4 = x4_; y4 = y4_;
}

RectangularShape::RectangularShape(Point v1_, Point v2_, Point v3_, Point v4_)
{
    v1 = v1_; v2 = v2_;
    v3 = v3_; v4 = v4_;

}

double RectangularShape::getPerimeter()
{
    double width = sqrt(pow(v2.getX() - v1.getX(), 2) + pow(v2.getY() - v1.getY(), 2));
    double length = sqrt(pow(v4.getX() - v3.getX(), 2) + pow(v4.getY() - v3.getY(), 2));
    return 2 * (width + length);
}

double RectangularShape::getArea()
{
    double width = sqrt(pow(v2.getX() - v1.getX(), 2) + pow(v2.getY() - v1.getY(), 2));
    double length = sqrt(pow(v4.getX() - v3.getX(), 2) + pow(v4.getY() - v3.getY(), 2));
    return width * length;
}

string RectangularShape::toString()
{
    return "My Rectangle[v1=(" + to_string(v1.getX()) + "," + to_string(v1.getY()) + "), v2=(" + to_string(v2.getX()) + "," + to_string(v2.getY()) +  "), v3=(" + to_string(v3.getX()) + "," + to_string(v3.getY()) + "), v4=(" + to_string(v4.getX()) + "," + to_string(v4.getY()) + ")]";
}
