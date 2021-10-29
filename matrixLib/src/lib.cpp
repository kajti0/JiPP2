#include "lib.h"

/*sprawdza za pomocą cin.fail, czy
 * wystąpił błąd podczas wszytywania
 * danych */
void cinCheck(){
    if(cin.fail() == 1){
        cout << "Podano niepoprawny typ danych\n";
        exit(1);
    }
}

//alokuje tablicę i zwraca wskaźnik do niej
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

//wczytuje tablicę, zabezpiecza przed podaniem znaków innych niż cyfra
void wczytaj (int **matrix, int wiersze, int kolumny, string which){
    for(int i = 0; i < wiersze; i++){
        for(int j = 0; j < kolumny; j++){
            cout << "Matrix" << which << i+1 << j+1 <<  " = ";
            cin >> matrix[i][j];
            cinCheck();
        }
    }
}

void wczytaj (double **matrix, int wiersze, int kolumny, string which){
    for(int i = 0; i < wiersze; i++){
        for(int j = 0; j < kolumny; j++){
            cout << "Matrix" << which << i+1 << j+1 <<  " = ";
            cin >> matrix[i][j];
            cinCheck();
        }
    }
}


//wyświetla wynik
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

//dodawanie element po elemencie w podwójnej pętli for
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

//odejmowanie element po elemencie w podwójnej pętli for
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

/*mnożenie macierzy przez macierz w potrójnej pętli for,
 * trzecia pętla zbiera sumę do jednego elementu
 * macierzy wynikowej
 */
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

double **multiplyMatrix(double **matrixA, double **matrixB, int wierszeA, int kolumnyA, int kolumnyB){
    double **wynik = createDouble(wierszeA, kolumnyB);
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

//mnożenie każdego elementu macierzy przez podany skalar
int **multiplyByScalar(int **matrixA, int wiersze, int kolumny, int skalar){
    for(int i = 0; i < wiersze; i++){
        for(int j = 0; j < kolumny; j++){
            matrixA[i][j] *= skalar;
        }
    }
    return matrixA;
}

double **multiplyByScalar(double **matrixA, int wiersze, int kolumny, double skalar){
    for(int i = 0; i < wiersze; i++){
        for(int j = 0; j < kolumny; j++){
            matrixA[i][j] *= skalar;
        }
    }
    return matrixA;
}

//przepisanie elementów do macierzy wynikowej w odwrotnej kolejności (zamiana kolumn z wierszami)
int **transpozeMatrix(int **matrixA, int wiersze, int kolumny){
    int **wynik = createInt(kolumny, wiersze);
    for(int i = 0; i < wiersze; i++){
        for(int j = 0; j < kolumny; j++){
            wynik[j][i] = matrixA[i][j];
        }
    }
    return wynik;
}

double **transpozeMatrix(double **matrixA, int wiersze, int kolumny){
    double **wynik = createDouble(kolumny, wiersze);
    for(int i = 0; i < wiersze; i++){
        for(int j = 0; j < kolumny; j++){
            wynik[j][i] = matrixA[i][j];
        }
    }
    return wynik;
}

//potęgowanie - stworzenie drugiej macierzy A i mnożenie jej aż do uzyskania wyniku
int **powerMatrix(int **matrixA, int power, int wiersze, int kolumny){
    int **wynik = createInt(wiersze, kolumny);
    for(int i = 0; i < wiersze; i++){
        for(int j = 0; j < kolumny; j++){
            wynik[i][j] = matrixA[i][j];
        }
    }
    for(int i = 1; i < power; i++){
        wynik = multiplyMatrix(wynik, matrixA, wiersze, wiersze, wiersze);
    }
    return wynik;
}

double **powerMatrix(double **matrixA, int power, int wiersze, int kolumny){
    double **wynik = createDouble(wiersze, kolumny);
    for(int i = 0; i < wiersze; i++){
        for(int j = 0; j < kolumny; j++){
            wynik[i][j] = matrixA[i][j];
        }
    }
    for(int i = 1; i < power; i++){
        wynik = multiplyMatrix(wynik, matrixA, wiersze, wiersze, wiersze);
    }
    return wynik;
}

//funkcja pomocnicza skracająca macierz do liczenia wyznacznika
void detPom(int **matrixA, int **pom, int p, int q, int size){
    int x = 0, y = 0;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(i != p && j != q){
                pom[x][y++] = matrixA[i][j];
                if(y == size - 1){
                    y = 0;
                    x++;
                }
            }
        }
    }
}

