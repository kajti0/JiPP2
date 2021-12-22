//
// Created by kajet on 22.11.2021.
//

#include "Figure.h"

int Square::area() {
    return a*a;
}

int Square::perimeter() {
    return 4*a;
}

double Circle::area() {
    return M_PI*r*r;
}

double Circle::perimeter() {
    return 2*M_PI*r;
}

double Triangle::area() {
    int p = (a+b+c)/2;
    return pow(p*(p-a)*(p-b)*(p-c), 2);
}

int Triangle::perimeter() {
    return a+b+c;
}

Square::Square(int x, string y, string z) {
    x = a;
    y = name;
    z = color;
}