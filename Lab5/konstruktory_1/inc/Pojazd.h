//
// Created by kajet on 08.12.2021.
//

#ifndef JIPP_POJAZD_H
#define JIPP_POJAZD_H
#include <iostream>

using namespace std;

class Pojazd{
    string nr_rej;
    string nazwa;
    int miejsca;
    string *list;
    string marka;
    string typ;
private:
    static string najnowsza_wersja_oprogramowania;
    string zainstalowana_wersja_oprogramowania = "v1.0";
public:
    Pojazd();
    void wyswietl();
    void siedzonko(int miejsce, string osoba);
    ~Pojazd();
    Pojazd(Pojazd& pojazd);
    void setNazwa(string xnazwa);
    void setNr_rej(string xnr_rej);
    string getNazwa ();
    string getNr_rej ();
    const string getMarka();
    string getTyp();
    //static void opublikujNoweOprogramowanie(string version);
};

#endif //JIPP_POJAZD_H
