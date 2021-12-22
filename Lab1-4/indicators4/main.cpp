//
// Created by kajet on 20.10.2021.
//
#include <iostream>

using namespace std;

void assign(int x, int *w){
    *w = x;
}

int main(int argc, char *argv[]){
    int a = 10, b;
    int *wsk = &b;
    assign(a,wsk);
    cout << b;
    return 0;
}