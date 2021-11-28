//
// Created by kajet on 15.11.2021.
//

#ifndef JIPP_VECTOR_H
#define JIPP_VECTOR_H

#include <cmath>
#include <iostream>

using namespace std;

class Vector{
private:
    double x, y;

public:
    Vector();

    Vector(double x, double y);

    double length();

    friend void print(Vector x);

    Vector operator+(const Vector &rhs) const {
        return {x + rhs.x, y + rhs.y};
    }

    Vector operator-(const Vector &rhs) const {
        return {x - rhs.x, y - rhs.y};
    }

    Vector operator-() const {
        return {-x, -y};
    }

    double operator*(const Vector &rhs) const {
        return x * rhs.x + y * rhs.y;
    }

    Vector operator*(double scalar) const {
        return {scalar*x, scalar*y};
    }

};

void print(Vector x);

#endif //JIPP_VECTOR_H
