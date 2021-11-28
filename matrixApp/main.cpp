#include "lib.h"

int main(int argc, char *argv[]){
    try{
        (string) argv[1];
    }
    catch (logic_error){
        cout << "\t\t\tBłąd - nie podano parametru\n\n\n";
        cout << "\t***matrixApp - program do operacji na macierzach***\n";
        cout << "Sposób obsługi: uruchom program, a jako parametr podczas uruchamiania podaj jedną z komend:\n";
        cout << "\taddMatrix - dodawanie macierzy\n\tsubtractMatrix - odejmowanie macierzy\n\tmultiplyMatrix - mnożenie macierzy\n";
        cout << "\tmultiplyByScalar - mnożenie macierzy przez skalar\n\ttranspozeMatrix - transponowanie macierzy\n";
        cout << "\tpowerMatrix - potęgowanie macierzy UWAGA! JAKO DRUGI PARAMETR NALEŻY PODAĆ STOPIEŃ POTĘGI, INACZEJ PROGRAM NIE ZADZIAŁA POPRAWNIE\n";
        cout << "\tdeterminantMatrix - liczenie wyznacznika z macierzy\n\tmatrixIsDiagonal - sprawdzenie, czy macierz jest diagonalna\n";
        cout << "\tsortRowsInMatrix - porządkowanie wierszy macierzy w kolejności rosnącej\n";
        cout << "*program zadziała poprawnie pod warunkiem, że podane wymiary macierzy będą właściwe dla danego obliczenia\n";
        return -1;
    }
    string choice = argv[1];
    if(choice == "addMatrix"){
        int wiersze, kolumny, operation;
        cout << "Podaj ilość wierszy i kolumn w macierzy: ";
        cin >> wiersze >> kolumny;
        cinCheck();
        cout << "Czy Twoje obliczenia będą wykraczać poza zakres zmiennej int?\t(1-tak, 0-nie)\n";
        cin >> operation;
        cinCheck();
        if (operation == 1){
            double **matrixA = createDouble(wiersze, kolumny), **matrixB = createDouble(wiersze, kolumny);
            wczytaj(matrixA, wiersze, kolumny, "A");
            wczytaj(matrixB, wiersze, kolumny, "B");
            show(addMatrix(matrixA, matrixB, wiersze, kolumny), wiersze, kolumny);
        } else if(operation == 0){
            int **matrixA = createInt(wiersze, kolumny), **matrixB = createInt(wiersze, kolumny);
            wczytaj(matrixA, wiersze, kolumny, "A");
            wczytaj(matrixB, wiersze, kolumny, "B");
            show(addMatrix(matrixA, matrixB, wiersze, kolumny), wiersze, kolumny);
        } else {
            cout << "Błąd odczytu danych\n";
            exit(1);
        }
    }
    else if(choice == "subtractMatrix"){
        int wiersze, kolumny, operation;
        cout << "Podaj ilość wierszy i kolumn w macierzy: ";
        cin >> wiersze >> kolumny;
        cinCheck();
        cout << "Czy Twoje obliczenia będą wykraczać poza zakres zmiennej int?\t(1-tak, 0-nie)\n";
        cin >> operation;
        cinCheck();
        if (operation == 1){
            double **matrixA = createDouble(wiersze, kolumny), **matrixB = createDouble(wiersze, kolumny);
            wczytaj(matrixA, wiersze, kolumny, "A");
            wczytaj(matrixB, wiersze, kolumny, "B");
            show(subtractMatrix(matrixA, matrixB, wiersze, kolumny), wiersze, kolumny);
        } else if(operation == 0){
            int **matrixA = createInt(wiersze, kolumny), **matrixB = createInt(wiersze, kolumny);
            wczytaj(matrixA, wiersze, kolumny, "A");
            wczytaj(matrixB, wiersze, kolumny, "B");
            show(subtractMatrix(matrixA, matrixB, wiersze, kolumny), wiersze, kolumny);
        } else {
            cout << "Błąd odczytu danych\n";
            exit(1);
        }
    }
    else if(choice == "multiplyMatrix"){
        int wierszeA, kolumnyA, wierszeB,kolumnyB, operation;
        cout << "Podaj ilość wierszy i kolumn w macierzy A: ";
        cin >> wierszeA >> kolumnyA;
        cinCheck();
        cout << "Podaj ilość wierszy i kolumn w macierzy B: ";
        cin >> wierszeB >> kolumnyB;
        cinCheck();
        cout << "Czy Twoje obliczenia będą wykraczać poza zakres zmiennej int?\t(1-tak, 0-nie)\n";
        cin >> operation;
        cinCheck();
        if (operation == 1){
            double **matrixA = createDouble(wierszeA, kolumnyA), **matrixB = createDouble(wierszeB, kolumnyB);
            wczytaj(matrixA, wierszeA, kolumnyA, "A");
            wczytaj(matrixB, wierszeB, kolumnyB, "B");
            show(multiplyMatrix(matrixA, matrixB, wierszeA, kolumnyA, kolumnyB), wierszeA, kolumnyB);
        } else if(operation == 0){
            int **matrixA = createInt(wierszeA, kolumnyA), **matrixB = createInt(wierszeB, kolumnyB);
            wczytaj(matrixA, wierszeA, kolumnyA, "A");
            wczytaj(matrixB, wierszeB, kolumnyB, "B");
            show(multiplyMatrix(matrixA, matrixB, wierszeA, kolumnyA, kolumnyB), wierszeA, kolumnyB);
        } else {
            cout << "Błąd odczytu danych\n";
            exit(1);
        }
    }
    else if(choice == "multiplyByScalar"){
        int wiersze, kolumny, operation;
        cout << "Podaj ilość wierszy i kolumn w macierzy: ";
        cin >> wiersze >> kolumny;
        cinCheck();
        cout << "Czy Twoje obliczenia będą wykraczać poza zakres zmiennej int?\t(1-tak, 0-nie)\n";
        cin >> operation;
        cinCheck();
        if (operation == 1){
            double **matrixA = createDouble(wiersze, kolumny), scalar;
            wczytaj(matrixA, wiersze, kolumny, "A");
            cout << "Podaj stałą, przez którą ma być pomnożona macierz: ";
            cin >> scalar;
            cinCheck();
            show(multiplyByScalar(matrixA, wiersze, kolumny, scalar), wiersze, kolumny);
        } else if(operation == 0){
            int **matrixA = createInt(wiersze, kolumny), scalar;
            wczytaj(matrixA, wiersze, kolumny, "A");
            cout << "Podaj stałą, przez którą ma być pomnożona macierz: ";
            cin >> scalar;
            cinCheck();
            show(multiplyByScalar(matrixA, wiersze, kolumny, scalar), wiersze, kolumny);
        } else {
            cout << "Błąd odczytu danych\n";
            exit(1);
        }
    }
    else if(choice == "transpozeMatrix"){
        int wiersze, kolumny, operation;
        cout << "Podaj ilość wierszy i kolumn w macierzy: ";
        cin >> wiersze >> kolumny;
        cinCheck();
        cout << "Czy Twoje obliczenia będą wykraczać poza zakres zmiennej int?\t(1-tak, 0-nie)\n";
        cin >> operation;
        cinCheck();
        if (operation == 1){
            double **matrixA = createDouble(wiersze, kolumny);
            wczytaj(matrixA, wiersze, kolumny, "A");
            show(transpozeMatrix(matrixA, wiersze, kolumny), wiersze, kolumny);
        } else if(operation == 0){
            int **matrixA = createInt(wiersze, kolumny);
            wczytaj(matrixA, wiersze, kolumny, "A");
            show(transpozeMatrix(matrixA, wiersze, kolumny), wiersze, kolumny);
        } else {
            cout << "Błąd odczytu danych\n";
            exit(1);
        }
    }
    else if(choice == "powerMatrix"){
        int wiersze, kolumny, operation;
        cout << "Podaj ilość wierszy i kolumn w macierzy: ";
        cin >> wiersze >> kolumny;
        cinCheck();
        cout << "Czy Twoje obliczenia będą wykraczać poza zakres zmiennej int?\t(1-tak, 0-nie)\n";
        cin >> operation;
        cinCheck();
        if (operation == 1){
            double **matrixA = createDouble(wiersze, kolumny), power;
            wczytaj(matrixA, wiersze, kolumny, "A");
            power = stoi(argv[2]);
            show(powerMatrix(matrixA, power, wiersze, kolumny), wiersze, kolumny);
        } else if(operation == 0){
            int **matrixA = createInt(wiersze, kolumny), power;
            wczytaj(matrixA, wiersze, kolumny, "A");
            power = stoi(argv[2]);
            show(powerMatrix(matrixA, power, wiersze, kolumny), wiersze, kolumny);
        } else {
            cout << "Błąd odczytu danych\n";
            exit(1);
        }
    }
    else if(choice == "determinantMatrix"){
        int wiersze, kolumny, operation;
        cout << "Podaj ilość wierszy i kolumn w macierzy: ";
        cin >> wiersze >> kolumny;
        cinCheck();
        cout << "Czy Twoje obliczenia będą wykraczać poza zakres zmiennej int?\t(1-tak, 0-nie)\n";
        cin >> operation;
        cinCheck();
        if (operation == 1){
            double **matrixA = createDouble(wiersze, kolumny);
            wczytaj(matrixA, wiersze, kolumny, "A");
            cout << "Wyznacznik = " << determinantMatrix(matrixA, wiersze, kolumny);
        } else if(operation == 0){
            int **matrixA = createInt(wiersze, kolumny);
            wczytaj(matrixA, wiersze, kolumny, "A");
            cout << "Wyznacznik = " << determinantMatrix(matrixA, wiersze, kolumny);
        } else {
            cout << "Błąd odczytu danych\n";
            exit(1);
        }
    }
    else if(choice == "matrixIsDiagonal"){
        int wiersze, kolumny, operation;
        cout << "Podaj ilość wierszy i kolumn w macierzy: ";
        cin >> wiersze >> kolumny;
        cinCheck();
        cout << "Czy Twoje obliczenia będą wykraczać poza zakres zmiennej int?\t(1-tak, 0-nie)\n";
        cin >> operation;
        cinCheck();
        if (operation == 1){
            double **matrixA = createDouble(wiersze, kolumny);
            wczytaj(matrixA, wiersze, kolumny, "A");
            if (matrixIsDiagonal(matrixA, wiersze, kolumny) == 0){
                cout << "Macierz nie jest diagonalna\n";
            } else{
                cout << "Macierz jest diagonalna\n";
            }
        } else if(operation == 0){
            int **matrixA = createInt(wiersze, kolumny);
            wczytaj(matrixA, wiersze, kolumny, "A");
            if (matrixIsDiagonal(matrixA, wiersze, kolumny) == 0){
                cout << "Macierz nie jest diagonalna\n";
            } else{
                cout << "Macierz jest diagonalna\n";
            }
        } else {
            cout << "Błąd odczytu danych\n";
            exit(1);
        }
    }
    else if(choice == "swap"){
        int choice;
        cout << "Czy twoje obliczenia będą wykraczać poza zakres int? (1 - tak, 0 - nie)\n";
        cin >> choice;
        cinCheck();
        if (choice == 1){
            int a, b;
            cout << "Podaj a: ";
            cin >> a;
            cinCheck();
            cout << "Podaj b: ";
            cin >> b;
            cinCheck();
            swap(a, b);
            cout << "a= " << a << "b= " << b << endl;
        }
        else if(choice == 0){
            double a, b;
            cout << "Podaj a: ";
            cin >> a;
            cinCheck();
            cout << "Podaj b: ";
            cin >> b;
            cinCheck();
            swap(a, b);
            cout << "a= " << a << "\nb= " << b << endl;
        }
    }
    else if(choice == "sortRow"){
        int choice, size;
        cout << "Czy twoje obliczenia będą wykraczać poza zakres int? (1 - tak, 0 - nie)\n";
        cin >> choice;
        cinCheck();
        cout << "Podaj rozmiar wiersza (ilość liczb)\n";
        cin >> size;
        cinCheck();
        if(choice==0){
            int *tab = new int(size);
            cout << "Podaj dane: ";
            for(int i = 0; i<size; i++){
                cin >> tab[i];
                cinCheck();
            }
            sortRow(tab, size);
            cout << "{ ";
            for(int i = 0; i<size; i++){
                cout <<  tab[i];
                if(size < i-1){
                    cout << ", ";
                }
            }
            cout << "}";
        }
        if(choice==1){
            double *tab = new double(size);
            cout << "Podaj dane: ";
            for(int i = 0; i<size; i++){
                cin >> tab[i];
                cinCheck();
            }
            sortRow(tab, size);
            cout << "{ ";
            for(int i = 0; i<size; i++){
                cout <<  tab[i];
                if(i < size - 1){
                    cout << ", ";
                }
            }
            cout << "}";
        }
    }
    else if(choice == "sortRowsInMatrix"){
        int wiersze, kolumny, operation;
        cout << "Podaj ilość wierszy i kolumn w macierzy: ";
        cin >> wiersze >> kolumny;
        cinCheck();
        cout << "Czy Twoje obliczenia będą wykraczać poza zakres zmiennej int?\t(1-tak, 0-nie)\n";
        cin >> operation;
        cinCheck();
        if (operation == 1){
            double **matrixA = createDouble(wiersze, kolumny);
            wczytaj(matrixA, wiersze, kolumny, "A");
            show(sortRowsInMatrix(matrixA, wiersze, kolumny), wiersze, kolumny);
        } else if(operation == 0){
            int **matrixA = createInt(wiersze, kolumny);
            wczytaj(matrixA, wiersze, kolumny, "A");
            show(sortRowsInMatrix(matrixA, wiersze, kolumny), wiersze, kolumny);
        } else {
            cout << "Błąd odczytu danych\n";
            exit(1);
        }
    }
    else if(choice == "help"){
        cout << "\t***matrixApp - program do operacji na macierzach***\n";
        cout << "Sposób obsługi: uruchom program, a jako parametr podczas uruchamiania podaj jedną z komend:\n";
        cout << "\taddMatrix - dodawanie macierzy\n\tsubtractMatrix - odejmowanie macierzy\n\tmultiplyMatrix - mnożenie macierzy\n";
        cout << "\tmultiplyByScalar - mnożenie macierzy przez skalar\n\ttranspozeMatrix - transponowanie macierzy\n";
        cout << "\tpowerMatrix - potęgowanie macierzy UWAGA! JAKO DRUGI PARAMETR NALEŻY PODAĆ STOPIEŃ POTĘGI, INACZEJ PROGRAM NIE ZADZIAŁA POPRAWNIE\n";
        cout << "\tdeterminantMatrix - liczenie wyznacznika z macierzy\n\tmatrixIsDiagonal - sprawdzenie, czy macierz jest diagonalna\n";
        cout << "\tsortRowsInMatrix - porządkowanie wierszy macierzy w kolejności rosnącej\n";
        cout << "*program zadziała poprawnie pod warunkiem, że podane wymiary macierzy będą właściwe dla danego obliczenia\n";
    } else {
        cout << "\t\t\tBłąd - podano zły parametr\n\n\n";
        cout << "\t***matrixApp - program do operacji na macierzach***\n";
        cout << "Sposób obsługi: uruchom program, a jako parametr podczas uruchamiania podaj jedną z komend:\n";
        cout << "\taddMatrix - dodawanie macierzy\n\tsubtractMatrix - odejmowanie macierzy\n\tmultiplyMatrix - mnożenie macierzy\n";
        cout << "\tmultiplyByScalar - mnożenie macierzy przez skalar\n\ttranspozeMatrix - transponowanie macierzy\n";
        cout << "\tpowerMatrix - potęgowanie macierzy UWAGA! JAKO DRUGI PARAMETR NALEŻY PODAĆ STOPIEŃ POTĘGI, INACZEJ PROGRAM NIE ZADZIAŁA POPRAWNIE\n";
        cout << "\tdeterminantMatrix - liczenie wyznacznika z macierzy\n\tmatrixIsDiagonal - sprawdzenie, czy macierz jest diagonalna\n";
        cout << "\tsortRowsInMatrix - porządkowanie wierszy macierzy w kolejności rosnącej\n";
        cout << "*program zadziała poprawnie pod warunkiem, że podane wymiary macierzy będą właściwe dla danego obliczenia\n";
    }
    return 0;
}