//funkcja rekurencyjnie licząca wyznacznik, skracająca macierz do momentu, aż stanie się jednoelementowa
int determinantMatrix(int **matrixA, int wiersze, int kolumny){
    int wynik = 0;
    if(wiersze == 1){
        return matrixA[0][0];
    }
    int **pom = createInt(wiersze, kolumny);
    int znak = 1;
    for (int i = 0; i < wiersze; i++){
        detPom(matrixA, pom, 0, i, wiersze);
        wynik += znak * matrixA[0][i] * determinantMatrix(pom, wiersze - 1, kolumny - 1);
        znak *= -1;
    }
    return wynik;
}

void detPom(double **matrixA, double **pom, int p, int q, int size){
    int x = 0, y = 0;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(i != p && j != q){
                pom[x][y++] = matrixA[i][j];
                if(y == size - 1){
                    y = 0;
                    x++;
                }
            }
        }
    }
}

double determinantMatrix(double **matrixA, int wiersze, int kolumny){
    double wynik = 0;
    if(wiersze == 1){
        return matrixA[0][0];
    }
    double **pom = createDouble(wiersze, kolumny);
    int znak = 1;
    for (int i = 0; i < wiersze; i++){
        detPom(matrixA, pom, 0, i, wiersze);
        wynik += znak * matrixA[0][i] * determinantMatrix(pom, wiersze - 1, kolumny - 1);
        znak *= -1;
    }
    return wynik;
}

//funkcja sprawdzająca, czy elementy poza przekątną są różne od zera
bool matrixIsDiagonal(int **matrixA, int wiersze, int kolumny){
    for(int i = 0; i < wiersze; i++){
        for(int j = 0; j < kolumny; j++){
            if(matrixA[i][j] != 0 && i != j){
                return false;
            }
        }
    }
    return true;
}

bool matrixIsDiagonal(double **matrixA, int wiersze, int kolumny){
    for(int i = 0; i < wiersze; i++){
        for(int j = 0; j < kolumny; j++){
            if(matrixA[i][j] != 0.0 && i != j){
                return false;
            }
        }
    }
    return true;
}

//zamiana dwóch wartości przez referencję
void swap(int &a, int &b){
    int pom = a;
    a = b;
    b =  pom;
}

void swap(double &a, double &b){
    int pom = a;
    a = b;
    b =  pom;
}

//sortowanie bąbalkowe tablicy jednowymiarowej z wykorzystaniem powyższego swapa
int *sortRow(int *tab, int kolumny){
    for(int i = 0; i < kolumny; i++){
        for(int j = 1; j < kolumny - i; j++){
            if(tab[j-1] > tab [j]){
                swap(tab[j-1], tab[j]);
            }
        }
    }
    return tab;
}

double *sortRow(double *tab, int kolumny){
    for(int i = 0; i < kolumny; i++){
        for(int j = 1; j < kolumny - i; j++){
            if(tab[j-1] > tab [j]){
                swap(tab[j-1], tab[j]);
            }
        }
    }
    return tab;
}

//funkcja sortująca rzędy w macierzy wykorzystująca wyżej napisane sortowanie pojedynczego rzędu
int **sortRowsInMatrix(int **matrixA, int wiersze, int kolumny){
    for(int i = 0; i < wiersze; i++){
        sortRow(matrixA[i], kolumny);
    }
    return matrixA;
}
double **sortRowsInMatrix(double **matrixA, int wiersze, int kolumny){
    for(int i = 0; i < wiersze; i++){
        sortRow(matrixA[i], kolumny);
    }
    return matrixA;
}
