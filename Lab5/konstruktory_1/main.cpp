//
// Created by kajet on 08.11.2021.
//

#include <iostream>

using namespace std;

class Pojazd{
    int nr_rej;
    string nazwa;
    int miejsca;
    string *list;
    string marka;
    string typ;
public:
    Pojazd();
};

Pojazd::Pojazd(){
    cin >> nr_rej;
    cin >> nazwa;
    cin >> miejsca;
    list = new string (5);

}

