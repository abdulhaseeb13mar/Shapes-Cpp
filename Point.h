#ifndef POINT_H
#define POINT_H
#include <iostream>
#include <string>
using namespace std;

class Point
{
    public:
        Point();
        Point(int x_, int y_);
        int getX();
        int getY();


    private:
        int x=0;
        int y=0;
};

#endif // POINT_H
