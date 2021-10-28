#include "lib.h"

int main(int argc, char *argv[]){
    if ((string)(argv[1]) == "addMatrix"){
        string choice = "Tak";
        int wierszeA = 3, kolumnyA = 3;
        int wierszeB = 2, kolumnyB = 3;
        if (choice == "Tak" || choice == "tak" || choice == "TAK"){
            int **matrixA = new int *[wierszeA];
            int **matrixB = new int *[wierszeA];
            int **sum;
            for(int i = 0; i < wierszeA; i++){
                matrixA [i] = new int [kolumnyA];
            }
            for(int i = 0; i < wierszeB; i++){
                matrixB [i] = new int [kolumnyB];
            }
            wczytaj(matrixA, wierszeA, kolumnyA, "A");
            wczytaj(matrixB, wierszeB, kolumnyB, "B");
            int x = matrixIsDiagonal(matrixA, 3, 3);
            cout << x << endl;
        }
    }
    return 0;
}

