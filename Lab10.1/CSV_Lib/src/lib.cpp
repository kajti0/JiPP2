//
// Created by kajet on 03.01.2022.
//

#include "lib.h"

File::File(){
    cout << "Jak sie nazywa Twoj plik?\n";
    cin >> name;
    cout << "Jakim znakiem sa rozdzielone wartosci w pliku?\n";
    cin >> sign;
    columns = rows = 0;
    try {
        ifstream input(name);
        if (input.is_open()) {
            string line;
            while (!input.eof()) {
                getline(input, line);
                stringstream ss(line);
                while (getline(ss, line, sign)) {
                    columns++;
                }
                rows++;
            }
            columns /= (rows);
            cout << "Columns: " << columns << "\nRows: " << rows << endl;
            input.close();
        } else {
            throw csv_exception("Nie ma takiego pliku\n");
        }
    }
    catch (csv_exception whatException){
        cout << "ERROR: " << whatException.what();
        exit(1);
    }
}
void File::open () {
    try {
        ifstream input(name);
        if (input.is_open()) {
            string line;
            int c_row = 0;
            while (!input.eof()) {
                getline(input, line);
                stringstream ss(line);
                int c_col = 0;
                c_row++;
                while (getline(ss, line, sign)) {
                    text.push_back(line);
                    c_col++;
                    if(c_col > columns){
                        cout << "Blad w linijce " << c_row << endl;
                        throw csv_exception("Za duzo delimiterow\n");
                    }
                }
            }
            input.close();
        } else {
            throw csv_exception("Nie ma takiego pliku\n");
        }
    }
    catch (csv_exception whatException){
        cout << "ERROR: " << whatException.what();
        exit(1);
    }
}

void File::read(int col, int row){
    try {
        if (col == 0 || col > columns) {
            throw csv_exception("Bledna wartosc kolumn\n");
        }
        if (row == 0 || row > rows){
            throw csv_exception("Bledna wartosc wierszy\n");
        }
        cout << text.at((row - 1) * columns + col - 1) << endl;
    }
    catch (csv_exception whatException){
        cout << "ERROR: " << whatException.what();
    }
}

void File::show(){
    int counter = 0;
    for(auto& var : text)
    {
        cout<<var<<" ";
        counter++;
        if(counter%columns == 0){
            cout << endl;
        }
    }
}