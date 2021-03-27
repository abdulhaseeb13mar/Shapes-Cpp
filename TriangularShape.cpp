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

TriangularShape::TriangularShape()
{
}

TriangularShape::TriangularShape(int x1_, int y1_, int x2_, int y2_, int x3_, int y3_)
{
    x1 = x1_;
    y1 = y1_;
    x2 = x2_;
    y2 = y2_;
    x3 = x3_;
    y3 = y3_;
}

TriangularShape::TriangularShape(Point v1_, Point v2_, Point v3_)
{
    v1 = v1_;
    v2 = v2_;
    v3 = v3_;
}

double TriangularShape::getPerimeter()
{
    double side_A = sqrt(pow(v3.getX() - v1.getX(), 2) + pow(v3.getY() - v1.getY(), 2));
    double side_B = sqrt(pow(v2.getX() - v1.getX(), 2) + pow(v2.getY() - v1.getY(), 2));
    double side_C = sqrt(pow(v3.getX() - v2.getX(), 2) + pow(v3.getY() - v2.getY(), 2));
    return side_A + side_B + side_C;
}

string TriangularShape::toString()
{
    return "My Triangle[v1=(" + to_string(v1.getX()) + "," + to_string(v1.getY()) + "), v2=(" + to_string(v2.getX()) + "," + to_string(v2.getY()) +  "), v3=(" + to_string(v3.getX()) + "," + to_string(v3.getY()) + ")]";
}
