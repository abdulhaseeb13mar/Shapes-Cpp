#include <iostream>
#include <string>
#include <stdlib.h>
#include "Shape.h"
#include "TriangularShape.h"
#include "RectangularShape.h"
#include "CircularShape.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"
#include "Point.h"

using namespace std;

void RectangluarFunction();
void Rectangle_Coordinates();
void Rectangle_Length_Width();
void TriangularFunction();
void Triangle_Coordinates();
void Triangle_Base_Height();
void CircularFunction();
void Circle_Coordinates();
void Circle_Radius();
void WaitForEnterKey();
void CheckFilledShape(bool ISFILLED);
string TakeColorInput();
bool TakeFilledInput();
double TakeLengthInput(string lengthType);


int main()
{
    int mainLoop = 0;
    while (mainLoop == 0) {
        int x;
        cout << "===============MID TERM ASSIGNMENT SHAPES================" << endl << endl << endl;
        cout << "Choose the Shape of your Like:" << endl << endl;
        cout << "1- Rectangle" << endl << "2- Triangle" << endl << "3- Circle" << endl << endl << "0- Exit" << endl << endl;
        cout << "Your Choice (1 , 2 , 3, 0) = ";
        cin >> x;
        if (x == 0) {
            mainLoop = 1;
        } else if (x == 1) {
            system("CLS");
            RectangluarFunction();
        } else if (x == 2) {
            system("CLS");
            TriangularFunction();
        } else if (x == 3) {
            system("CLS");
            CircularFunction();
        }
        Circle c(5,"purple",false);
    }
    return 0;
}


//-------------------------------------ALL RECTANGLE FUNCTIONS-------------------------------------------------------


void RectangluarFunction() {
    int loop = 0;
    while (loop == 0) {
        int x;
        cout << "===============RECTANGULAR SHAPE================" << endl << endl << endl;
        cout << "1- Input Vertices Coordinates" << endl << "2- Input Length and Width" << endl << "0- Exit" << endl << endl;
        cout << "Your Choice (1 , 2 , 3, 0) = ";
        cin >> x;
        if (x == 0) {
            system("CLS");
            loop = 1;
        } else if (x == 1) {
            system("CLS");
            Rectangle_Coordinates();
        } else if (x == 2) {
            system("CLS");
            Rectangle_Length_Width();
        }
    }
}

void Rectangle_Coordinates () {
    int x; int y; int loop = 0;
    cout << "===============RECTANGLE WITH COORDINATES===============" << endl << endl;
    cout << "Please Enter the 4 Vertices (x,y)" << endl << endl;
    cout << "V1 => x1 *space* y1 = ";
    cin >> x >> y;
    Point v1(x,y);
    cout << "V2 => x2 *space* y2 = ";
    cin >> x >> y;
    Point v2(x,y);
    cout << "V3 => x3 *space* y3 = ";
    cin >> x >> y;
    Point v3(x,y);
    cout << "V4 => x4 *space* y4 = ";
    cin >> x >> y;
    cout << endl << endl;
    Point v4(x,y);

    RectangularShape R1(v1, v2, v3, v4);
    system("CLS");

    while (loop == 0) {
        int s;
        system("CLS");
        cout << "===============RECTANGLE WITH COORDINATES===============" << endl << endl;
        cout << "Choose the function you want to calculate" << endl;
        cout << "1- Calculate Area" << endl
        << "2- Calculate Perimeter" << endl
        << "3- Check Coordinates" << endl
        << "0- Exit" << endl;
        cout << "Choose your Function (1, 2, 0) = ";
        cin >> s; cout << endl;
        if (s == 0) {
            system("CLS");
            loop = 1;
        } else if (s == 1) {
            system("CLS");
            cout << "The Area of Rectangle is = " << to_string( R1.getArea() );
            WaitForEnterKey();
        } else if (s == 2) {
            system("CLS");
            cout << "The Perimeter of Rectangle is = " << to_string( R1.getPerimeter() );
            WaitForEnterKey();
        } else if (s == 3) {
            system("CLS");
            cout << "The Coordinates of Rectangle are = " << R1.toString();
            WaitForEnterKey();
        }

    }

}

