//
// Created by kajet on 08.12.2021.
//

#include "Punkt.h"

Punkt::Punkt(int x1, int y1) :x(x1), y(y1){
    cout << "( " << x << ", " << y << ")\n";
}

double distance(Punkt x, Punkt y) {
    return sqrt(pow(y.x - x.x, 2) + pow(y.y - x.y, 2));
}