#include "lib.h"

int **createInt(int wiersze, int kolumny) {
    int **matrix = new int *[wiersze];
    for(int i = 0; i < wiersze; i++){
        matrix[i] = new int [kolumny];
    }
    return matrix;
}

double **createDouble(int wiersze, int kolumny) {
    double **matrix = new double *[wiersze];
    for(int i = 0; i < wiersze; i++){
        matrix[i] = new double [kolumny];
    }
    return matrix;
}

void wczytaj (int **matrix, int wiersze, int kolumny, string which){
    for(int i = 0; i < wiersze; i++){
        for(int j = 0; j < kolumny; j++){
            cout << "Matrix" << which << i+1 << j+1 <<  " = ";
            cin >> matrix[i][j];
        }
    }
}

void wczytaj (double **matrix, int wiersze, int kolumny, string which){
    for(int i = 0; i < wiersze; i++){
        for(int j = 0; j < kolumny; j++){
            cout << "Matrix" << which << i+1 << j+1 <<  " = ";
            cin >> matrix[i][j];
        }
    }
}

void show(int **matrix, int wiersze, int kolumny){
    cout << "Wynik: " << endl;
    for (int i = 0; i < wiersze; i++){
        for (int j = 0; j < kolumny; j++){
            cout << matrix[i][j] << "\t";
        }
        cout << "\n";
    }
}

void show(double **matrix, int wiersze, int kolumny){
    cout << "Wynik: " << endl;
    for (int i = 0; i < wiersze; i++){
        for (int j = 0; j < kolumny; j++){
            cout << matrix[i][j] << "\t";
        }
        cout << "\n";
    }
}

int **addMatrix(int **matrixA, int **matrixB, int wiersze, int kolumny){
    int **sumMatrix = createInt(wiersze, kolumny);
    for(int i = 0; i < wiersze; i++){
        for(int j = 0; j < kolumny; j++){
            sumMatrix[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
    return sumMatrix;
}

double **addMatrix(double **matrixA, double **matrixB, int wiersze, int kolumny){
    double **sumMatrix = createDouble(wiersze,kolumny);
    for(int i = 0; i < wiersze; i++){
        for(int j = 0; j < kolumny; j++){
            sumMatrix[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
    return sumMatrix;
}

int **subtractMatrix(int **matrixA, int **matrixB, int wiersze, int kolumny){
    int **wynik = createInt(wiersze, kolumny);
    for(int i = 0; i < wiersze; i++){
        for(int j = 0; j < kolumny; j++){
            wynik[i][j] = matrixA[i][j] - matrixB[i][j];
        }
    }
    return wynik;
}

double **subtractMatrix(double **matrixA, double **matrixB, int wiersze, int kolumny){
    double **wynik = createDouble(wiersze, kolumny);
    for(int i = 0; i < wiersze; i++){
        for(int j = 0; j < kolumny; j++){
            wynik[i][j] = matrixA[i][j] - matrixB[i][j];
        }
    }
    return wynik;
}

int **multiplyMatrix(int **matrixA, int **matrixB, int wierszeA, int kolumnyA, int kolumnyB){
    int **wynik = createInt(wierszeA, kolumnyB);
    for (int i = 0; i < wierszeA; i++){
        for (int j = 0; j < kolumnyB; j++){
            wynik[i][j] = 0;
            for (int k = 0; k < kolumnyA; k++){
                wynik[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
    return wynik;
}

