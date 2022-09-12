
#Fecha: 10 ago 2022
#Autor: Juan Carlos Castro
#Tema: Diseño de benchmarks en C
#Materia: Computacion paralela y distribuida
#Fase 1: Multiplicación de matrices Clásica

GCC = gcc
GFLAGS = -ansi -pedantic -Wall -std=c99 -D_POSIX_C_SOURCE=199309L
PROGRAMAS = mm_main_int mm_main_int_rnd mm_main_double mm_main_double_rnd

all: $(PROGRAMAS)
mm_main_int: 

	$(GCC) $(GFLAGS) -c $@.c
	$(GCC) $(GFLAGS) -c funciones.c
	$(GCC) $(GFLAGS) -o $@ $@.o funciones.o

mm_main_int_rnd: 

	$(GCC) $(GFLAGS) -c $@.c
	$(GCC) $(GFLAGS) -c funciones.c
	$(GCC) $(GFLAGS) -o $@ $@.o funciones.o

mm_main_double: 

	$(GCC) $(GFLAGS) -c $@.c
	$(GCC) $(GFLAGS) -c funciones.c
	$(GCC) $(GFLAGS) -o $@ $@.o funciones.o

mm_main_double_rnd:

	$(GCC) $(GFLAGS) -c $@.c
	$(GCC) $(GFLAGS) -c funciones.c
	$(GCC) $(GFLAGS) -o $@ $@.o funciones.o

clean:
	$(RM) *.o $(PROGRAMAS)
