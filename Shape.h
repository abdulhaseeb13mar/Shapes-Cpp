#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
#include <string>
using namespace std;

class Shape
{
    public:
        Shape();
        Shape(string color_, bool filled_);
        string getColor();
        void setColor(string color_);
        bool isFilled();
        void setFilled(bool filled_);
        double getArea();
        double getPerimeter();
        string toString();

    protected:
        string color = "red";
        bool filled = true;
};

#endif // SHAPE_H
