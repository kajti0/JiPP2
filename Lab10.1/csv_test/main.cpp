//
// Created by kajet on 03.01.2022.
//

#include "lib.h"

int main()
{
    File plik;
    plik.open();
    plik.read(0, 13);
    plik.show();
    return 0;
}