void Rectangle_Length_Width () {
    double Width; double Length; string Color; bool Filled;  int loop = 0;
    cout << "===============RECTANGLE WITH WIDTH AND LENGTH===============" << endl << endl;
    cout << "Please Enter the Width of Rectangle = ";
    cin >> Width;
    cout << "Please Enter the length of Rectangle = ";
    cin >> Length;
    cout << "Please Enter the color of Rectangle = ";
    cin >> Color;
    cout << "Choose Whether shape will be filled or not (1- yes, 0- no) = ";
    cin >> Filled;
    cout << endl << endl;

    Rectangle R2(Width, Length, Color, Filled);
    system("CLS");

    while (loop == 0) {
        int s;
        system("CLS");
        cout << "===============RECTANGLE WITH WIDTH AND LENGTH===============" << endl << endl;
        cout << "Choose the function you want to perform" << endl;
        cout << "1- Calculate Area" << endl
        << "2- Calculate Perimeter" << endl
        << "3- Check Color" << endl
        << "4- Check Filled" << endl
        << "5- Change Color" << endl
        << "6- Change Filled" << endl
        << "7- Change Width" << endl
        << "8- Change Length" << endl
        << "9- Check Width" << endl
        << "10- Check Length" << endl
        << "11- Check All Info" << endl
        << "0- Exit" << endl;
        cout << "Choose your Function (1, 2, 3, 4, 5, 6, 7, 8, 0) = ";
        cin >> s; cout << endl;
        if (s == 0) {
            system("CLS");
            loop = 1;
        } else if (s == 1) {
            system("CLS");
            cout << "The Area of Rectangle is = " << to_string( R2.getArea() );
            WaitForEnterKey();
        } else if (s == 2) {
            system("CLS");
            cout << "The Perimeter of Rectangle is = " << to_string( R2.getPerimeter() );
            WaitForEnterKey();
        } else if (s == 3) {
            system("CLS");
            cout << "The Color of Rectangle is = " << R2.getColor();
            WaitForEnterKey();
        } else if (s == 4) {
            system("CLS");
            CheckFilledShape(R2.isFilled());
            WaitForEnterKey();
        } else if (s == 5) {
            system("CLS");
            string newColor = TakeColorInput();
            R2.setColor(newColor);
        } else if (s == 6) {
            system("CLS");
            bool NewFilled = TakeFilledInput();
            R2.setFilled(NewFilled);
        } else if (s == 7) {
            system("CLS");
            double NewWidth = TakeLengthInput("Width");
            R2.setWidth(NewWidth);
        } else if (s == 8) {
            system("CLS");
            double NewLength = TakeLengthInput("Length");
            R2.setLength(NewLength);
        } else if (s == 9) {
            system("CLS");
            cout << "The Width of this Rectangle is = " << R2.getWidth();
            WaitForEnterKey();
        } else if (s == 10) {
            system("CLS");
            cout << "The Length of this Rectangle is = " << R2.getLength();
            WaitForEnterKey();
        } else if (s == 11) {
            system("CLS");
            cout << "Information of this Rectangle = " << R2.toString();
            WaitForEnterKey();
        }
    }
}

//-------------------------------------ALL TRIANGLE FUNCTIONS-------------------------------------------------------

void TriangularFunction () {
    int loop = 0;
    while (loop == 0) {
        int x;
        cout << "===============TRIANGULAR SHAPE================" << endl << endl << endl;
        cout << "1- Input Vertices Coordinates" << endl << "2- Input Base and Height" << endl << "0- Exit" << endl << endl;
        cout << "Your Choice (1 , 2 , 3, 0) = ";
        cin >> x;
        if (x == 0) {
            system("CLS");
            loop = 1;
        } else if (x == 1) {
            system("CLS");
            Triangle_Coordinates();
        } else if (x == 2) {
            system("CLS");
            Triangle_Base_Height();
        }
    }
}

void Triangle_Coordinates () {
    int x; int y; int loop = 0;
    cout << "===============TRIANGLE WITH COORDINATES===============" << endl << endl;
    cout << "Please Enter the 3 Vertices (x,y)" << endl << endl;
    cout << "V1 => x1 *space* y1 = ";
    cin >> x >> y;
    Point v1(x,y);
    cout << "V2 => x2 *space* y2 = ";
    cin >> x >> y;
    Point v2(x,y);
    cout << "V3 => x3 *space* y3 = ";
    cin >> x >> y;
    Point v3(x,y);
    cout << endl << endl;

    TriangularShape T1(v1, v2, v3);
    system("CLS");

    while (loop == 0) {
        int s;
        system("CLS");
        cout << "===============TRIANGLE WITH COORDINATES===============" << endl << endl;
        cout << "Choose the function you want to calculate" << endl;
        cout << "1- Calculate Perimeter" << endl;
        cout << "2- Check Coordinates" << endl
        << "0- Exit" << endl;
        cout << "Choose your Function (1, 0) = ";
        cin >> s; cout << endl;
        if (s == 0) {
            system("CLS");
            loop = 1;
        } else if (s == 1) {
            system("CLS");
            cout << "The Perimeter of Triangle is = " << to_string( T1.getPerimeter() );
            WaitForEnterKey();
        } else if (s == 2) {
            system("CLS");
            cout << "The Coordinates of Triangle are = " << T1.toString();
            WaitForEnterKey();
        }
    }
}

