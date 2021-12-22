//
// Created by kajet on 22.11.2021.
//

#ifndef JIPP_FIGURE_H
#define JIPP_FIGURE_H

#include <iostream>
#include <cmath>

using namespace std;

class Figure{
protected:
    string color, name;
};

class Square: public Figure{
protected:
    int a;
public:
    Square(int x, string y, string z);
    int area();
    int perimeter();
};

class Circle: public Figure{
protected:
    int r;
public:
    double area();
    double perimeter();
};

class Triangle: public Figure{
protected:
    int a,b, c;
public:
    double area();
    int perimeter();
};

#endif //JIPP_FIGURE_H
