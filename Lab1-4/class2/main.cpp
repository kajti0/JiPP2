//
// Created by kajet on 25.10.2021.
//

#include <iostream>
#include <cmath>

using namespace std;

class Sphere{
public:
    int r;
};

float objetosc(int r){
    return 4/3*r*r*M_PI;
}

int main(){
    Sphere x;
    x = {2};
    cout << "Objetosc = " << objetosc(x.r) << endl;
    return 0;
}
