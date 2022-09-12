/*Fecha: 26 ago 2022
Autor: Juan Carlos Castro
Tema: Diseño de benchmarks en C
Materia: Computacion paralela y distribuida
Fase 1: Multiplicación de matrices Clásica*/


/*Se requiere reservar un espacio de memoria*/
#define RESERVAR_MEMORIA (1024*1024*64*3)

static double MEM_CHUNK[RESERVAR_MEMORIA];

#include "lib.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <sys/time.h>

int main(int argc, char **argv){
    //Se pide la dimension de la matriz
    int n;
    double *matrizA, *matrizB, *matrizC;
    n = (int)atoi(argv[1]);
    //Se imprime la dimension de la matriz
    //Se declara la matriz
    int tamano = n*n;

    /*Se apunta los punteros a la direccion de memoria reservada , segun el tamaño de la matriz NxN*/
    matrizA = MEM_CHUNK;
    matrizB = matrizA + tamano;
    matrizC = matrizB + tamano;
    
    
    inicializarMatrices_double(n, matrizA, matrizB, matrizC);
    
    //Se imprime las matrices

    
    
    imprimirMatriz_double(n, matrizA);
    imprimirMatriz_double(n, matrizB);
    imprimirMatriz_double(n, matrizC);
    
    tiempo_inicio();
    multiplicacionMatriz_double(n, matrizA, matrizB, matrizC);
    tiempo_final();
    imprimirMatriz_double(n, matrizC);
    
    printf("\n\n");
    return 0;    
}