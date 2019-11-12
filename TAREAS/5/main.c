#include <stdio.h>
#include <stdlib.h>

int valorLetras(char n) {  // Con esta funcion se asigna un valor numerico a cada caso de letra

	int z;

	switch(n){

		case 'J': z=10;
		break;

		case 'Q': z=10;
		break;

		case 'K': z=10;
		break;

		case 'A': z=11;
		break;
	}

	return z;
}


int main(int argc, char *argv[]) {

	int valor, X;  // X tendra un valor booleano dentro de la funcion

	for(int i=1; i<argc; i++) {

		X = argv[i][0]=='J' || argv[i][0]=='Q' || argv[i][0]=='K' || argv[i][0]=='A';

		if(X==1) {
			valor = valorLetras(argv[i][0]);  // Si alguno de los argumentos es alguna de las letras J, Q, K o A,
		}                                     // la funcion 'valorLetras' convertira el caracter en un valor entero
		else {
			valor = atoi(argv[i]);            // Si el argumento es un valor entre 2 y 10, el caracter se convertira en entero
		}

		printf("%i\n", valor);
	}


	return 0;
}