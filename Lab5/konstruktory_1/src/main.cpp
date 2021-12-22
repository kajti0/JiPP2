//
// Created by kajet on 08.12.2021.
//

#include "Pojazd.h"

int main(){
    Pojazd aucik;
    aucik.wyswietl();
    aucik.siedzonko(4, "Jan Kowalski");
    aucik.wyswietl();
    cout << "Marka: " << aucik.getMarka() << endl;
    //aucik.opublikujNoweOprogramowanie("v1.06");
    aucik.wyswietl();
    return 0;
}