void Triangle_Base_Height () {
    double Base; double Height; string Color; bool Filled;  int loop = 0;
    cout << "===============TRIANGLE WITH BASE AND HEIGHT===============" << endl << endl;
    cout << "Please Enter the Base of Triangle = ";
    cin >> Base;
    cout << "Please Enter the Height of Triangle = ";
    cin >> Height;
    cout << "Please Enter the color of Triangle = ";
    cin >> Color;
    cout << "Choose Whether shape will be filled or not (1- yes, 0- no) = ";
    cin >> Filled;
    cout << endl << endl;

    Triangle T2(Base, Height, Color, Filled);
    system("CLS");

    while (loop == 0) {
        int s;
        system("CLS");
        cout << "===============TRIANGLE WITH BASE AND HEIGHT===============" << endl << endl;
        cout << "Choose the function you want to perform" << endl;
        cout << "1- Calculate Area" << endl
        << "2- Check Color" << endl
        << "3- Check Filled" << endl
        << "4- Change Color" << endl
        << "5- Change Filled" << endl
        << "6- Change Base" << endl
        << "7- Change Height" << endl
        << "8- Check Base" << endl
        << "9- Check Height" << endl
        << "10- Check All Info" << endl
        << "0- Exit" << endl;
        cout << "Choose your Function (1, 2, 3, 4, 5, 6, 7, 0) = ";
        cin >> s; cout << endl;
        if (s == 0) {
            system("CLS");
            loop = 1;
        } else if (s == 1) {
            system("CLS");
            cout << "The Area of Triangle is = " << to_string( T2.getArea() );
            WaitForEnterKey();
        } else if (s == 2) {
            system("CLS");
            cout << "The Color of Triangle is = " << T2.getColor();
            WaitForEnterKey();
        } else if (s == 3) {
            system("CLS");
            CheckFilledShape(T2.isFilled());
            WaitForEnterKey();
        } else if (s == 4) {
            system("CLS");
            string newColor = TakeColorInput();
            T2.setColor(newColor);
        } else if (s == 5) {
            system("CLS");
            bool NewFilled = TakeFilledInput();
            T2.setFilled(NewFilled);
        } else if (s == 6) {
            system("CLS");
            double NewBase = TakeLengthInput("Base");
            T2.setBase(NewBase);
        } else if (s == 7) {
            system("CLS");
            double NewHeight = TakeLengthInput("Height");
            T2.setHeight(NewHeight);
        } else if (s == 8) {
            system("CLS");
            cout << "The Base of this Triangle is = " << T2.getBase();
            WaitForEnterKey();
        } else if (s == 9) {
            system("CLS");
            cout << "The Height of this Triangle is = " << T2.getHeight();
            WaitForEnterKey();
        } else if (s == 10) {
            system("CLS");
            cout << "Information of this Triangle = " << T2.toString();
            WaitForEnterKey();
        }
    }
}

//-------------------------------------ALL CIRCLE FUNCTIONS-------------------------------------------------------

void CircularFunction () {
    int loop = 0;
    while (loop == 0) {
        int x;
        cout << "===============CIRCULAR SHAPE================" << endl << endl << endl;
        cout << "1- Input Center Coordinates" << endl << "2- input Radius" << endl << "0- Exit" << endl << endl;
        cout << "Your Choice (1, 0) = ";
        cin >> x;
        if (x == 0) {
            system("CLS");
            loop = 1;
        } else if (x == 1) {
            system("CLS");
            Circle_Coordinates();
        } else if (x == 2) {
            system("CLS");
            Circle_Radius();
        }
    }
}

