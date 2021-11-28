//
// Created by kajet on 25.10.2021.
//

#include <iostream>

using namespace std;

struct car{
private:
    string marka;
    string model;
    int rok;
    string kolor;
    int wypadki;

public:
    string getMarka(){
        return marka;
    }
    string getModel(){
        return model;
    }
    int getRok(){
        return rok;
    }
    string getKolor(){
        return kolor;
    }
    int getWypadki(){
        return wypadki;
    }
    void setMarka(string marka){
        this->marka = marka;
    }
    void setModel(string model){
        this->model = model;
    }
    void setRok(int rok){
        this->rok = rok;
    }
    void setKolor(string kolor){
        this->kolor = kolor;
    }
    void setWypadki(int wypadki){
        this->wypadki = wypadki;
    }
} nr1, nr2;

int main(){
    nr1.setMarka("Renault");
    nr1.setModel("Clio");
    nr1.setRok(2009);
    nr1.setKolor("Biały");
    nr1.setWypadki(3);
    nr2.setMarka("BMW");
    nr2.setModel("M5");
    nr2.setRok(2020);
    nr2.setKolor("Carbon Black");
    nr2.setWypadki(0);
    cout << "Marka\tModel\tRok produkcji\tKolor\t\tLiczba wypadkow" << endl;
    cout << nr1.getMarka() << "\t" << nr1.getModel() << "\t" << nr1.getRok() << "\t\t" << nr1.getKolor() << "\t\t" << nr1.getWypadki() << endl;
    cout << nr2.getMarka() << "\t" << nr2.getModel() << "\t" << nr2.getRok() << "\t\t" << nr2.getKolor() << "\t" << nr2.getWypadki() << endl;
    return 0;
}