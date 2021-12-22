//
// Created by kajet on 25.10.2021.
//

#include <iostream>

using namespace std;

class Cuboid{
protected:
    int a;
    int b;
    int H;
public:
    void setCuboid(int a, int b, int H){
        this->a = a;
        this->b = b;
        this->H = H;
    }
    int pole(){
        return 2*(a*b+a*H+b*H);
    }

};



int main(){
    Cuboid x;
    x.setCuboid(2, 3, 4);
    cout << "Pole = " << x.pole() << endl;
    return 0;
}

