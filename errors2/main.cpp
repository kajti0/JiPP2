#include <iostream>
#include <cstdlib>
#include <limits>
#include <stdexcept>

using namespace std;

void convertion(string *x, int *y){
    *y = stoi(*x);
}

int main (int argc, char *argv[]){
    string before;
    int after;
    cin >> before;
    cin.ignore();
    try{
        convertion(&before, &after);
    }
    catch(invalid_argument e){
        cout << "Podano tekst niebędący liczbą" << endl;
        exit(1);
    }
    catch(out_of_range e){
        cout << "Ta liczba jest spoza zakresu int" << endl;
        exit(2);
    }
    cout << after << endl;
    return 0;
}