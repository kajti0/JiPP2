//
// Created by kajet on 18.10.2021.
//

#include <iostream>

using namespace std;

int Pole (int a, int h){
    return a*h/2;
}

int Pole (int a, int b, int h){
    return (a+b)*h/2;
}

int main (int argc, char *argv[]){
    cout << Pole(10,10) << endl;
    cout << Pole (20, 10, 5) << endl;
    return 0;
}

