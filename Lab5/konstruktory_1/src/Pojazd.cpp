//
// Created by kajet on 08.12.2021.
//
#include "Pojazd.h"

Pojazd::Pojazd(){
    cout << "Nr rej: ";
    cin >> nr_rej;
    cout << "Nazwa: ";
    cin >> nazwa;
    cout << "Ilosc miejsc: ";
    cin >> miejsca;
    list = new string[miejsca];
    for(int i = 0; i < miejsca; i++){
        list[i] = "PUSTE";
    }
    cout << "Marka: ";
    cin >> marka;
    cout << "Typ: ";
    cin >> typ;
}

void Pojazd::wyswietl() {
    cout << "Nr rej: " << nr_rej << endl;
    cout << "Nazwa: " << nazwa << endl;
    cout << "Ilosc miejsc: " << miejsca << endl;
    cout << "Marka: " << marka << endl;
    cout << "Typ: " << typ << endl;
    for (int i = 0; i < miejsca; i++){
        cout << "Miejsce nr " << i+1 << " : " << list[i] << endl;
    }
    cout << "Obecna wersja: " << zainstalowana_wersja_oprogramowania << endl;
    //cout << "Najnowsza wersja: " << najnowsza_wersja_oprogramowania << endl;
}

void Pojazd::siedzonko(int miejsce, string osoba) {
    list[miejsce - 1] = osoba;
}

Pojazd::~Pojazd() {
    delete list;
}

Pojazd::Pojazd(Pojazd &pojazd) {
    nr_rej = pojazd.nr_rej;
    nazwa = pojazd.nazwa;
    miejsca = pojazd.miejsca;
    marka = pojazd.marka;
    typ = pojazd.typ;
}

void Pojazd::setNazwa(string xnazwa) {
    nazwa = xnazwa;
}

void Pojazd::setNr_rej(string xnr_rej) {
    nr_rej = xnr_rej;
}

const string Pojazd::getMarka () {
    return marka;
}

string Pojazd::getNazwa() {
    return nazwa;
}

string Pojazd::getNr_rej() {
    return nr_rej;
}

string Pojazd::getTyp() {
    return typ;
}

//void Pojazd::opublikujNoweOprogramowanie(string version) {
//    najnowsza_wersja_oprogramowania = version;
//}

