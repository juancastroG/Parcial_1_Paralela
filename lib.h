/*Fecha: 10 ago 2022
Autor: Juan Carlos Castro
Tema: Diseño de benchmarks en C
Materia: Computacion paralela y distribuida
Fase 1: Multiplicación de matrices Clásica*/


#ifndef LIB_H_INCLUDED
#define LIB_H_INCLUDED
#include "lib.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <sys/time.h>
#include <time.h>

#include <errno.h>
#include <unistd.h>

/*
     FUNCIONES
*/

// Funcion que calcula el tiempo de ejecucion
void tiempo_inicio();
// Funcion que calcula el tiempo de ejecucion
void tiempo_final();


/**************************BENCHMARK 1 : MM CLASICO CON ENTEROS*******************************/

/*fucion para inicializar la matriz*/
void inicializarMatrices_int(int n, int *matrizA, int *matrizB, int *matrizC);
/*Funcion de impresion*/
void imprimirMatriz_int(int n, int *matriz);
/*Funcion de multiplicacion*/
void multiplicacionMatriz_int(int n, int *matrizA, int *matrizB, int *matrizC);



/**************************BENCHMARK 2 : MM CLASICO CON ENTEROS Y ALEATORIOS*******************************/

/*fucion para inicializar la matriz*/
void inicializarMatrices_int_rnd(int n, int *matrizA, int *matrizB, int *matrizC);


/**************************BENCHMARK 3 : MM CLASICO CON DOUBLES*******************************/

/*fucion para inicializar la matriz*/
void inicializarMatrices_double(int n, double *matrizA, double *matrizB, double *matrizC);
/*Funcion de impresion*/
void imprimirMatriz_double(int n, double *matriz);
/*Funcion de multiplicacion*/
void multiplicacionMatriz_double(int n, double *matrizA, double *matrizB, double *matrizC);


/**************************BENCHMARK 3 : MM CLASICO CON DOUBLES Y ALETORIOS *******************************/

/*fucion para inicializar la matriz*/
void inicializarMatrices_double_rnd(int n, double *matrizA, double *matrizB, double *matrizC);

#endif 



