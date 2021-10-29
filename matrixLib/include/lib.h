#ifndef JIPP_LIB_H
#define JIPP_LIB_H

#include <iostream>
#include <cstdlib>
#include <limits>

using namespace std;

void cinCheck();
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
double **multiplyMatrix(double **matrixA, double **matrixB, int wierszeA, int kolumnyA, int kolumnyB);
int **multiplyByScalar(int **matrixA, int wiersze, int kolumny, int skalar);
double **multiplyByScalar(double **matrixA, int wiersze, int kolumny, double skalar);
int **transpozeMatrix(int **matrixA, int wiersze, int kolumny);
double **transpozeMatrix(double **matrixA, int wiersze, int kolumny);
int **powerMatrix(int **matrixA, int power, int wiersze, int kolumny);
double **powerMatrix(double **matrixA, int power, int wiersze, int kolumny);
void detPom(int **matrixA, int **pom, int p, int q, int size);
int determinantMatrix(int **matrixA, int wiersze, int kolumny);
void detPom(double **matrixA, double **pom, int p, int q, int size);
double determinantMatrix(double **matrixA, int wiersze, int kolumny);
bool matrixIsDiagonal(int **matrixA, int wiersze, int kolumny);
bool matrixIsDiagonal(double **matrixA, int wiersze, int kolumny);
void swap(int &a, int &b);
void swap(double &a, double &b);
int *sortRow(int *tab, int kolumny);
double *sortRow(double *tab, int kolumny);
int **sortRowsInMatrix(int **matrixA, int wiersze, int kolumny);
double **sortRowsInMatrix(double **matrixA, int wiersze, int kolumny);


#endif //JIPP_LIB_H