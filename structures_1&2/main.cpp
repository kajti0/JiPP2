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
    int wypadki;
} nr1, nr2, nr3, nr4;

int main(){
    nr1 = {"Renault", "Clio", 2009, "Biały", 3};
    nr2 = {"BMW", "M5", 2020, "Carbon Black", 0};
    nr3 = {"Nissan", "Primera", 2015, "Czerwony", 1};
    nr4 = {"Peugeot", "206", 2002, "Srebrny", 5};
    cout << "Marka\tModel\tRok produkcji\tKolor\t\tLiczba wypadkow" << endl;
    cout << nr1.marka << "\t" << nr1.model << "\t" << nr1.rok << "\t\t" << nr1.kolor << "\t\t" << nr1.wypadki << endl;
    cout << nr2.marka << "\t" << nr2.model << "\t" << nr2.rok << "\t\t" << nr2.kolor << "\t" << nr2.wypadki << endl;
    cout << nr3.marka << "\t" << nr3.model << "\t" << nr3.rok << "\t\t" << nr3.kolor << "\t" << nr3.wypadki << endl;
    cout << nr4.marka << "\t" << nr4.model << "\t" << nr4.rok << "\t\t" << nr4.kolor << "\t\t" << nr4.wypadki << endl;
    return 0;
}