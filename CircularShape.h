#ifndef CIRCULARSHAPE_H
#define CIRCULARSHAPE_H
#include <iostream>
#include <string>
#include "Point.h"
using namespace std;

class CircularShape: public Shape
{
    public:
        CircularShape();
        CircularShape(int x_, int y_);
        CircularShape(Point v_);
        string toString();

    private:
        int x=0;
        int y=0;
        Point v;

};

#endif // CIRCULARSHAPE_H
