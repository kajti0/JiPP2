//
// Created by kajet on 08.12.2021.
//

#include "Figura.h"

Figura::Figura(int w) :wierzcholki(w){
    punkt = new int* [w];
    for(int i = 0; i<w; i++){
        punkt[i] = new int[2];
    }
    cout << "Wczytywanie wspolrzednych wierzcholkow:\n";
    for(int i = 0; i < w; i++){
        cout << "Wierzchołek " << i+1 << " : ";
        for(int j = 0; j < 2; j++) {
            cin >> punkt[i][j];
        }
    }
}

Figura::~Figura(){
    cout << "Destruktor wywołany!\n";
    delete[] punkt;
}

