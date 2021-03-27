#ifndef RECTANGULARSHAPE_H
#define RECTANGULARSHAPE_H
#include <iostream>
#include <string>
#include "Point.h"
using namespace std;

class RectangularShape: public Shape
{
    public:
        RectangularShape();
        RectangularShape(int x1_, int y1_, int x2_, int y2_, int x3_, int y3_, int x4_, int y4_);
        RectangularShape(Point v1_, Point v2_, Point v3_, Point v4_);
        string toString();
        double getArea();
        double getPerimeter();

    private:
        int x1=0; int x2=0; int x3=0; int x4=0;
        int y1=0; int y2=0; int y3=0; int y4=0;
        Point v1;
        Point v2;
        Point v3;
        Point v4;

};

#endif // RECTANGULARSHAPE_H
