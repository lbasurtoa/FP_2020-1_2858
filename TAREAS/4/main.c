#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[]) {

	float lista[argc]; // Se declara una lista con 'argc' elementos 
	float Suma = 0;    // Se declara la variable 'Suma' que contendra la suma de los elementos de la lista
	float Promedio;  // Se declara la variable que guardara el valor del promedio

	for(int i=1; i<argc; i++) {
		lista[i] = atof(argv[i]); // Cada numero ingresado se convirte a float y se coloca en la lista
	}

	for(int i=1; i<argc; i++) {
		Suma = Suma + lista[i]; // Cada elemento de la lista se suma y se guarda en la variable 'Suma'
	}

	Promedio = Suma / (argc-1); // Se calcula e imprime el promedio de los valores
	printf("%.2f\n", Promedio); 


	return 0;
}
