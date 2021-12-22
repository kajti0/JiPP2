//
// Created by kajet on 20.10.2021.
//

#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    int a, b;
    int *wsk_a = &a, *wsk_b = &b;
    cin >> a >> b;
    cout << ((*wsk_a) + (*wsk_b)) / 2 << endl;
    return 0;
}