void Circle_Coordinates () {
    int x; int y; int loop = 0;
    cout << "===============CIRCLE WITH CENTER COORDINATES===============" << endl << endl;
    cout << "Please Enter the Center Coordinates (x,y)" << endl << endl;
    cout << "V1 => x *space* y = ";
    cin >> x >> y;
    Point v1(x,y);
    cout << endl << endl;

    CircularShape C1(v1);
    system("CLS");

    while (loop == 0) {
        int s;
        system("CLS");
        cout << "===============CIRCLE WITH CENTER COORDINATES===============" << endl << endl;
        cout << "Choose the function you want to calculate" << endl;
        cout << "1- Check Center Coordinates" << endl
        << "0- Exit" << endl;
        cout << "Choose your Function (1, 0) = ";
        cin >> s; cout << endl;
        if (s == 0) {
            system("CLS");
            loop = 1;
        } else if (s == 1) {
            system("CLS");
            cout << "The Center Coordinates of Circle are = " << C1.toString();
            WaitForEnterKey();
        }
    }
}

void Circle_Radius () {
    double Radius; string Color; bool Filled;  int loop = 0;
    cout << "===============CIRCLE WITH RADIUS===============" << endl << endl;
    cout << "Please Enter the Radius of Circle = ";
    cin >> Radius;
    cout << "Please Enter the color of Circle = ";
    cin >> Color;
    cout << "Choose Whether shape will be filled or not (1- yes, 0- no) = ";
    cin >> Filled;
    cout << endl << endl;

    Circle C2(Radius, Color, Filled);
    system("CLS");

    while (loop == 0) {
        int s;
        system("CLS");
        cout << "===============CIRCLE WITH RADIUS===============" << endl << endl;
        cout << "Choose the function you want to perform" << endl;
        cout << "1- Calculate Area" << endl
        << "2- Calculate Perimeter" << endl
        << "3- Check Color" << endl
        << "4- Check Filled" << endl
        << "5- Change Color" << endl
        << "6- Change Filled" << endl
        << "7- Change Radius" << endl
        << "8- Check Radius" << endl
        << "9- Check All Info" << endl
        << "0- Exit" << endl;
        cout << "Choose your Function (1, 2, 3, 4, 5, 6, 7, 0) = ";
        cin >> s; cout << endl;
        if (s == 0) {
            system("CLS");
            loop = 1;
        } else if (s == 1) {
            system("CLS");
            cout << "The Area of Circle is = " << to_string( C2.getArea() );
            WaitForEnterKey();
        } else if (s == 2) {
            system("CLS");
            cout << "The Perimeter of Circle is = " << to_string( C2.getPerimeter() );
            WaitForEnterKey();
        } else if (s == 3) {
            system("CLS");
            cout << "The Color of Circle is = " << C2.getColor();
            WaitForEnterKey();
        } else if (s == 4) {
            system("CLS");
            CheckFilledShape(C2.isFilled());
            WaitForEnterKey();
        } else if (s == 5) {
            system("CLS");
            string newColor = TakeColorInput();
            C2.setColor(newColor);
        } else if (s == 6) {
            system("CLS");
            bool NewFilled = TakeFilledInput();
            C2.setFilled(NewFilled);
        } else if (s == 7) {
            system("CLS");
            double NewRadius = TakeLengthInput("Radius");
            C2.setRadius(NewRadius);
        } else if (s == 8) {
            system("CLS");
            cout << "The Radius of this circle is = " << C2.getRadius();
            WaitForEnterKey();
        } else if (s == 9) {
            system("CLS");
            cout << "Information of this Circle is = " <<C2.toString();
            WaitForEnterKey();
        }
    }
}

//-------------------------------------UTILITY FUNCTIONS-------------------------------------------------------

double TakeLengthInput (string lengthType) {
    double newLength;
    cout << "Enter the new " << lengthType << " = ";
    cin >>  newLength;
    return newLength;
}

bool TakeFilledInput () {
    bool NewFilled;
    cout << "1- Filled" << endl << "0- Not Filled" << endl << endl;
    cout << "Enter your choice 1 , 0 = ";
    cin >> NewFilled;
    return NewFilled;
}

string TakeColorInput () {
    string newColor;
    cout << "Enter the new Color of Shape = ";
    cin >> newColor;
    return newColor;
}

void CheckFilledShape (bool ISFILLED) {
    if (ISFILLED == 1) {
        cout << "The Shape is FILLED";
    } else {
        cout << "The Shape is NOT FILLED";
    }
}


void WaitForEnterKey () {
    string str;
    cout << endl << "Press Enter key to go back";
    getline(cin, str);
    cin.ignore();
}



