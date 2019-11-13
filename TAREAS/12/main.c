#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Saludos( int personas ) {  // Se declara la funcion que se encargara de sumar el numero de saludos

	if( personas==0 ) {
		return 0;
	}

	return Saludos(personas-1) + (personas-1);  // La funcion sumara todos los numeros enteros desde 1 hasta el numero de personas -1
}


int main( int argc, char *argv[]) {  // En la funcion principal se llamara a la funcion 'Saludos' para hacer la suma

	int personas = atoi(argv[1]);  // El argumento ingresado en la funcion 'main' se convierte a entero para trabajar con el

	printf("%i\n", Saludos(personas));  // Se llama a la funcion 'Saludos' dentro de printf y se imprime el resultado


	return 0;
}
