//
// Created by kajet on 08.12.2021.
//

#ifndef JIPP_PUNKT_H
#define JIPP_PUNKT_H
#include <iostream>
#include <cmath>

using namespace std;

class Punkt{
public:
    int x;
    int y;
    Punkt(int x1, int y1);
};

double distance(Punkt x, Punkt y);
#endif //JIPP_PUNKT_H
