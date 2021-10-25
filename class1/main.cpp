//
// Created by kajet on 25.10.2021.
//

#include <iostream>

using namespace std;

class Cuboid{
public:
    int a;
    int b;
    int H;
};

int pole(int a, int b, int H){
    return 2*(a*b+a*H+b*H);
}

int main(){
    Cuboid x;
    x = {2,3,4};
    cout << "Pole = " << pole(x.a, x.b, x.H) << endl;
    return 0;
}

