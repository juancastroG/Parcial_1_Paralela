#!/usr/bin/perl
=begin
Fecha: 26 ago 2022
Autor: Juan Carlos Castro
Tema: Automatización de baterias de experimentos
Materia: Parallel and Distributed Computing
Requeriemntos:
	- Vector de benchmars <ejecutables>
	- Vector de cargas
	- N: repeticiones
	- La idea es iterar por ejecutables *cargas* repeticiones
=cut
#Se crea el vector de ejecutables
@ejecutables = ("mm_main_double","mm_main_double_rnd");
#Se crea el vector de cargas
@cargas = ("287","325","525","765","1000","1200","1500","1700","2100","2400","2650","2777");
#Se crea el vector de repeticiones
$N = 30;

foreach $exes (@ejecutables) {
	foreach $cargas (@cargas) {
		#Se crea el nombre del archivo de salida
		$file = "Soluciones/".$exes."_".$cargas.".txt";
		for ($i = 0; $i < $N; $i++) {
		system("./$exes $cargas >>  $file");
		}
	}
}