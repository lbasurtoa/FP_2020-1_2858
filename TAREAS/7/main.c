#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[]) {

	double x = atof(argv[1]);  // El primer parametro se convierte a double
	double y = atof(argv[2]);  // El segundo parametro se convierte a double
	double z = x;  // El valor de 'x' se copia en la variable 'z'

	for(int i=1; i<y; i++) {  // 'for' se encargara de multiplicar el valor de 'x' por si mismo 'y' veces
		x = x*z;
	}

	printf("%.2f\n", x);  // El valor final de 'x' que resulta en 'x^y' se imprime


	return 0;
}
