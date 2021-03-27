#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
#include <string>
using namespace std;

class Circle: public CircularShape
{
    public:
        Circle();
        Circle(double radius_);
        Circle(double radius_, string color_, bool filled_);
        double getRadius();
        void setRadius(double radius_);
        double getArea();
        double getPerimeter();
        string toString();

    protected:
        double radius = 1;
};

#endif // CIRCLE_H
