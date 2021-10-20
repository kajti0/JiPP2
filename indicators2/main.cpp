//
// Created by kajet on 20.10.2021.
//

#include <iostream>
#include <cstdlib>

using namespace std;

int main (int argc, char *argv[]){
    int size;
    cout << "Podaj rozmiar tablicy" << endl;
    cin >> size;
    if (cin.fail()||size<=0) {
        cout << "Podano niedodatnią wartość lub zły typ danych" << endl;
        exit(1);
    }
    int * tab = new int[size];
    cout << "Podaj elementy tablicy: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> *(tab+i);
        if(cin.fail()){
            cout << "Zły typ danych" << endl;
            exit (1);
        }
    }
    cout << "Dodatnie elementy tablicy: ";
    for (int i = 0; i < size; i++) {
        if (*(tab+i) > 0){
            cout << *(tab+i) << " ";
        }

    }
    return 0;
}