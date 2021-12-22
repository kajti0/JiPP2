//
// Created by kajet on 08.12.2021.
//

#ifndef JIPP_FIGURA_H
#define JIPP_FIGURA_H
#include <iostream>

using namespace std;

class Figura{
public:
    int wierzcholki;
    int **punkt;
    Figura(int w);
    ~Figura();
};
#endif //JIPP_FIGURA_H
