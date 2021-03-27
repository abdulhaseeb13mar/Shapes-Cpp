#ifndef TRIANGULARSHAPE_H
#define TRIANGULARSHAPE_H
#include <iostream>
#include <string>
#include "Point.h"
using namespace std;

class TriangularShape: public Shape
{
    public:
        TriangularShape();
        TriangularShape(int x1_, int y1_, int x2_, int y2_, int x3_, int y3_);
        TriangularShape(Point v1_, Point v2_, Point v3_);
        string toString();
        double getPerimeter();

    private:
        int x1=0; int x2=0; int x3=0;
        int y1=0; int y2=0; int y3=0;
        Point v1;
        Point v2;
        Point v3;

};

#endif // TRIANGULARSHAPE_H
