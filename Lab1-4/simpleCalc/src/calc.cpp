#include "calc.h"

using namespace std;


int add (int a, int b){
    return a+b;
}

int subtract (int a, int b){
    return a-b;
}

int volume (int a, int h, int H){
    return a*h*H/2;
}

void help(){
    cout << "SIMPLE CALCULATOR\nsimpleCalc [nazwa działania]\n\nDziałania:\nadd [a] [b]\n\tDodawanie dwóch liczb ([a] i [b]) całkowitych.\nsubtract [a] [b]\n\tOdejmowanie dwóch liczb ([a] i [b]) całkowitych.\nVolume [a] [h] [H]\n\tLiczy pole graniastosłupa prostego o podstawie trapezu ([a] - podstawa trapezu, [h] - wysokość trapezu, [H] - wysokość graniastosłupa).\nHelp\n\tWyświetla dokumentację."<< endl;
}