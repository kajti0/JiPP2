//
// Created by kajet on 18.10.2021.
//

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int maxTab(tab []){
    int max;
    max = tab[0];
    for(int i=0; i<sizof(tab); i++){
        if(max<tab[i]){
            max = tab[i];
        }
    }
}

int main(int argc, char *argv[]){
    srand(time(NULL));
    int *tab;
    tab = new int [40];
    for (int i = 0; i < sizeof(tab); i++){
        tab[i] = rand
    }


}