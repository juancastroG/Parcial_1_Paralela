
/*Fecha: 10 ago 2022
Autor: Juan Carlos Castro
Tema: Diseño de benchmarks en C
Materia: Computacion paralela y distribuida
Fase 1: Multiplicación de matrices Clásica*/



/*Se requiere reservar un espacio de memoria*/
#define RESERVAR_MEMORIA (1024*1024*64*3)

static int MEM_CHUNK[RESERVAR_MEMORIA];

#include "lib.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <sys/time.h>

int main(int argc, char **argv){
    //Se pide la dimension de la matriz
    int n;
    int *matrizA, *matrizB, *matrizC;
    n = (int)atoi(argv[1]);
    //Se imprime la dimension de la matriz
    //Se declara la matriz
    int tamano = n*n;

    /*Se apunta los punteros a la direccion de memoria reservada , segun el tamaño de la matriz NxN*/
    matrizA = MEM_CHUNK;
    matrizB = matrizA + tamano;
    matrizC = matrizB + tamano;
    
    
    inicializarMatrices_int(n, matrizA, matrizB, matrizC);
    
    //Se imprime las matrices

    
    
    imprimirMatriz_int(n, matrizA);
    imprimirMatriz_int(n, matrizB);
    imprimirMatriz_int(n, matrizC);
    
    tiempo_inicio();
    multiplicacionMatriz_int(n, matrizA, matrizB, matrizC);
    tiempo_final();
    imprimirMatriz_int(n, matrizC);
    
    printf("\n\n");
    return 0;    
}









