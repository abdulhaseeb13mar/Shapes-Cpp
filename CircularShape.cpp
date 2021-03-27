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

CircularShape::CircularShape()
{
}

CircularShape::CircularShape(int x_, int y_)
{
    x = x_;
    y = y_;
}

CircularShape::CircularShape(Point v_)
{
    v = v_;
}

string CircularShape::toString()
{
    return "My Circle [v=(" + to_string(v.getX()) + "," + to_string(v.getY()) + ")]";
}
