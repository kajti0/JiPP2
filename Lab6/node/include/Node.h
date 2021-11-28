//
// Created by kajet on 15.11.2021.
//

#ifndef JIPP_NODE_H
#define JIPP_NODE_H

#include <iostream>
#include <cmath>

using namespace std;

class Node {
private:
    double x, y;

public:
    Node();
    Node(double x, double y);

    void display();

    void updateValue(double x, double y);

    friend double pointsDistance(Node a, Node b);
};

double pointsDistance(Node a, Node b);

#endif //JIPP_NODE_H
