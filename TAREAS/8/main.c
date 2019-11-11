#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[]) {

	int x = atoi(argv[1]);  // El primer argumento (0 o 1) se convierte a entero
	double y = atof(argv[2]);  // El segundo argumento (grados) se convierte a double
	double z;  // Se declara z como double

	if(x==0) {
		z = 1.8*y + 32;  // Opcion 0: convierte grados Celsius a Fahrenheit
	}                        
	else {
		if (x==1) {
			z = (y-32) / 1.8;  // Opcion 1: convierte grados Fahrenheit a Celsius
		}
	}

	printf("%.2f\n", z);  // El valor convertido se guarda en la variable 'z' y se imprime


	return 0;
}
