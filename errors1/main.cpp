//
// Created by kajet on 20.10.2021.
//

#include <iostream>
#include <stdexcept>
#include <limits>

using namespace std;

void wynik (int a, int b){
    if(b==0||a%b!=0){
        throw invalid_argument("Wynik nie mieści się w zbiorze liczb całkowitych!");
    }
    cout << a/b << endl;
}

int main(int argc, char *argv[]){
    int a, b;
    cin >> a >> b;
    try{
        wynik(a,b);
    }
    catch (invalid_argument e){
        cerr << e.what() << endl;
        return -1;
    }
    return 0;
}