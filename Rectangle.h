#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
#include <string>
using namespace std;

class Rectangle: public RectangularShape
{
    public:
        Rectangle();
        Rectangle(double width_, double length_);
        Rectangle(double width_, double length_, string color_, bool filled_);
        double getWidth();
        void setWidth(double width_);
        double getLength();
        void setLength(double length_);
        double getArea();
        double getPerimeter();
        string toString();

    protected:
        double width = 1;
        double length = 1;
};

#endif // RECTANGLE_H
