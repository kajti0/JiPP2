//
// Created by kajet on 18.10.2021.
//

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int maxTab(int tab []){
    int max;
    max = tab[0];
    for(int i=0; i<50; i++){
        if(max<tab[i]){
            max = tab[i];
        }
    }
    return max;
}

int main(int argc, char *argv[]){
    srand(time(NULL));
    int *tab;
    tab = new int [50];
    for (int i = 0; i < 50; i++){
        tab[i] = 1 + rand() % (100);
    }
    cout << maxTab(tab) << endl;
    return 0;
}