#ifndef JIPP_LIB_H
#define JIPP_LIB_H

#include <iostream>
#include <cstdlib>

using namespace std;

int **createInt(int wiersze,int kolumny);
double **createDouble(int wiersze,int kolumny);
void wczytaj (int **matrix, int wiersze, int kolumny, string which);
void wczytaj (double **matrix, int wiersze, int kolumny, string which);
void show (int **matrix, int wiersze, int kolumny);
void show (double **matrix, int wiersze, int kolumny);
int **addMatrix(int **matrixA, int **matrixB, int wiersze, int kolumny);
double **addMatrix(double **matrixA, double **matrixB, int wiersze, int kolumny);
int **subtractMatrix(int **matrixA, int **matrixB, int wiersze, int kolumny);
double **subtractMatrix(double **matrixA, double **matrixB, int wiersze, int kolumny);
int **multiplyMatrix(int **matrixA, int **matrixB, int wierszeA, int kolumnyA, int kolumnyB);


#endif //JIPP_LIB_H