//
// Created by kajet on 20.10.2021.
//

#include <iostream>
#include <algorithm>

using namespace std;

void sort (int *a, int *b, int *c){
    if(*a > *b) swap(*a, *b);
    if(*a > *c) swap(*a, *c);
    if(*b > *c) swap(*b, *c);

}

int main(int argc, char *argv[]){
    int a = 10, b = 2, c = 4;
    sort(&a, &b, &c);
    cout << "a = " << a << " b = " << b << " c = " << c <<endl;
    return 0;
}
