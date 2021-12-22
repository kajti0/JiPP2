//
// Created by kajet on 29.11.2021.
//
#include <iostream>

using namespace std;

class Note{
protected:
    string title;
public:
    string getTitle();
    void setTitle();
    virtual void getContent();
    virtual void setContent();
};
#ifndef JIPP_NOTE_H
#define JIPP_NOTE_H

#endif //JIPP_NOTE_H
