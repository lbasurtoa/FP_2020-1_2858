#include <stdio.h>
#include <stdlib.h>

int valorLetras(char n) { // Con esta funcion se asigna un valor numerico a cada caso de letra

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

	int valor;
	int i=1,
	int X;  // X tendra un valor booleano dentro de la funcion

	for(int i=1; i<argc; i++) {

		X = argv[i][0]=='J' || argv[i][0]=='Q' || argv[i][0]=='K' || argv[i][0]=='A';

		if(X==1) {
			valor = valorLetras(argv[i][0]);
		}

		else {
			valor = atoi(argv[i]);
		}

		printf("%i\n", valor);
	}


	return 0;
}