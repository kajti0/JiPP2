//
// Created by kajet on 15.11.2021.
//

#include "Vector.h"


Vector::Vector(): x(0), y(0) {}

Vector::Vector(double x, double y) : x(x), y(y) {}

double Vector::length() {
    return sqrt(x * x + y * y);
}

void print(Vector x){
    cout << "{" << x.x << "," << x.y << "}" << endl;
}

