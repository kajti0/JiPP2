//
// Created by kajet on 18.10.2021.
//
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int random(int a, int b){
    return a + rand()%(b-a+1);
}

int main (int argc, char *argv[]){
    srand(time(NULL));
    cout << random(10,100) << endl;
    return 0;
}
