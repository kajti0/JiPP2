//
// Created by kajet on 25.10.2021.
//

#include <iostream>

using namespace std;

struct car{
    string marka;
    string model;
    int rok;
    string kolor;
} auta[2];

int marki(car tab[], int ile){
    int counter = 0;
    for(int i=0; i<ile; i++){
        for (int j=0; j<ile; j++){
            if(auta[i].marka == auta[j].marka && i!=j){
                counter++;
            }
        }
    }
    return counter;
}

void oldest(car tab[], int ile){
    int index = 0;
    int oldest = tab[0].rok;
    for (int i = 0; i < ile; i++){
        if (oldest > tab[i].rok){
            index = i;
        }
    }
    cout << "Samochód nr " << index + 1 << " jest najstarszy" << endl;
}

int main(){
    for (int i = 0; i < 2; i++) {
        cout << "Samochód nr " << i + 1 <<endl;
        cout << "Marka: ";
        cin >> auta[i].marka;
        cout << "Model: ";
        cin >> auta[i].model;
        cout << "Rok produkcji: ";
        cin >> auta[i].rok;
        cout << "Kolor: ";
        cin >> auta[i].kolor;
    }
    cout << "Jest " << marki(auta, 2) << " samochodów tej samej marki" << endl;
    oldest(auta, 2);
    return 0;
}