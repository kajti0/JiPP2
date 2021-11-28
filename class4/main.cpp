//
// Created by kajet on 25.10.2021.
//

#include <iostream>

using namespace std;

class Student{
public:
    string imie;
    string nazwisko;
    int nr;
    int l_pytan;
    int pop_odp;
}*lista;

Student* wczytaj(){
    int size = 0;
    cout << "Ile osób będziesz wprowadzać?" << endl;
    cin >> size;
    lista = new (size);
}
