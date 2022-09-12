# Parcial_1_Paralela
Presentación del primer parcial de paralela

## Guia de ejecución

* Descargar el archivo (.zip) / descargarlo con git

* Abrir el editor de texto o entorno de desarrolo de su preferencia ubicando la carpeta recien descargada.

* Ejecutar en orden los siguientes comandos

* - 'Make clean'
* - 'Make all'
* (En caso de que quiera ejecutar el automatizador, el cual permite capturar varios tiempos en la operación de diferentes tamaños de matrices):
* - './lanzador.pl'
*  (En caso que quiera ejecutar una unica operacion de matriz y obtener el tiempo de ejecucion):
* - Ejecutar el algoritmo de su interes (int, int_rnd, double, double_rnd):
* - './mm_main_int 20' (El numero indica el tamaño de matriz con el que deseamos hacer la prueba).

## Descripción Archivos

* Makefile : Permite automatizar el proceso de ejecución, se encarga de invocar a las bibliotecas y de general los archivos de salida, adeamás de limpiar los mismo ejecutables generados.

* lib.h : Hace referencia a la interfaz creada, es donde se crean las funciones que serán llamadas en el archivo de funciones.c.

* mm_main_int.c : Contiene el metodo main y esta en lazada con la interfaz y el archivo funciones.c, es el archivo donde se hace el llamado de las funciones que se van a utilizar.

* mm_main_int_rnd.c : Contiene el metodo main y esta en lazada con la interfaz y el archivo funciones.c, es el archivo donde se hace el llamado de las funciones que se van a utilizar.

* mm_main_double.c : Contiene el metodo main y esta en lazada con la interfaz y el archivo funciones.c, es el archivo donde se hace el llamado de las funciones que se van a utilizar.

* mm_main_double_rnd : Contiene el metodo main y esta en lazada con la interfaz y el archivo funciones.c, es el archivo donde se hace el llamado de las funciones que se van a utilizar.

* funciones.c : Este archivo representa las funciones y hace el trabajo de un modulo/biblioteca conectando el archivo que contiene el metodo main y las funciones que se llaman en este. creadas previamente en la interfaz.
