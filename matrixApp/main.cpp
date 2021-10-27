#include "lib.h"

int main(int argc, char *argv[]){
    if ((string)(argv[1]) == "addMatrix"){
        string choice;
        int wiersze, kolumny;
        cout << "Podaj ilość wierszy i kolumn twojej macierzy" << endl;
        cin >> wiersze >> kolumny;
        cout << "Czy Twoje obliczenia będą wykraczać poza liczby całkowite?" << endl;
        cin >> choice;
        if (choice == "Tak" || choice == "tak" || choice == "TAK"){
            double **matrixA = new double *[wiersze];
            double **matrixB = new double *[wiersze];
            double **sum;
            for(int i = 0; i < wiersze; i++){
                matrixA [i] = new double [kolumny];
                matrixB [i] = new double [kolumny];
            }
            wczytaj(matrixA, wiersze, kolumny, "A");
            wczytaj(matrixB, wiersze, kolumny, "B");
            sum = addMatrix(matrixA, matrixB, wiersze, kolumny);
            show (sum, wiersze, kolumny);
        }
    }
    return 0;
}

