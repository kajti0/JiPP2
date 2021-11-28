//
// Created by kajet on 22.11.2021.
//

#ifndef JIPP_FIGURE_H
#define JIPP_FIGURE_H

#include <iostream>
#include <cmath>

class Figure{
protected:
    string color, name;
};

class Square: public Figure{
protected:
    int a;
public:
    int area(int a);
    int perimeter(int a);
};

class Circle: public Figure{
protected:
    int r;
public:
    int area(int r);
    int perimeter(int r);
};

class Triangle: public Figure{
protected:
    int a,h;
public:
    int area(int a, int h);
    int perimeter(int a, int h);
};

#endif //JIPP_FIGURE_H
