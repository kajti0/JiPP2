//
// Created by kajet on 08.12.2021.
//

#include "Punkt.h"
#include "Figura.h"

int main(){
    Punkt a(1,2), b(3,4);
    cout << "Dystans = " << distance(a, b) << endl;
    Figura kwadrat(4);
    return 0;
}
