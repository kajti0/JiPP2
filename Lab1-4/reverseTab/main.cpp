//
// Created by kajet on 20.10.2021.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void reverse (int tab[]){
    int pom;
    for (int i = 0; i < 25; i++){
        pom = tab[i];
        tab[i] = tab[49-i];
        tab[49-i] = pom;
    }
}

int main(int argc, char *argv[]){
    srand(time(NULL));
    int *tab;
    tab = new int [50];
    for (int i = 0; i < 50; i++){
        tab[i] = 1 + rand() % (100);
        cout << tab[i] << " ";
    }
    reverse(tab);
    cout << endl;
    for (int i = 0; i < 50; i++){
        cout << tab[i] << " ";
    }
    cout << endl;
    return 0;
}