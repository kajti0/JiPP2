//
// Created by kajet on 03.01.2022.
//

#include "lib.h"

File::File(){
    cout << "Jak sie nazywa Twoj plik?\n";
    cin >> name;
    columns = rows = 0;
}
void File::open () {
    try {
        ifstream input(name);
        if (input.is_open()) {
            string line;
            while (!input.eof()) {
                getline(input, line);
                stringstream ss(line);
                while (getline(ss, line, ',')) {
                    text.push_back(line);
                    columns++;
                }
                rows++;
            }
            columns /= rows;
            input.close();
        } else {
            throw csv_exception("Nie ma takiego pliku\n");
            cout << "Nie ma takiego pliku\n";
            exit(1);
        }
    }
    catch (csv_exception &){

    }
}

void File::read(int col, int row){
    if (col > columns){
        throw csv_exception("Bledna wartosc kolumn\n");
        exit(1);
    }
    cout << text.at((row-1)*columns + col - 1) << endl;
}

[[maybe_unused]] void File::show(){
    for(auto& var : text)
    {
        cout<<var<<" ";
    }
}