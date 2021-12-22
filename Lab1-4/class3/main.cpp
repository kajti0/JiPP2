//
// Created by kajet on 25.10.2021.
//

#include <iostream>

using namespace std;

class FunkcjaKwadratowa{
public:
    int a;
    int b;
    int c;
};

FunkcjaKwadratowa func;

void wczytaj(){
    cout << "Podaj a, b i c\n";
    cin >> func.a >> func.b >> func.c;
}

void wypisz(){
    cout <<"FUNKCJA:\n(" << func.a <<")*x^2 + (" << func.b << ")*x + (" << func.c << ")\n";
}

int main(){
    wczytaj();
    wypisz();
    return 0;
}

