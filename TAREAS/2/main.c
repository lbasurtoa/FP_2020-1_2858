#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {

	int n;  // Se declara la variable 'n' como entero

	n=atoi(argv[1]);  // El argumento en la posicion 1 que recibe la funcion se convierte a valor entero

	if(n%2==0) { 
		printf("1\n");  // Si el valor es divisible entre 2 se imprime '1'
	}
	else {
		printf("0\n");  // Si el valor no es divisible entre 2 se imprime '2'
	}


	return 0;
}
