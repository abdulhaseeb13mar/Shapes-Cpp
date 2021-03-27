#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <iostream>
#include <string>
using namespace std;

class Triangle: public TriangularShape
{
    public:
        Triangle();
        Triangle(double base_, double height_);
        Triangle(double base_, double height_, string color_, bool filled_);
        double getBase();
        void setBase(double base_);
        double getHeight();
        void setHeight(double height_);
        double getArea();
        string toString();

    protected:
        double base=1;
        double height=2;
};

#endif // TRIANGLE_H
