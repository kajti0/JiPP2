//
// Created by kajet on 03.01.2022.
//

#ifndef JIPP_LIB_H
#define JIPP_LIB_H
#include <iostream>
#include <fstream>
#include <utility>
#include <vector>
#include <exception>
#include <sstream>

using namespace std;

class File{
    ifstream input;
    char sign;
    string name;
    unsigned int columns, rows;
    vector <string> text;
public:
    void open();
    void read(int col, int row);
    void show();
    File();
};

class csv_exception: public exception {
private:
    string exceptionText;
public:
    csv_exception(string exceptionText1): exceptionText(exceptionText1) {}
    const string what() {
        return exceptionText;
    }
};



#endif //JIPP_LIB_H
